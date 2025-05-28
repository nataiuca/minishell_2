/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 18:21:09 by jgamarra          #+#    #+#             */
/*   Updated: 2025/05/28 22:05:36 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# define PROMPT "minishell$ "
# define PROMPT_ERROR "minishell: "
# define MAXARGS 10
# define TOKEN_WORD 'a'
# define TOKEN_APPEND '+'
# define FILE_BUFFER_SIZE 4096
# define HISTFILE_NAME ".minishell_history"
# define HISTFILE_MAX 500

# include "lib/libft/libft.h"
# include <errno.h>
# include <limits.h>
# include <readline/history.h>
# include <readline/readline.h>
# include <signal.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <termios.h>
# include <unistd.h>

typedef enum e_type
{
	EXEC,
	REDIR,
	PIPE,
	HDOC,
	ECHOS,
	CD,
	PWD,
	EXPORT,
	UNSET,
	ENV,
	EXIT
}					t_type;

typedef struct s_history
{
	char			**entries;
	int				count;
	int				capacity;
}					t_history;

typedef struct minishell
{
	char			**path_env;
	char			**env;
	int				*exported;
	int				status;
	bool			error_syntax;
	t_history		*history;
	int				history_disabled;
}					t_minishell;

typedef struct echocmd
{
	int				type;
	bool			new_line;
	bool			simple_quote;
	bool			double_quote;
	bool			invalid;
}					t_echocmd;

typedef struct cmd
{
	t_type			type;
}					t_cmd;

typedef struct execcmd
{
	int				type;
	char			*argv[MAXARGS];
	char			*eargv[MAXARGS];
}					t_execcmd;

typedef struct pipecmd
{
	int				type;
	t_cmd			*left;
	t_cmd			*right;
}					t_pipecmd;

typedef struct redircmd
{
	int				type;
	t_cmd			*cmd;
	char			*file;
	char			*efile;
	int				mode;
	mode_t			right;
	int				fd;
	char			*hdoc;
}					t_redircmd;

typedef enum e_response_msg
{
	CMD_NOT_FOUND,
	NO_SUCH_FILE,
	PERM_DENIED,
	AMBIGUOUS,
	TOO_MANY_ARGS,
	NUMERIC_REQUI
}					t_response_msg;

typedef enum e_response_code
{
	SUCCESS,
	GENERAL,
	CANT_EXEC = 126,
	NOT_FOUND,
	EXEC_255 = 255
}					t_response_code;

typedef struct s_response
{
	t_response_code	no;
	t_response_msg	msg;
	char			*cause;
}					t_response;

/* env_init.c */
void				init_env(t_minishell *minishell, char **envp);
char				*get_env_value(t_minishell *minishell, char *key);
int					env_exists(t_minishell *minishell, char *key);

/* env_update.c */
void				upd_env_value(t_minishell *ms, char *key, char *value,
						int exported);

/* env_create.c */
void				new_env_value(t_minishell *ms, char *key, char *value,
						int exported);
void				remove_env_value(t_minishell *minishell, char *key);

/* env_impl.c */
void				env_impl(t_cmd *cmd, t_minishell *minishell);

/* params */
void				valid_inital_param(int argc, char **envp,
						t_minishell *minishell);
void				prepare_minishell(t_minishell *minishell);

/* safe functions */
void				*safe_malloc(size_t size);
pid_t				safe_fork(void);
int					safe_open(char *file, int flags, mode_t mode);
void				safe_pipe(int *pipefd);

/* interactive */
void				catch_signal(void);
void				save_history(char *input);
char				*check_input_valid(char *input);
void				catch_interactive(t_minishell *minishell, char *input,
						char *prompt);
void				disable_echoctl(void);

/* safe_free.c */
void				safe_free_vector(char **split);
void				safe_free_minishell(t_minishell *minishell);
void				free_cmd(t_cmd *cmd);

/* str_util */
int					ft_strcountchr(char *str, char chr);
char				*trim_space_char(char *input);
char				*ft_strreplace(char *str, char *old, char *new);
bool				valid_quotes(char *input, char quote);

/* token.c */
int					gettoken(char **ps, char *es, char **q, char **eq);
int					peek(char **ps, char *es, char *toks);

/* cmd_controller.c */
void				exec_command(char *command, char **args);
void				control_cmd(t_cmd *cmd, t_minishell *minishell);
void				valid_command(t_execcmd *ecmd, t_minishell *minishell);

/* redirection.c */
t_cmd				*parseredirs(struct cmd *cmd, char **ps, char *es,
						t_minishell *mshell);

/* heredoc.c */
char				*process_heredoc(char *q, char *eq);

/* nulterminate.c */
t_cmd				*nulterminate(t_cmd *cmd);

/* line.c */
t_cmd				*nulterminate2(t_cmd *cmd);
void				panic(char *s);
int					fork1(void);

/* cmd_impl.c */
void				run_external(t_cmd *cmd, t_minishell *minishell);
void				runcmd(t_cmd *cmd, t_minishell *minishell);

/* cmd_util.c */
void				print_expand_var(t_cmd *cmd, int idx, int *pos,
						t_minishell *minishell);
char				*getenv_minishell(t_minishell *minishell, char *key);

/* quote.c */
int					is_valid_quote(t_cmd *cmd, t_minishell *minishell);

/* util.c */
void				init_var(char *arg[2]);

/* export.c */
void				export_impl(t_cmd *cmd, t_minishell *minishell);

/* vector */
int					ft_vector_size(char **split);
void				print_vector(char **vector);
void				safe_free_vector_elem(char **split);
char				**ft_vector_add_first(char **vector, char *new);
void				ft_vector_remove_last_element(char **argv);
void				ft_vector_trim(char **argv);
void				replace_element_index(char **split, int index, char *tmp);
char				**add_next_index_element(char **split, int index,
						char *tmp);

/* builtin_impl.c */
char				*expand_variables(char *arg, t_minishell *minishell);
void				remove_quotes(t_execcmd *ecmd, int idx);
char				*remove_quotes_simple(char *str);

/* controller.c */
int					valid_builtins(t_cmd *cmd);
void				run_internal(t_cmd *cmd, t_minishell *minishell);

/* exit.c */
void				exit_impl(t_cmd *cmd, t_minishell *minishell);

/* cd.c */
void				cd_impl(t_cmd *cmd, t_minishell *minishell);

/* pwd.c */
void				pwd_impl(t_cmd *cmd, t_minishell *minishell);

/* error.c */
void				export_error(char *argument, t_minishell *minishell);
void				unset_error(char *argument, t_minishell *minishell);

/* unset.c */
void				unset_impl(t_cmd *cmd, t_minishell *minishell);

/* echo.c */
void				echo_impl(t_cmd *cmd, t_minishell *minishell);

/* parse.c */
t_cmd				*parsepipe(char **ps, char *es, t_minishell *minishell);
t_cmd				*parsecmd(char *s, t_minishell *minishell);

/* argument.c */
t_cmd				*parseexec(char **ps, char *es, t_minishell *minishell);

/* constructor.c */
t_cmd				*execcmd(void);
t_cmd				*redircmd(t_cmd *subcmd, char *file, char *efile,
						char redir);
t_cmd				*pipecmd(t_cmd *left, t_cmd *right);
t_cmd				*redircmd_hdoc(t_cmd *subcmd, char *hdoc);

/* token_util.c */
char				*skip_whitespace(char *s, char *es);
int					classify_token_type(char *s, char *es, char **out);

/* cmd_handle.c */
void				handle_cmd_exec(t_execcmd *ecmd, t_minishell *minishell);
void				handle_cmd_redir(t_redircmd *rcmd, t_minishell *minishell);
void				handle_cmd_pipe(t_pipecmd *pcmd, t_minishell *minishell);

/* leaks.c */
void				check_leaks(void);

/* history */
void				history_clear(t_history *hist);
int					get_print_start(t_history *hist, const char *option);
void				history_print(t_history *hist, const char *option);
void				history_free(t_history *hist);
t_history			*history_create(void);
void				write_history_lines(int fd, t_history *hist, int start);
char				*read_file_content(const char *path);
void				parse_history_content(char *content, t_history *hist);
char				*construct_history_path(const char *histfile_name);
void				load_history_file(t_history *hist,
						const char *histfile_name);
void				save_history_file(t_minishell *minishell, char *input);
void				update_history_capacity(t_history *hist);
void				history_add(t_history *hist, const char *entry);
void				handle_history(t_execcmd *ecmd, t_minishell *minishell);

/* input */
void				init_history(t_minishell *ms);
char				*get_input(t_minishell *ms);

#endif
