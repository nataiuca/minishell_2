/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 21:25:10 by jgamarra          #+#    #+#             */
/*   Updated: 2025/04/21 21:40:38 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char   whitespace[] = " \t\r\n\v";
char   symbols[] = "<|>";
char   quotes[] = "'\"";

int gettoken(char **ps, char *es, char **q, char **eq) {
    char *s = *ps;
    int ret;

    // Saltar espacios en blanco
    while (s < es && ft_strchr(whitespace, *s))
        s++;

    if (q)
        *q = s;

    // Si llegamos al final, retornamos 0
    if (s >= es) {
        if (eq)
            *eq = s;
        *ps = s;
        return 0;
    }

    // Si el token inicia con un delimitador especial, se procesa individualmente
    ret = *s;
    switch (*s) {
        case 0:
            break;
        case '|':
        case '&':
        case ';':
        case '(':
        case ')':
            s++;
            break;
        case '<':
            s++;
            if (s < es && *s == '<') {
                ret = HDOC;
                s++;
            }
            break;
        case '>':
            s++;
            if (s < es && *s == '>') {
                ret = '+';
                s++;
            }
            break;
        case '"':
        case '\'':
        {
            // Si la comilla es el primer carácter del token, 
            // se procesa de forma similar a como ya lo hacías.
            char quote = *s;
            if (q)
                *q = s;
            s++; // saltar la comilla de apertura
            while (s < es && *s != quote)
                s++;
            if (s >= es || *s != quote)
                error_exit("Error: Comilla de cierre no encontrada.\n");
            ret = 'a';
            s++; // saltar la comilla de cierre
        }
            break;
        default:
        {
            ret = 'a';
            // Recorre el token hasta encontrar whitespace o algún símbolo delimitador.
            while (s < es && !ft_strchr(whitespace, *s) && !ft_strchr("|&()<>", *s)) {
                // Si se encuentra una comilla en medio del token, procesarla.
                if (ft_strchr(quotes, *s)) {
                    char quote = *s;
                    s++; // saltar la comilla de apertura
                    while (s < es && *s != quote)
                        s++;
                    if (s >= es || *s != quote)
                        error_exit("Error: Comilla de cierre no encontrada.\n");
                    s++; // saltar la comilla de cierre
                } else {
                    s++;
                }
            }
        }
            break;
    }

    if (eq)
        *eq = s;

    while (s < es && ft_strchr(whitespace, *s))
        s++;
    *ps = s;

    return ret;
}

// int	gettoken(char **ps, char *es, char **q, char **eq)
// {
//   char *s;
//   int ret;

//   s = *ps;
//   while(s < es && strchr(whitespace, *s))
//     s++;
//   if(q)
//     *q = s;
//   ret = *s;
//   switch(*s){
//   case 0:
//     break ;
//   case '|':
// //   case '(':
// //   case ')':
// //   case ';':
// //   case '&':
//   case '<':
//     s++;
//     break ;
//   case '>':
//     s++;
//     if(*s == '>'){
//       ret = '+';
//       s++;
//     }
//     break ;
//   case '"':
//   case '\'':
//     ret = *s;
//     s++;
//     while(s < es && *s != ret)
//       s++;
//     if(s < es)
//       s++;
//     ret = 'a';
//     while(s < es && !strchr(whitespace, *s) && !strchr(symbols, *s))
//       s++;
//     break ;
//   default:
//     ret = 'a';
//     while(s < es && !strchr(whitespace, *s) && !strchr(symbols, *s))
//       s++;
//     // int quote=0;
//     // while(s < es && !strchr(whitespace, *s) && !strchr(symbols, *s))
//     // {
//     //   if (!quote && (*s == '\'' || *s == '\"'))
// 		// 			quote = *s;
//     //   else if (quote && quote == *s)
//     //     quote = 0;
//     //   if (!quote && strchr(symbols, *s) && strchr(whitespace, *s))
//     //     break ;
//     //   else
//     //     s++;
//     // }
//     break ;
//   }
//   if(eq)
//     *eq = s;

//   while(s < es && strchr(whitespace, *s))
//     s++;
//   *ps = s;
//   return (ret);
// }

int peek(char **ps, char *es, char *toks) {
    char *s = *ps;
    while (s < es && ft_strchr(" \t\r\n\v", *s))
        s++;
    *ps = s;
    return *s && ft_strchr(toks, *s);
}

void error_exit(const char *msg) {
    write(STDERR_FILENO, msg, strlen(msg));
    exit(EXIT_FAILURE);
}
