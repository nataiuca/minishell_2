leaks minishell
cat << EOF
> hola
> EOF
hola
minishell$ exit
==4157072== Use of uninitialised value of size 8
==4157072==    at 0x406004: save_history_file (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x403262: catch_interactive (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4024C4: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==  Uninitialised value was created by a stack allocation
==4157072==    at 0x4023F0: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== Invalid read of size 4
==4157072==    at 0x406004: save_history_file (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x403262: catch_interactive (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4024C4: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==  Address 0x8 is not stack'd, malloc'd or (recently) free'd
==4157072== 
==4157072== 
==4157072== Process terminating with default action of signal 11 (SIGSEGV)
==4157072==  Access not within mapped region at address 0x8
==4157072==    at 0x406004: save_history_file (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x403262: catch_interactive (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4024C4: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==  If you believe this happened as a result of a stack
==4157072==  overflow in your program's main thread (unlikely but
==4157072==  possible), you can try to increase the size of the
==4157072==  main thread stack using the --main-stacksize= flag.
==4157072==  The main thread stack size used in this run was 8388608.
==4157072== 
==4157072== HEAP SUMMARY:
==4157072==     in use at exit: 218,249 bytes in 337 blocks
==4157072==   total heap usage: 548 allocs, 211 frees, 232,963 bytes allocated
==4157072== 
==4157072== 4 bytes in 1 blocks are definitely lost in loss record 1 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x407E9B: ft_strdup (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x404183: process_heredoc (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x407516: parseredirs (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4076F2: parse_exec_args (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4075DA: parseexec (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x407754: parsepipe (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x40780F: parsecmd (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4024FC: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 4 bytes in 1 blocks are definitely lost in loss record 2 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x407E9B: ft_strdup (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4059CB: remove_quotes_simple (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x404190: process_heredoc (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x407516: parseredirs (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4076F2: parse_exec_args (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4075DA: parseexec (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x407754: parsepipe (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x40780F: parsecmd (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4024FC: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 6 bytes in 1 blocks are still reachable in loss record 3 of 91
==4157072==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x4042B7: process_heredoc (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x407516: parseredirs (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4076F2: parse_exec_args (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4075DA: parseexec (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x407754: parsepipe (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x40780F: parsecmd (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4024FC: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 8 bytes in 1 blocks are still reachable in loss record 4 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x497058E: strdup (strdup.c:42)
==4157072==    by 0x4B0ED17: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 8 bytes in 1 blocks are still reachable in loss record 5 of 91
==4157072==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48AE491: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489A626: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 9 bytes in 1 blocks are still reachable in loss record 6 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x490D03F: __add_to_environ (setenv.c:217)
==4157072==    by 0x48543FF: setenv (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48AD005: sh_set_lines_and_columns (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A7AF7: _rl_get_screen_size (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489AAB8: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 11 bytes in 1 blocks are still reachable in loss record 7 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A4B39: alloc_history_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A6F65: add_history (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4032A4: save_history (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4032E1: check_input_valid (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4024CD: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 12 bytes in 1 blocks are still reachable in loss record 8 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A1E3: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 12 bytes in 1 blocks are still reachable in loss record 9 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x490D03F: __add_to_environ (setenv.c:217)
==4157072==    by 0x48543FF: setenv (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48A7AF7: _rl_get_screen_size (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489AAB8: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 12 bytes in 1 blocks are still reachable in loss record 10 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x497058E: strdup (strdup.c:42)
==4157072==    by 0x490031A: _nl_load_locale_from_archive (loadarchive.c:464)
==4157072==    by 0x48FF0DF: _nl_find_locale (findlocale.c:152)
==4157072==    by 0x48FEA90: setlocale (setlocale.c:414)
==4157072==    by 0x48FEA90: setlocale (setlocale.c:217)
==4157072==    by 0x48A7C45: _rl_init_locale (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A7D2C: _rl_init_eightbit (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A31: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 12 bytes in 1 blocks are still reachable in loss record 11 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x497058E: strdup (strdup.c:42)
==4157072==    by 0x48FEACA: setlocale (setlocale.c:431)
==4157072==    by 0x48FEACA: setlocale (setlocale.c:217)
==4157072==    by 0x48A7C45: _rl_init_locale (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A7D2C: _rl_init_eightbit (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A31: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 12 bytes in 1 blocks are still reachable in loss record 12 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A6F28: add_history (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4032A4: save_history (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4032E1: check_input_valid (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4024CD: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 12 bytes in 1 blocks are still reachable in loss record 13 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489A5F2: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 13 bytes in 1 blocks are still reachable in loss record 14 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489BBF5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A38: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 14 bytes in 1 blocks are still reachable in loss record 15 of 91
==4157072==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B08272: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 15 bytes in 1 blocks are still reachable in loss record 16 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x497058E: strdup (strdup.c:42)
==4157072==    by 0x4B00377: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B02BF8: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 15 bytes in 1 blocks are still reachable in loss record 17 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x497058E: strdup (strdup.c:42)
==4157072==    by 0x4B0C8AE: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 16 bytes in 1 blocks are still reachable in loss record 18 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x4895B26: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 20 bytes in 1 blocks are still reachable in loss record 19 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4898D8B: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489B6C9: rl_parse_and_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489BB6C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A38: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 24 bytes in 1 blocks are still reachable in loss record 20 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x49E7F34: tsearch (tsearch.c:337)
==4157072==    by 0x490D06A: __add_to_environ (setenv.c:233)
==4157072==    by 0x48543FF: setenv (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48AD005: sh_set_lines_and_columns (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A7AF7: _rl_get_screen_size (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489AAB8: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 24 bytes in 1 blocks are still reachable in loss record 21 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x49E7F9E: tsearch (tsearch.c:337)
==4157072==    by 0x490D06A: __add_to_environ (setenv.c:233)
==4157072==    by 0x48543FF: setenv (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48A7AF7: _rl_get_screen_size (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489AAB8: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 24 bytes in 1 blocks are still reachable in loss record 22 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x49E7F34: tsearch (tsearch.c:337)
==4157072==    by 0x4B04D6E: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 24 bytes in 1 blocks are still reachable in loss record 23 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A4B1D: alloc_history_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A6F65: add_history (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4032A4: save_history (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4032E1: check_input_valid (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4024CD: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 27 bytes in 1 blocks are still reachable in loss record 24 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x4B02624: _nc_home_terminfo (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B02BE2: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 32 bytes in 1 blocks are still reachable in loss record 25 of 91
==4157072==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x499AC1F: __wcsmbs_load_conv (wcsmbsload.c:167)
==4157072==    by 0x498E16E: get_gconv_fcts (wcsmbsload.h:73)
==4157072==    by 0x498E16E: mbrtowc (mbrtowc.c:69)
==4157072==    by 0x489D2D7: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489FCE1: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 34 bytes in 1 blocks are still reachable in loss record 26 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x405EB4: construct_history_path (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x405FBB: save_history_file (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x403262: catch_interactive (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4024C4: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 46 bytes in 1 blocks are still reachable in loss record 27 of 91
==4157072==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C16F: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072== 
==4157072== 46 bytes in 1 blocks are still reachable in loss record 28 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x4B00FDE: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 48 bytes in 1 blocks are still reachable in loss record 29 of 91
==4157072==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x4B02833: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 56 bytes in 1 blocks are still reachable in loss record 30 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x407A09: redircmd_hdoc (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x407527: parseredirs (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4076F2: parse_exec_args (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4075DA: parseexec (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x407754: parsepipe (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x40780F: parsecmd (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4024FC: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 78 bytes in 1 blocks are still reachable in loss record 31 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x4B0104B: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 93 bytes in 1 blocks are still reachable in loss record 32 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x497058E: strdup (strdup.c:42)
==4157072==    by 0x4B04D54: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 94 bytes in 1 blocks are still reachable in loss record 33 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x4B0495B: _nc_tparm_analyze (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B04C62: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 96 bytes in 1 blocks are still reachable in loss record 34 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x40828A: ft_split (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4025B6: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 96 bytes in 1 blocks are still reachable in loss record 35 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x4B0279A: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 120 bytes in 1 blocks are still reachable in loss record 36 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x49002FF: _nl_load_locale_from_archive (loadarchive.c:460)
==4157072==    by 0x48FF0DF: _nl_find_locale (findlocale.c:152)
==4157072==    by 0x48FEA90: setlocale (setlocale.c:414)
==4157072==    by 0x48FEA90: setlocale (setlocale.c:217)
==4157072==    by 0x48A7C45: _rl_init_locale (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A7D2C: _rl_init_eightbit (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A31: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 137 bytes in 11 blocks are still reachable in loss record 37 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x40880A: ft_substr (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x408474: set_word (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4082DB: ft_split (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4025B6: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 156 bytes in 1 blocks are still reachable in loss record 38 of 91
==4157072==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C197: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072== 
==4157072== 168 bytes in 1 blocks are still reachable in loss record 39 of 91
==4157072==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x4B04CCD: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 168 bytes in 1 blocks are still reachable in loss record 40 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4078B1: execcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4075A8: parseexec (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x407754: parsepipe (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x40780F: parsecmd (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4024FC: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 171 bytes in 1 blocks are still reachable in loss record 41 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48FE607: new_composite_name (setlocale.c:170)
==4157072==    by 0x48FEAEA: setlocale (setlocale.c:437)
==4157072==    by 0x48FEAEA: setlocale (setlocale.c:217)
==4157072==    by 0x48A7C45: _rl_init_locale (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A7D2C: _rl_init_eightbit (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A31: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 208 bytes in 1 blocks are still reachable in loss record 42 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48FD9D6: __gconv_lookup_cache (gconv_cache.c:365)
==4157072==    by 0x48F3B6E: __gconv_find_transform (gconv_db.c:732)
==4157072==    by 0x499AD4A: __wcsmbs_getfct (wcsmbsload.c:91)
==4157072==    by 0x499AD4A: __wcsmbs_load_conv (wcsmbsload.c:185)
==4157072==    by 0x498E16E: get_gconv_fcts (wcsmbsload.h:73)
==4157072==    by 0x498E16E: mbrtowc (mbrtowc.c:69)
==4157072==    by 0x489D2D7: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489FCE1: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 208 bytes in 1 blocks are still reachable in loss record 43 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48FDAC0: __gconv_lookup_cache (gconv_cache.c:365)
==4157072==    by 0x48F3B6E: __gconv_find_transform (gconv_db.c:732)
==4157072==    by 0x499AD8B: __wcsmbs_getfct (wcsmbsload.c:91)
==4157072==    by 0x499AD8B: __wcsmbs_load_conv (wcsmbsload.c:188)
==4157072==    by 0x498E16E: get_gconv_fcts (wcsmbsload.h:73)
==4157072==    by 0x498E16E: mbrtowc (mbrtowc.c:69)
==4157072==    by 0x489D2D7: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489FCE1: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 256 bytes in 1 blocks are still reachable in loss record 44 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895C86: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 272 bytes in 1 blocks are still reachable in loss record 45 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x402650: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 544 bytes in 1 blocks are still reachable in loss record 46 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x402633: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 560 bytes in 1 blocks are still reachable in loss record 47 of 91
==4157072==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x490CE7B: __add_to_environ (setenv.c:156)
==4157072==    by 0x48543FF: setenv (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48A7AF7: _rl_get_screen_size (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489AAB8: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 608 bytes in 1 blocks are still reachable in loss record 48 of 91
==4157072==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x4B0C37E: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 608 bytes in 1 blocks are still reachable in loss record 49 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x4B01119: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 760 bytes in 1 blocks are still reachable in loss record 50 of 91
==4157072==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x4B0C819: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 940 bytes in 1 blocks are still reachable in loss record 51 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x4B0C287: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 1,024 bytes in 1 blocks are still reachable in loss record 52 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x4946BA3: _IO_file_doallocate (filedoalloc.c:101)
==4157072==    by 0x4955CDF: _IO_doallocbuf (genops.c:347)
==4157072==    by 0x4954F5F: _IO_file_overflow@@GLIBC_2.2.5 (fileops.c:744)
==4157072==    by 0x49536D4: _IO_new_file_xsputn (fileops.c:1243)
==4157072==    by 0x49536D4: _IO_file_xsputn@@GLIBC_2.2.5 (fileops.c:1196)
==4157072==    by 0x4947FD6: fwrite (iofwrite.c:39)
==4157072==    by 0x489277C: rl_prep_terminal (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CEE: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 1,024 bytes in 1 blocks are still reachable in loss record 53 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4897C7B: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 1,024 bytes in 1 blocks are still reachable in loss record 54 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4897C8B: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 1,024 bytes in 1 blocks are still reachable in loss record 55 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4897CA2: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 1,024 bytes in 1 blocks are still reachable in loss record 56 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4897CBB: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 1,024 bytes in 1 blocks are still reachable in loss record 57 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4897DC5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 1,024 bytes in 1 blocks are still reachable in loss record 58 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4897DDA: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 1,024 bytes in 1 blocks are still reachable in loss record 59 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4897DE8: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 1,024 bytes in 1 blocks are still reachable in loss record 60 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4897DF6: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 1,536 bytes in 1 blocks are still reachable in loss record 61 of 91
==4157072==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48AE491: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488B877: rl_add_funmap_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488B8C8: rl_initialize_funmap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A2C: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 1,664 bytes in 1 blocks are still reachable in loss record 62 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x4B0BACD: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 2,032 bytes in 1 blocks are still reachable in loss record 63 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A9419: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 2,240 bytes in 140 blocks are still reachable in loss record 64 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488B822: rl_add_funmap_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488B8C8: rl_initialize_funmap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A2C: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 2,556 bytes in 67 blocks are still reachable in loss record 65 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x407E9B: ft_strdup (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4026C8: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 3,728 bytes in 12 blocks are still reachable in loss record 66 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48FF96E: _nl_intern_locale_data (loadlocale.c:97)
==4157072==    by 0x4900370: _nl_load_locale_from_archive (loadarchive.c:477)
==4157072==    by 0x48FF0DF: _nl_find_locale (findlocale.c:152)
==4157072==    by 0x48FEA90: setlocale (setlocale.c:414)
==4157072==    by 0x48FEA90: setlocale (setlocale.c:217)
==4157072==    by 0x48A7C45: _rl_init_locale (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A7D2C: _rl_init_eightbit (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A31: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 3,904 bytes in 1 blocks are still reachable in loss record 67 of 91
==4157072==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C1B5: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072== 
==4157072== 3,904 bytes in 1 blocks are still reachable in loss record 68 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x4B00FFF: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 4,016 bytes in 1 blocks are still reachable in loss record 69 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A6FD6: add_history (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4032A4: save_history (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4032E1: check_input_valid (in /goinfre/natferna/cursus/minishell/minishell)
==4157072==    by 0x4024CD: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 4,080 bytes in 1 blocks are still reachable in loss record 70 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A93F9: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 4,112 bytes in 1 blocks are still reachable in loss record 71 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A8DD5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A931F: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 4,112 bytes in 1 blocks are still reachable in loss record 72 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A8E5A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A931F: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 4,112 bytes in 1 blocks are still reachable in loss record 73 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A8E5A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A932B: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 4,112 bytes in 1 blocks are still reachable in loss record 74 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A8E5A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A9337: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 4,112 bytes in 1 blocks are still reachable in loss record 75 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489594C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A84: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 4,112 bytes in 1 blocks are still reachable in loss record 76 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489594C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A93: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 4,112 bytes in 1 blocks are still reachable in loss record 77 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489594C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895AB8: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 7,952 bytes in 1 blocks are still reachable in loss record 78 of 91
==4157072==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x4AFFC97: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B013AF: _nc_find_type_entry (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x4B03E4C: tgetstr_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157072==    by 0x48A921A: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 8,224 bytes in 2 blocks are still reachable in loss record 79 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A8E47: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A931F: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 8,224 bytes in 2 blocks are still reachable in loss record 80 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A8DD5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A932B: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 8,224 bytes in 2 blocks are still reachable in loss record 81 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A8E47: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A932B: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 8,224 bytes in 2 blocks are still reachable in loss record 82 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A8DD5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A9337: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 8,224 bytes in 2 blocks are still reachable in loss record 83 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A8E47: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x48A9337: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 8,224 bytes in 2 blocks are still reachable in loss record 84 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489593D: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A84: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 8,224 bytes in 2 blocks are still reachable in loss record 85 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489593D: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A93: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 8,224 bytes in 2 blocks are still reachable in loss record 86 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489593D: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895AB8: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 8,224 bytes in 2 blocks are still reachable in loss record 87 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895AD2: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 8,224 bytes in 2 blocks are still reachable in loss record 88 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895AE1: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 12,336 bytes in 3 blocks are still reachable in loss record 89 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895914: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A93: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 12,336 bytes in 3 blocks are still reachable in loss record 90 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895914: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895AB8: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== 28,784 bytes in 7 blocks are still reachable in loss record 91 of 91
==4157072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157072==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489B99E: rl_parse_and_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x489BB6C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895A38: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157072==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157072== 
==4157072== LEAK SUMMARY:
==4157072==    definitely lost: 8 bytes in 2 blocks
==4157072==    indirectly lost: 0 bytes in 0 blocks
==4157072==      possibly lost: 0 bytes in 0 blocks
==4157072==    still reachable: 218,241 bytes in 335 blocks
==4157072==         suppressed: 0 bytes in 0 blocks
==4157072== 
==4157072== For lists of detected and suppressed errors, rerun with: -s
==4157072== ERROR SUMMARY: 4 errors from 4 contexts (suppressed: 0 from 0)
>
> Hay un segmentation fault al ejecutar ctrl + D, hay stil reachable
minishell$ exit
==4157883== Use of uninitialised value of size 8
==4157883==    at 0x406004: save_history_file (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x403262: catch_interactive (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x4024C4: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==  Uninitialised value was created by a stack allocation
==4157883==    at 0x4023F0: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== Invalid read of size 4
==4157883==    at 0x406004: save_history_file (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x403262: catch_interactive (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x4024C4: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==  Address 0x8 is not stack'd, malloc'd or (recently) free'd
==4157883== 
==4157883== 
==4157883== Process terminating with default action of signal 11 (SIGSEGV)
==4157883==  Access not within mapped region at address 0x8
==4157883==    at 0x406004: save_history_file (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x403262: catch_interactive (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x4024C4: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==  If you believe this happened as a result of a stack
==4157883==  overflow in your program's main thread (unlikely but
==4157883==  possible), you can try to increase the size of the
==4157883==  main thread stack using the --main-stacksize= flag.
==4157883==  The main thread stack size used in this run was 8388608.
==4157883== 
==4157883== HEAP SUMMARY:
==4157883==     in use at exit: 213,948 bytes in 328 blocks
==4157883==   total heap usage: 512 allocs, 184 frees, 228,393 bytes allocated
==4157883== 
==4157883== 8 bytes in 1 blocks are still reachable in loss record 1 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489A7F6: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 8 bytes in 1 blocks are still reachable in loss record 2 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x497058E: strdup (strdup.c:42)
==4157883==    by 0x4B0ED17: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 9 bytes in 1 blocks are still reachable in loss record 3 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x490D03F: __add_to_environ (setenv.c:217)
==4157883==    by 0x48543FF: setenv (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48AD005: sh_set_lines_and_columns (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A7AF7: _rl_get_screen_size (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AAB8: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 12 bytes in 1 blocks are still reachable in loss record 4 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A1E3: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 12 bytes in 1 blocks are still reachable in loss record 5 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x490D03F: __add_to_environ (setenv.c:217)
==4157883==    by 0x48543FF: setenv (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48A7AF7: _rl_get_screen_size (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AAB8: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 12 bytes in 1 blocks are still reachable in loss record 6 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AC7F: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 12 bytes in 1 blocks are still reachable in loss record 7 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x497058E: strdup (strdup.c:42)
==4157883==    by 0x490031A: _nl_load_locale_from_archive (loadarchive.c:464)
==4157883==    by 0x48FF0DF: _nl_find_locale (findlocale.c:152)
==4157883==    by 0x48FEA90: setlocale (setlocale.c:414)
==4157883==    by 0x48FEA90: setlocale (setlocale.c:217)
==4157883==    by 0x48A7C45: _rl_init_locale (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A7D2C: _rl_init_eightbit (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A31: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 12 bytes in 1 blocks are still reachable in loss record 8 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x497058E: strdup (strdup.c:42)
==4157883==    by 0x48FEACA: setlocale (setlocale.c:431)
==4157883==    by 0x48FEACA: setlocale (setlocale.c:217)
==4157883==    by 0x48A7C45: _rl_init_locale (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A7D2C: _rl_init_eightbit (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A31: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 13 bytes in 1 blocks are still reachable in loss record 9 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489BBF5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A38: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 14 bytes in 1 blocks are still reachable in loss record 10 of 82
==4157883==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B08272: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 15 bytes in 1 blocks are still reachable in loss record 11 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x497058E: strdup (strdup.c:42)
==4157883==    by 0x4B00377: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B02BF8: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 15 bytes in 1 blocks are still reachable in loss record 12 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x497058E: strdup (strdup.c:42)
==4157883==    by 0x4B0C8AE: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 16 bytes in 1 blocks are still reachable in loss record 13 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4895B26: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 20 bytes in 1 blocks are still reachable in loss record 14 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4898D8B: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489B6C9: rl_parse_and_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489BB6C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A38: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 24 bytes in 1 blocks are still reachable in loss record 15 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x49E7F34: tsearch (tsearch.c:337)
==4157883==    by 0x490D06A: __add_to_environ (setenv.c:233)
==4157883==    by 0x48543FF: setenv (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48AD005: sh_set_lines_and_columns (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A7AF7: _rl_get_screen_size (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AAB8: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 24 bytes in 1 blocks are still reachable in loss record 16 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x49E7F9E: tsearch (tsearch.c:337)
==4157883==    by 0x490D06A: __add_to_environ (setenv.c:233)
==4157883==    by 0x48543FF: setenv (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48A7AF7: _rl_get_screen_size (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AAB8: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 24 bytes in 1 blocks are still reachable in loss record 17 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x49E7F34: tsearch (tsearch.c:337)
==4157883==    by 0x4B04D6E: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 27 bytes in 1 blocks are still reachable in loss record 18 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B02624: _nc_home_terminfo (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B02BE2: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 32 bytes in 1 blocks are still reachable in loss record 19 of 82
==4157883==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x499AC1F: __wcsmbs_load_conv (wcsmbsload.c:167)
==4157883==    by 0x498E16E: get_gconv_fcts (wcsmbsload.h:73)
==4157883==    by 0x498E16E: mbrtowc (mbrtowc.c:69)
==4157883==    by 0x489D2D7: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489FCE1: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 34 bytes in 1 blocks are still reachable in loss record 20 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x405EB4: construct_history_path (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x405FBB: save_history_file (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x403262: catch_interactive (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x4024C4: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 46 bytes in 1 blocks are still reachable in loss record 21 of 82
==4157883==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C16F: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883== 
==4157883== 46 bytes in 1 blocks are still reachable in loss record 22 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B00FDE: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 48 bytes in 1 blocks are still reachable in loss record 23 of 82
==4157883==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B02833: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 78 bytes in 1 blocks are still reachable in loss record 24 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B0104B: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 93 bytes in 1 blocks are still reachable in loss record 25 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x497058E: strdup (strdup.c:42)
==4157883==    by 0x4B04D54: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 94 bytes in 1 blocks are still reachable in loss record 26 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B0495B: _nc_tparm_analyze (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B04C62: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 96 bytes in 1 blocks are still reachable in loss record 27 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x40828A: ft_split (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x4025B6: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 96 bytes in 1 blocks are still reachable in loss record 28 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B0279A: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 120 bytes in 1 blocks are still reachable in loss record 29 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x49002FF: _nl_load_locale_from_archive (loadarchive.c:460)
==4157883==    by 0x48FF0DF: _nl_find_locale (findlocale.c:152)
==4157883==    by 0x48FEA90: setlocale (setlocale.c:414)
==4157883==    by 0x48FEA90: setlocale (setlocale.c:217)
==4157883==    by 0x48A7C45: _rl_init_locale (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A7D2C: _rl_init_eightbit (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A31: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 137 bytes in 11 blocks are still reachable in loss record 30 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x40880A: ft_substr (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x408474: set_word (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x4082DB: ft_split (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x4025B6: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 156 bytes in 1 blocks are still reachable in loss record 31 of 82
==4157883==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C197: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883== 
==4157883== 168 bytes in 1 blocks are still reachable in loss record 32 of 82
==4157883==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B04CCD: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 171 bytes in 1 blocks are still reachable in loss record 33 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48FE607: new_composite_name (setlocale.c:170)
==4157883==    by 0x48FEAEA: setlocale (setlocale.c:437)
==4157883==    by 0x48FEAEA: setlocale (setlocale.c:217)
==4157883==    by 0x48A7C45: _rl_init_locale (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A7D2C: _rl_init_eightbit (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A31: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 208 bytes in 1 blocks are still reachable in loss record 34 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48FD9D6: __gconv_lookup_cache (gconv_cache.c:365)
==4157883==    by 0x48F3B6E: __gconv_find_transform (gconv_db.c:732)
==4157883==    by 0x499AD4A: __wcsmbs_getfct (wcsmbsload.c:91)
==4157883==    by 0x499AD4A: __wcsmbs_load_conv (wcsmbsload.c:185)
==4157883==    by 0x498E16E: get_gconv_fcts (wcsmbsload.h:73)
==4157883==    by 0x498E16E: mbrtowc (mbrtowc.c:69)
==4157883==    by 0x489D2D7: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489FCE1: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 208 bytes in 1 blocks are still reachable in loss record 35 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48FDAC0: __gconv_lookup_cache (gconv_cache.c:365)
==4157883==    by 0x48F3B6E: __gconv_find_transform (gconv_db.c:732)
==4157883==    by 0x499AD8B: __wcsmbs_getfct (wcsmbsload.c:91)
==4157883==    by 0x499AD8B: __wcsmbs_load_conv (wcsmbsload.c:188)
==4157883==    by 0x498E16E: get_gconv_fcts (wcsmbsload.h:73)
==4157883==    by 0x498E16E: mbrtowc (mbrtowc.c:69)
==4157883==    by 0x489D2D7: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489FCE1: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 256 bytes in 1 blocks are still reachable in loss record 36 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895C86: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 272 bytes in 1 blocks are still reachable in loss record 37 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402650: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 544 bytes in 1 blocks are still reachable in loss record 38 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402633: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 560 bytes in 1 blocks are still reachable in loss record 39 of 82
==4157883==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x490CE7B: __add_to_environ (setenv.c:156)
==4157883==    by 0x48543FF: setenv (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48A7AF7: _rl_get_screen_size (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AAB8: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 608 bytes in 1 blocks are still reachable in loss record 40 of 82
==4157883==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B0C37E: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 608 bytes in 1 blocks are still reachable in loss record 41 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B01119: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 760 bytes in 1 blocks are still reachable in loss record 42 of 82
==4157883==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B0C819: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 940 bytes in 1 blocks are still reachable in loss record 43 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B0C287: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 1,024 bytes in 1 blocks are still reachable in loss record 44 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4946BA3: _IO_file_doallocate (filedoalloc.c:101)
==4157883==    by 0x4955CDF: _IO_doallocbuf (genops.c:347)
==4157883==    by 0x4954F5F: _IO_file_overflow@@GLIBC_2.2.5 (fileops.c:744)
==4157883==    by 0x49536D4: _IO_new_file_xsputn (fileops.c:1243)
==4157883==    by 0x49536D4: _IO_file_xsputn@@GLIBC_2.2.5 (fileops.c:1196)
==4157883==    by 0x4947FD6: fwrite (iofwrite.c:39)
==4157883==    by 0x489277C: rl_prep_terminal (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CEE: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 1,024 bytes in 1 blocks are still reachable in loss record 45 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897C7B: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 1,024 bytes in 1 blocks are still reachable in loss record 46 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897C8B: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 1,024 bytes in 1 blocks are still reachable in loss record 47 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897CA2: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 1,024 bytes in 1 blocks are still reachable in loss record 48 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897CBB: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 1,024 bytes in 1 blocks are still reachable in loss record 49 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897DC5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 1,024 bytes in 1 blocks are still reachable in loss record 50 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897DDA: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 1,024 bytes in 1 blocks are still reachable in loss record 51 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897DE8: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 1,024 bytes in 1 blocks are still reachable in loss record 52 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897DF6: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 1,536 bytes in 1 blocks are still reachable in loss record 53 of 82
==4157883==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48AE491: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B877: rl_add_funmap_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B8C8: rl_initialize_funmap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A2C: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 1,664 bytes in 1 blocks are still reachable in loss record 54 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B0BACD: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 2,032 bytes in 1 blocks are still reachable in loss record 55 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A9419: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 2,240 bytes in 140 blocks are still reachable in loss record 56 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B822: rl_add_funmap_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B8C8: rl_initialize_funmap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A2C: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 2,556 bytes in 67 blocks are still reachable in loss record 57 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x407E9B: ft_strdup (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x4026C8: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 3,728 bytes in 12 blocks are still reachable in loss record 58 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48FF96E: _nl_intern_locale_data (loadlocale.c:97)
==4157883==    by 0x4900370: _nl_load_locale_from_archive (loadarchive.c:477)
==4157883==    by 0x48FF0DF: _nl_find_locale (findlocale.c:152)
==4157883==    by 0x48FEA90: setlocale (setlocale.c:414)
==4157883==    by 0x48FEA90: setlocale (setlocale.c:217)
==4157883==    by 0x48A7C45: _rl_init_locale (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A7D2C: _rl_init_eightbit (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A31: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 3,904 bytes in 1 blocks are still reachable in loss record 59 of 82
==4157883==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C1B5: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883== 
==4157883== 3,904 bytes in 1 blocks are still reachable in loss record 60 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B00FFF: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 4,080 bytes in 1 blocks are still reachable in loss record 61 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A93F9: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 4,112 bytes in 1 blocks are still reachable in loss record 62 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A8DD5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A931F: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 4,112 bytes in 1 blocks are still reachable in loss record 63 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A8E5A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A931F: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 4,112 bytes in 1 blocks are still reachable in loss record 64 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A8E5A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A932B: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 4,112 bytes in 1 blocks are still reachable in loss record 65 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A8E5A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A9337: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 4,112 bytes in 1 blocks are still reachable in loss record 66 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489594C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A84: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 4,112 bytes in 1 blocks are still reachable in loss record 67 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489594C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A93: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 4,112 bytes in 1 blocks are still reachable in loss record 68 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489594C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895AB8: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 7,952 bytes in 1 blocks are still reachable in loss record 69 of 82
==4157883==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4AFFC97: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B013AF: _nc_find_type_entry (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B03E4C: tgetstr_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A921A: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 8,224 bytes in 2 blocks are still reachable in loss record 70 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A8E47: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A931F: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 8,224 bytes in 2 blocks are still reachable in loss record 71 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A8DD5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A932B: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 8,224 bytes in 2 blocks are still reachable in loss record 72 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A8E47: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A932B: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 8,224 bytes in 2 blocks are still reachable in loss record 73 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A8DD5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A9337: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-lminishell$ exit
==4157883== Use of uninitialised value of size 8
==4157883==    at 0x406004: save_history_file (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x403262: catch_interactive (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x4024C4: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==  Uninitialised value was created by a stack allocation
==4157883==    at 0x4023F0: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== Invalid read of size 4
==4157883==    at 0x406004: save_history_file (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x403262: catch_interactive (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x4024C4: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==  Address 0x8 is not stack'd, malloc'd or (recently) free'd
==4157883== 
==4157883== 
==4157883== Process terminating with default action of signal 11 (SIGSEGV)
==4157883==  Access not within mapped region at address 0x8
==4157883==    at 0x406004: save_history_file (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x403262: catch_interactive (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x4024C4: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==  If you believe this happened as a result of a stack
==4157883==  overflow in your program's main thread (unlikely but
==4157883==  possible), you can try to increase the size of the
==4157883==  main thread stack using the --main-stacksize= flag.
==4157883==  The main thread stack size used in this run was 8388608.
==4157883== 
==4157883== HEAP SUMMARY:
==4157883==     in use at exit: 213,948 bytes in 328 blocks
==4157883==   total heap usage: 512 allocs, 184 frees, 228,393 bytes allocated
==4157883== 
==4157883== 8 bytes in 1 blocks are still reachable in loss record 1 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489A7F6: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 8 bytes in 1 blocks are still reachable in loss record 2 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x497058E: strdup (strdup.c:42)
==4157883==    by 0x4B0ED17: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 9 bytes in 1 blocks are still reachable in loss record 3 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x490D03F: __add_to_environ (setenv.c:217)
==4157883==    by 0x48543FF: setenv (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48AD005: sh_set_lines_and_columns (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A7AF7: _rl_get_screen_size (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AAB8: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 12 bytes in 1 blocks are still reachable in loss record 4 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A1E3: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 12 bytes in 1 blocks are still reachable in loss record 5 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x490D03F: __add_to_environ (setenv.c:217)
==4157883==    by 0x48543FF: setenv (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48A7AF7: _rl_get_screen_size (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AAB8: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 12 bytes in 1 blocks are still reachable in loss record 6 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AC7F: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 12 bytes in 1 blocks are still reachable in loss record 7 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x497058E: strdup (strdup.c:42)
==4157883==    by 0x490031A: _nl_load_locale_from_archive (loadarchive.c:464)
==4157883==    by 0x48FF0DF: _nl_find_locale (findlocale.c:152)
==4157883==    by 0x48FEA90: setlocale (setlocale.c:414)
==4157883==    by 0x48FEA90: setlocale (setlocale.c:217)
==4157883==    by 0x48A7C45: _rl_init_locale (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A7D2C: _rl_init_eightbit (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A31: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 12 bytes in 1 blocks are still reachable in loss record 8 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x497058E: strdup (strdup.c:42)
==4157883==    by 0x48FEACA: setlocale (setlocale.c:431)
==4157883==    by 0x48FEACA: setlocale (setlocale.c:217)
==4157883==    by 0x48A7C45: _rl_init_locale (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A7D2C: _rl_init_eightbit (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A31: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 13 bytes in 1 blocks are still reachable in loss record 9 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489BBF5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A38: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 14 bytes in 1 blocks are still reachable in loss record 10 of 82
==4157883==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B08272: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 15 bytes in 1 blocks are still reachable in loss record 11 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x497058E: strdup (strdup.c:42)
==4157883==    by 0x4B00377: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B02BF8: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 15 bytes in 1 blocks are still reachable in loss record 12 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x497058E: strdup (strdup.c:42)
==4157883==    by 0x4B0C8AE: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 16 bytes in 1 blocks are still reachable in loss record 13 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4895B26: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 20 bytes in 1 blocks are still reachable in loss record 14 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4898D8B: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489B6C9: rl_parse_and_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489BB6C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A38: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 24 bytes in 1 blocks are still reachable in loss record 15 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x49E7F34: tsearch (tsearch.c:337)
==4157883==    by 0x490D06A: __add_to_environ (setenv.c:233)
==4157883==    by 0x48543FF: setenv (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48AD005: sh_set_lines_and_columns (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A7AF7: _rl_get_screen_size (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AAB8: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 24 bytes in 1 blocks are still reachable in loss record 16 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x49E7F9E: tsearch (tsearch.c:337)
==4157883==    by 0x490D06A: __add_to_environ (setenv.c:233)
==4157883==    by 0x48543FF: setenv (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48A7AF7: _rl_get_screen_size (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AAB8: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 24 bytes in 1 blocks are still reachable in loss record 17 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x49E7F34: tsearch (tsearch.c:337)
==4157883==    by 0x4B04D6E: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 27 bytes in 1 blocks are still reachable in loss record 18 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B02624: _nc_home_terminfo (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B02BE2: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 32 bytes in 1 blocks are still reachable in loss record 19 of 82
==4157883==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x499AC1F: __wcsmbs_load_conv (wcsmbsload.c:167)
==4157883==    by 0x498E16E: get_gconv_fcts (wcsmbsload.h:73)
==4157883==    by 0x498E16E: mbrtowc (mbrtowc.c:69)
==4157883==    by 0x489D2D7: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489FCE1: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 34 bytes in 1 blocks are still reachable in loss record 20 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x405EB4: construct_history_path (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x405FBB: save_history_file (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x403262: catch_interactive (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x4024C4: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 46 bytes in 1 blocks are still reachable in loss record 21 of 82
==4157883==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C16F: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883== 
==4157883== 46 bytes in 1 blocks are still reachable in loss record 22 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B00FDE: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 48 bytes in 1 blocks are still reachable in loss record 23 of 82
==4157883==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B02833: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 78 bytes in 1 blocks are still reachable in loss record 24 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B0104B: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 93 bytes in 1 blocks are still reachable in loss record 25 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x497058E: strdup (strdup.c:42)
==4157883==    by 0x4B04D54: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 94 bytes in 1 blocks are still reachable in loss record 26 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B0495B: _nc_tparm_analyze (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B04C62: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 96 bytes in 1 blocks are still reachable in loss record 27 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x40828A: ft_split (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x4025B6: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 96 bytes in 1 blocks are still reachable in loss record 28 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B0279A: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 120 bytes in 1 blocks are still reachable in loss record 29 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x49002FF: _nl_load_locale_from_archive (loadarchive.c:460)
==4157883==    by 0x48FF0DF: _nl_find_locale (findlocale.c:152)
==4157883==    by 0x48FEA90: setlocale (setlocale.c:414)
==4157883==    by 0x48FEA90: setlocale (setlocale.c:217)
==4157883==    by 0x48A7C45: _rl_init_locale (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A7D2C: _rl_init_eightbit (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A31: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 137 bytes in 11 blocks are still reachable in loss record 30 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x40880A: ft_substr (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x408474: set_word (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x4082DB: ft_split (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x4025B6: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 156 bytes in 1 blocks are still reachable in loss record 31 of 82
==4157883==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C197: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883== 
==4157883== 168 bytes in 1 blocks are still reachable in loss record 32 of 82
==4157883==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B04CCD: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 171 bytes in 1 blocks are still reachable in loss record 33 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48FE607: new_composite_name (setlocale.c:170)
==4157883==    by 0x48FEAEA: setlocale (setlocale.c:437)
==4157883==    by 0x48FEAEA: setlocale (setlocale.c:217)
==4157883==    by 0x48A7C45: _rl_init_locale (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A7D2C: _rl_init_eightbit (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A31: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 208 bytes in 1 blocks are still reachable in loss record 34 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48FD9D6: __gconv_lookup_cache (gconv_cache.c:365)
==4157883==    by 0x48F3B6E: __gconv_find_transform (gconv_db.c:732)
==4157883==    by 0x499AD4A: __wcsmbs_getfct (wcsmbsload.c:91)
==4157883==    by 0x499AD4A: __wcsmbs_load_conv (wcsmbsload.c:185)
==4157883==    by 0x498E16E: get_gconv_fcts (wcsmbsload.h:73)
==4157883==    by 0x498E16E: mbrtowc (mbrtowc.c:69)
==4157883==    by 0x489D2D7: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489FCE1: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 208 bytes in 1 blocks are still reachable in loss record 35 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48FDAC0: __gconv_lookup_cache (gconv_cache.c:365)
==4157883==    by 0x48F3B6E: __gconv_find_transform (gconv_db.c:732)
==4157883==    by 0x499AD8B: __wcsmbs_getfct (wcsmbsload.c:91)
==4157883==    by 0x499AD8B: __wcsmbs_load_conv (wcsmbsload.c:188)
==4157883==    by 0x498E16E: get_gconv_fcts (wcsmbsload.h:73)
==4157883==    by 0x498E16E: mbrtowc (mbrtowc.c:69)
==4157883==    by 0x489D2D7: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489FCE1: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 256 bytes in 1 blocks are still reachable in loss record 36 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895C86: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 272 bytes in 1 blocks are still reachable in loss record 37 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402650: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 544 bytes in 1 blocks are still reachable in loss record 38 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402633: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 560 bytes in 1 blocks are still reachable in loss record 39 of 82
==4157883==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x490CE7B: __add_to_environ (setenv.c:156)
==4157883==    by 0x48543FF: setenv (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48A7AF7: _rl_get_screen_size (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AAB8: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 608 bytes in 1 blocks are still reachable in loss record 40 of 82
==4157883==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B0C37E: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 608 bytes in 1 blocks are still reachable in loss record 41 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B01119: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 760 bytes in 1 blocks are still reachable in loss record 42 of 82
==4157883==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B0C819: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 940 bytes in 1 blocks are still reachable in loss record 43 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B0C287: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 1,024 bytes in 1 blocks are still reachable in loss record 44 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4946BA3: _IO_file_doallocate (filedoalloc.c:101)
==4157883==    by 0x4955CDF: _IO_doallocbuf (genops.c:347)
==4157883==    by 0x4954F5F: _IO_file_overflow@@GLIBC_2.2.5 (fileops.c:744)
==4157883==    by 0x49536D4: _IO_new_file_xsputn (fileops.c:1243)
==4157883==    by 0x49536D4: _IO_file_xsputn@@GLIBC_2.2.5 (fileops.c:1196)
==4157883==    by 0x4947FD6: fwrite (iofwrite.c:39)
==4157883==    by 0x489277C: rl_prep_terminal (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CEE: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 1,024 bytes in 1 blocks are still reachable in loss record 45 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897C7B: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 1,024 bytes in 1 blocks are still reachable in loss record 46 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897C8B: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 1,024 bytes in 1 blocks are still reachable in loss record 47 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897CA2: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 1,024 bytes in 1 blocks are still reachable in loss record 48 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897CBB: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 1,024 bytes in 1 blocks are still reachable in loss record 49 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897DC5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 1,024 bytes in 1 blocks are still reachable in loss record 50 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897DDA: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 1,024 bytes in 1 blocks are still reachable in loss record 51 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897DE8: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 1,024 bytes in 1 blocks are still reachable in loss record 52 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4897DF6: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 1,536 bytes in 1 blocks are still reachable in loss record 53 of 82
==4157883==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48AE491: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B877: rl_add_funmap_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B8C8: rl_initialize_funmap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A2C: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 1,664 bytes in 1 blocks are still reachable in loss record 54 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B0BACD: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 2,032 bytes in 1 blocks are still reachable in loss record 55 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A9419: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 2,240 bytes in 140 blocks are still reachable in loss record 56 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B822: rl_add_funmap_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488B8C8: rl_initialize_funmap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A2C: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 2,556 bytes in 67 blocks are still reachable in loss record 57 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x407E9B: ft_strdup (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x4026C8: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4157883==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 3,728 bytes in 12 blocks are still reachable in loss record 58 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48FF96E: _nl_intern_locale_data (loadlocale.c:97)
==4157883==    by 0x4900370: _nl_load_locale_from_archive (loadarchive.c:477)
==4157883==    by 0x48FF0DF: _nl_find_locale (findlocale.c:152)
==4157883==    by 0x48FEA90: setlocale (setlocale.c:414)
==4157883==    by 0x48FEA90: setlocale (setlocale.c:217)
==4157883==    by 0x48A7C45: _rl_init_locale (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A7D2C: _rl_init_eightbit (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A31: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 3,904 bytes in 1 blocks are still reachable in loss record 59 of 82
==4157883==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C1B5: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883== 
==4157883== 3,904 bytes in 1 blocks are still reachable in loss record 60 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4B00FFF: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 4,080 bytes in 1 blocks are still reachable in loss record 61 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A93F9: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 4,112 bytes in 1 blocks are still reachable in loss record 62 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A8DD5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A931F: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 4,112 bytes in 1 blocks are still reachable in loss record 63 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A8E5A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A931F: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 4,112 bytes in 1 blocks are still reachable in loss record 64 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A8E5A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A932B: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 4,112 bytes in 1 blocks are still reachable in loss record 65 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A8E5A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A9337: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 4,112 bytes in 1 blocks are still reachable in loss record 66 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489594C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A84: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 4,112 bytes in 1 blocks are still reachable in loss record 67 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489594C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A93: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 4,112 bytes in 1 blocks are still reachable in loss record 68 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489594C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895AB8: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 7,952 bytes in 1 blocks are still reachable in loss record 69 of 82
==4157883==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x4AFFC97: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B013AF: _nc_find_type_entry (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x4B03E4C: tgetstr_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4157883==    by 0x48A921A: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 8,224 bytes in 2 blocks are still reachable in loss record 70 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A8E47: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A931F: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 8,224 bytes in 2 blocks are still reachable in loss record 71 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A8DD5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A932B: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 8,224 bytes in 2 blocks are still reachable in loss record 72 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A8E47: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A932B: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 8,224 bytes in 2 blocks are still reachable in loss record 73 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A8DD5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A9337: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 8,224 bytes in 2 blocks are still reachable in loss record 74 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A8E47: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A9337: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 8,224 bytes in 2 blocks are still reachable in loss record 75 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489593D: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A84: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 8,224 bytes in 2 blocks are still reachable in loss record 76 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489593D: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A93: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 8,224 bytes in 2 blocks are still reachable in loss record 77 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489593D: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895AB8: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 8,224 bytes in 2 blocks are still reachable in loss record 78 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895AD2: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 8,224 bytes in 2 blocks are still reachable in loss record 79 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895AE1: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 12,336 bytes in 3 blocks are still reachable in loss record 80 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895914: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A93: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 12,336 bytes in 3 blocks are still reachable in loss record 81 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895914: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895AB8: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 28,784 bytes in 7 blocks are still reachable in loss record 82 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489B99E: rl_parse_and_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489BB6C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A38: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== LEAK SUMMARY:
==4157883==    definitely lost: 0 bytes in 0 blocks
==4157883==    indirectly lost: 0 bytes in 0 blocks
==4157883==      possibly lost: 0 bytes in 0 blocks
==4157883==    still reachable: 213,948 bytes in 328 blocks
==4157883==         suppressed: 0 bytes in 0 blocks
==4157883== 
==4157883== For lists of detected and suppressed errors, rerun with: -s
==4157883== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)
zsh: segmentation fault (core dumped)  valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes 
c2r11s2% >....                                              inux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 8,224 bytes in 2 blocks are still reachable in loss record 74 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A8E47: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x48A9337: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 8,224 bytes in 2 blocks are still reachable in loss record 75 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489593D: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A84: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 8,224 bytes in 2 blocks are still reachable in loss record 76 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489593D: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A93: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 8,224 bytes in 2 blocks are still reachable in loss record 77 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489593D: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895AB8: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 8,224 bytes in 2 blocks are still reachable in loss record 78 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895AD2: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 8,224 bytes in 2 blocks are still reachable in loss record 79 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895AE1: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 12,336 bytes in 3 blocks are still reachable in loss record 80 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895914: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A93: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 12,336 bytes in 3 blocks are still reachable in loss record 81 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895914: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895AB8: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== 28,784 bytes in 7 blocks are still reachable in loss record 82 of 82
==4157883==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4157883==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489B99E: rl_parse_and_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x489BB6C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895A38: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4157883==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4157883== 
==4157883== LEAK SUMMARY:
==4157883==    definitely lost: 0 bytes in 0 blocks
==4157883==    indirectly lost: 0 bytes in 0 blocks
==4157883==      possibly lost: 0 bytes in 0 blocks
==4157883==    still reachable: 213,948 bytes in 328 blocks
==4157883==         suppressed: 0 bytes in 0 blocks
==4157883== 
==4157883== For lists of detected and suppressed errors, rerun with: -s
==4157883== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)
zsh: segmentation fault (core dumped)  valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes 
c2r11s2% >....
>

No funciona el historial

c2r11s2% valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./minishell                                                                                                    

==4158115== Memcheck, a memory error detector
==4158115== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4158115== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==4158115== Command: ./minishell
==4158115== 
minishell$ export VAR=42
==4158115== Conditional jump or move depends on uninitialised value(s)
==4158115==    at 0x4071E5: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4072D6: is_valid_quote (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x406B8D: export_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4049BA: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==  Uninitialised value was created by a stack allocation
==4158115==    at 0x4071B0: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== Conditional jump or move depends on uninitialised value(s)
==4158115==    at 0x40724A: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4072D6: is_valid_quote (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x406B8D: export_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4049BA: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==  Uninitialised value was created by a stack allocation
==4158115==    at 0x4071B0: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== Conditional jump or move depends on uninitialised value(s)
==4158115==    at 0x4072EC: is_valid_quote (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x406B8D: export_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4049BA: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==  Uninitialised value was created by a stack allocation
==4158115==    at 0x4071B0: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== Invalid read of size 1
==4158115==    at 0x407022: save_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x406F80: split_params (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x406C04: export_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4049BA: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==  Address 0x4b66ed7 is 0 bytes after a block of size 7 alloc'd
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x407E9B: ft_strdup (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4058FF: remove_quotes (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x406BCD: export_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4049BA: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
minishell$ echo $VAR
==4158115== Conditional jump or move depends on uninitialised value(s)
==4158115==    at 0x4071E5: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4072D6: is_valid_quote (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4067CF: echo_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4048B6: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==  Uninitialised value was created by a stack allocation
==4158115==    at 0x4071B0: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== Conditional jump or move depends on uninitialised value(s)
==4158115==    at 0x40724A: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4072D6: is_valid_quote (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4067CF: echo_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4048B6: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==  Uninitialised value was created by a stack allocation
==4158115==    at 0x4071B0: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== Conditional jump or move depends on uninitialised value(s)
==4158115==    at 0x4072EC: is_valid_quote (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4067CF: echo_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4048B6: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==  Uninitialised value was created by a stack allocation
==4158115==    at 0x4071B0: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
42
minishell$ unset VAR
==4158115== Conditional jump or move depends on uninitialised value(s)
==4158115==    at 0x4071E5: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4072D6: is_valid_quote (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x407147: unset_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4049EE: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==  Uninitialised value was created by a stack allocation
==4158115==    at 0x4071B0: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== Conditional jump or move depends on uninitialised value(s)
==4158115==    at 0x40724A: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4072D6: is_valid_quote (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x407147: unset_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4049EE: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==  Uninitialised value was created by a stack allocation
==4158115==    at 0x4071B0: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== Conditional jump or move depends on uninitialised value(s)
==4158115==    at 0x4072EC: is_valid_quote (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x407147: unset_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4049EE: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==  Uninitialised value was created by a stack allocation
==4158115==    at 0x4071B0: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
sh: 1: leaks: not found
==4158115== 
==4158115== HEAP SUMMARY:
==4158115==     in use at exit: 212,472 bytes in 319 blocks
==4158115==   total heap usage: 599 allocs, 280 frees, 234,407 bytes allocated
==4158115== 
==4158115== 4 bytes in 1 blocks are still reachable in loss record 1 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x407E9B: ft_strdup (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4058FF: remove_quotes (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x407187: unset_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4049EE: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 7 bytes in 1 blocks are still reachable in loss record 2 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x408614: ft_strjoin (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x402B1B: create_env_value (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x406C65: export_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4049BA: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 7 bytes in 1 blocks are indirectly lost in loss record 3 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x407E9B: ft_strdup (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4058FF: remove_quotes (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x406BCD: export_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4049BA: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 8 bytes in 1 blocks are still reachable in loss record 4 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x497058E: strdup (strdup.c:42)
==4158115==    by 0x4B0ED17: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 8 bytes in 1 blocks are still reachable in loss record 5 of 77
==4158115==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48AE491: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489A626: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 10 bytes in 1 blocks are still reachable in loss record 6 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488B694: readline_internal_teardown (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895D2A: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 12 bytes in 1 blocks are still reachable in loss record 7 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488A1E3: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 12 bytes in 1 blocks are still reachable in loss record 8 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489A5F2: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 13 bytes in 1 blocks are still reachable in loss record 9 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489BBF5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A38: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 14 bytes in 1 blocks are still reachable in loss record 10 of 77
==4158115==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B08272: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 15 bytes in 1 blocks are still reachable in loss record 11 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x497058E: strdup (strdup.c:42)
==4158115==    by 0x4B00377: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B02BF8: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 15 bytes in 1 blocks are still reachable in loss record 12 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x497058E: strdup (strdup.c:42)
==4158115==    by 0x4B0C8AE: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 16 bytes in 1 blocks are still reachable in loss record 13 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x4895B26: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 20 bytes in 1 blocks are still reachable in loss record 14 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4898D8B: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489B6C9: rl_parse_and_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489BB6C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A38: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 24 bytes in 1 blocks are still reachable in loss record 15 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x49E7F34: tsearch (tsearch.c:337)
==4158115==    by 0x4B04D6E: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 27 bytes in 1 blocks are still reachable in loss record 16 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x4B02624: _nc_home_terminfo (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B02BE2: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 34 bytes in 3 blocks are still reachable in loss record 17 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A4B39: alloc_history_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A6F65: add_history (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4032A4: save_history (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4032E1: check_input_valid (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4024CD: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 36 bytes in 3 blocks are still reachable in loss record 18 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A6F28: add_history (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4032A4: save_history (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4032E1: check_input_valid (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4024CD: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 46 bytes in 1 blocks are still reachable in loss record 19 of 77
==4158115==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C16F: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115== 
==4158115== 46 bytes in 1 blocks are still reachable in loss record 20 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x4B00FDE: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 48 bytes in 1 blocks are still reachable in loss record 21 of 77
==4158115==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x4B02833: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 72 bytes in 3 blocks are still reachable in loss record 22 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A4B1D: alloc_history_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A6F65: add_history (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4032A4: save_history (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4032E1: check_input_valid (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4024CD: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 78 bytes in 1 blocks are still reachable in loss record 23 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x4B0104B: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 93 bytes in 1 blocks are still reachable in loss record 24 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x497058E: strdup (strdup.c:42)
==4158115==    by 0x4B04D54: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 94 bytes in 1 blocks are still reachable in loss record 25 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x4B0495B: _nc_tparm_analyze (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B04C62: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 96 bytes in 1 blocks are still reachable in loss record 26 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x40828A: ft_split (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4025B6: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 96 bytes in 1 blocks are still reachable in loss record 27 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x4B0279A: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 137 bytes in 11 blocks are still reachable in loss record 28 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x40880A: ft_substr (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x408474: set_word (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4082DB: ft_split (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4025B6: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 156 bytes in 1 blocks are still reachable in loss record 29 of 77
==4158115==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C197: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115== 
==4158115== 168 bytes in 1 blocks are still reachable in loss record 30 of 77
==4158115==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x4B04CCD: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 168 bytes in 1 blocks are still reachable in loss record 31 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4078B1: execcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4075A8: parseexec (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x407754: parsepipe (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x40780F: parsecmd (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4024FC: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 256 bytes in 1 blocks are still reachable in loss record 32 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895C86: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 276 bytes in 1 blocks are still reachable in loss record 33 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x402A3A: create_env_value (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x406C65: export_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4049BA: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 343 (336 direct, 7 indirect) bytes in 2 blocks are definitely lost in loss record 34 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4078B1: execcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4075A8: parseexec (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x407754: parsepipe (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x40780F: parsecmd (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4024FC: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 552 bytes in 1 blocks are still reachable in loss record 35 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x402A24: create_env_value (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x406C65: export_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4049BA: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 608 bytes in 1 blocks are still reachable in loss record 36 of 77
==4158115==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x4B0C37E: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 608 bytes in 1 blocks are still reachable in loss record 37 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x4B01119: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 760 bytes in 1 blocks are still reachable in loss record 38 of 77
==4158115==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x4B0C819: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 940 bytes in 1 blocks are still reachable in loss record 39 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x4B0C287: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 1,024 bytes in 1 blocks are still reachable in loss record 40 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4897C7B: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 1,024 bytes in 1 blocks are still reachable in loss record 41 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4897C8B: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 1,024 bytes in 1 blocks are still reachable in loss record 42 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4897CA2: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 1,024 bytes in 1 blocks are still reachable in loss record 43 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4897CBB: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 1,024 bytes in 1 blocks are still reachable in loss record 44 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4897DC5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 1,024 bytes in 1 blocks are still reachable in loss record 45 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4897DDA: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 1,024 bytes in 1 blocks are still reachable in loss record 46 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4897DE8: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 1,024 bytes in 1 blocks are still reachable in loss record 47 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4897DF6: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 1,536 bytes in 1 blocks are still reachable in loss record 48 of 77
==4158115==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48AE491: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488B877: rl_add_funmap_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488B8C8: rl_initialize_funmap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A2C: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 1,664 bytes in 1 blocks are still reachable in loss record 49 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x4B0BACD: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 2,032 bytes in 1 blocks are still reachable in loss record 50 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A9419: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 2,240 bytes in 140 blocks are still reachable in loss record 51 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488B822: rl_add_funmap_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488B8C8: rl_initialize_funmap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A2C: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 2,556 bytes in 67 blocks are still reachable in loss record 52 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x407E9B: ft_strdup (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4026C8: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 3,904 bytes in 1 blocks are still reachable in loss record 53 of 77
==4158115==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C1B5: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115== 
==4158115== 3,904 bytes in 1 blocks are still reachable in loss record 54 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x4B00FFF: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 4,016 bytes in 1 blocks are still reachable in loss record 55 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A6FD6: add_history (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4032A4: save_history (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4032E1: check_input_valid (in /goinfre/natferna/cursus/minishell/minishell)
==4158115==    by 0x4024CD: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 4,080 bytes in 1 blocks are still reachable in loss record 56 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A93F9: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 4,112 bytes in 1 blocks are still reachable in loss record 57 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A8DD5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A931F: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 4,112 bytes in 1 blocks are still reachable in loss record 58 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A8E5A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A931F: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 4,112 bytes in 1 blocks are still reachable in loss record 59 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A8E5A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A932B: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 4,112 bytes in 1 blocks are still reachable in loss record 60 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A8E5A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A9337: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 4,112 bytes in 1 blocks are still reachable in loss record 61 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489594C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A84: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 4,112 bytes in 1 blocks are still reachable in loss record 62 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489594C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A93: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 4,112 bytes in 1 blocks are still reachable in loss record 63 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489594C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895AB8: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 7,952 bytes in 1 blocks are still reachable in loss record 64 of 77
==4158115==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x4AFFC97: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B013AF: _nc_find_type_entry (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x4B03E4C: tgetstr_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4158115==    by 0x48A921A: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 8,224 bytes in 2 blocks are still reachable in loss record 65 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A8E47: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A931F: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 8,224 bytes in 2 blocks are still reachable in loss record 66 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A8DD5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A932B: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 8,224 bytes in 2 blocks are still reachable in loss record 67 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A8E47: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A932B: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 8,224 bytes in 2 blocks are still reachable in loss record 68 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A8DD5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A9337: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 8,224 bytes in 2 blocks are still reachable in loss record 69 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A8E47: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x48A9337: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 8,224 bytes in 2 blocks are still reachable in loss record 70 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489593D: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A84: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 8,224 bytes in 2 blocks are still reachable in loss record 71 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489593D: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A93: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 8,224 bytes in 2 blocks are still reachable in loss record 72 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489593D: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895AB8: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 8,224 bytes in 2 blocks are still reachable in loss record 73 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895AD2: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 8,224 bytes in 2 blocks are still reachable in loss record 74 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895AE1: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 12,336 bytes in 3 blocks are still reachable in loss record 75 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895914: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A93: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 12,336 bytes in 3 blocks are still reachable in loss record 76 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895914: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895AB8: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== 28,784 bytes in 7 blocks are still reachable in loss record 77 of 77
==4158115==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4158115==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489B99E: rl_parse_and_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x489BB6C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895A38: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4158115==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4158115== 
==4158115== LEAK SUMMARY:
==4158115==    definitely lost: 336 bytes in 2 blocks
==4158115==    indirectly lost: 7 bytes in 1 blocks
==4158115==      possibly lost: 0 bytes in 0 blocks
==4158115==    still reachable: 212,129 bytes in 316 blocks
==4158115==         suppressed: 0 bytes in 0 blocks
==4158115== 
==4158115== For lists of detected and suppressed errors, rerun with: -s
==4158115== ERROR SUMMARY: 31 errors from 11 contexts (suppressed: 0 from 0)


2r11s2% valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./minishell

==4159335== Memcheck, a memory error detector
==4159335== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4159335== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==4159335== Command: ./minishell
==4159335== 
minishell$ ls
'"'               builtins           cmd_util.o      env.c        history.c       LICENSE   Makefile           param.o   README.md       safe_func.c   test_manual.txt   vector.c
''\''"'           cmd_controller.c   command.c       env.o        history.o       line.c    minishell          parse.c   redirection.c   safe_func.o   tmp               vector.o
 archivo.txt      cmd_impl.c         command.o       example      interactive.c   line.o    minishell.h        parse.o   redirection.o   str_util.c    token.c
 builtin_impl.c   cmd_impl.o         constructor.c   history2.c   interactive.o   main.c    minishell_tester   pipe.c    safe_free.c     str_util.o    token.o
 builtin_impl.o   cmd_util.c         constructor.o   history2.o   lib             main.o    param.c            pipe.o    safe_free.o     test          util
minishell$ pwd
/goinfre/natferna/cursus/minishell
minishell$ cd builtins
==4159335== Conditional jump or move depends on uninitialised value(s)
==4159335==    at 0x4071E5: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4072D6: is_valid_quote (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4065B8: prepare_arguments (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4064C4: cd_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x40491E: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==  Uninitialised value was created by a stack allocation
==4159335==    at 0x4071B0: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== Conditional jump or move depends on uninitialised value(s)
==4159335==    at 0x40724A: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4072D6: is_valid_quote (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4065B8: prepare_arguments (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4064C4: cd_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x40491E: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==  Uninitialised value was created by a stack allocation
==4159335==    at 0x4071B0: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== Conditional jump or move depends on uninitialised value(s)
==4159335==    at 0x4072EC: is_valid_quote (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4065B8: prepare_arguments (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4064C4: cd_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x40491E: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==  Uninitialised value was created by a stack allocation
==4159335==    at 0x4071B0: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
minishell$ cd ..
minishell$ cd lib
minishell$ pwd
/goinfre/natferna/cursus/minishell/lib
minishell$ cd ..
minishell$ exit
==4159335== 
==4159335== HEAP SUMMARY:
==4159335==     in use at exit: 213,493 bytes in 340 blocks
==4159335==   total heap usage: 707 allocs, 367 frees, 293,516 bytes allocated
==4159335== 
==4159335== 5 bytes in 1 blocks are still reachable in loss record 1 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488B694: readline_internal_teardown (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895D2A: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 8 bytes in 1 blocks are still reachable in loss record 2 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x497058E: strdup (strdup.c:42)
==4159335==    by 0x4B0ED17: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 8 bytes in 1 blocks are still reachable in loss record 3 of 77
==4159335==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48AE491: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489A626: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 12 bytes in 1 blocks are still reachable in loss record 4 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488A1E3: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 12 bytes in 1 blocks are still reachable in loss record 5 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489A5F2: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 13 bytes in 1 blocks are still reachable in loss record 6 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489BBF5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A38: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 14 bytes in 1 blocks are still reachable in loss record 7 of 77
==4159335==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B08272: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 15 bytes in 1 blocks are still reachable in loss record 8 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x497058E: strdup (strdup.c:42)
==4159335==    by 0x4B00377: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B02BF8: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 15 bytes in 1 blocks are still reachable in loss record 9 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x497058E: strdup (strdup.c:42)
==4159335==    by 0x4B0C8AE: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 16 bytes in 1 blocks are still reachable in loss record 10 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x4895B26: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 19 bytes in 4 blocks are indirectly lost in loss record 11 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x407E9B: ft_strdup (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4058FF: remove_quotes (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x406607: prepare_arguments (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4064C4: cd_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x40491E: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 20 bytes in 1 blocks are still reachable in loss record 12 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4898D8B: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489B6C9: rl_parse_and_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489BB6C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A38: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 24 bytes in 1 blocks are still reachable in loss record 13 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x49E7F34: tsearch (tsearch.c:337)
==4159335==    by 0x4B04D6E: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 27 bytes in 1 blocks are still reachable in loss record 14 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x4B02624: _nc_home_terminfo (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B02BE2: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 39 bytes in 1 blocks are still reachable in loss record 15 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4028F8: update_env_value (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x406705: move_directory (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x406534: cd_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x40491E: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 46 bytes in 1 blocks are still reachable in loss record 16 of 77
==4159335==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C16F: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335== 
==4159335== 46 bytes in 1 blocks are still reachable in loss record 17 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x4B00FDE: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 46 bytes in 1 blocks are still reachable in loss record 18 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4028F8: update_env_value (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4066D9: move_directory (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x406534: cd_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x40491E: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 47 bytes in 8 blocks are still reachable in loss record 19 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A4B39: alloc_history_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A6F65: add_history (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4032A4: save_history (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4032E1: check_input_valid (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4024CD: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 48 bytes in 1 blocks are still reachable in loss record 20 of 77
==4159335==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x4B02833: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 78 bytes in 1 blocks are still reachable in loss record 21 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x4B0104B: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 93 bytes in 1 blocks are still reachable in loss record 22 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x497058E: strdup (strdup.c:42)
==4159335==    by 0x4B04D54: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 94 bytes in 1 blocks are still reachable in loss record 23 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x4B0495B: _nc_tparm_analyze (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B04C62: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 96 bytes in 1 blocks are still reachable in loss record 24 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x40828A: ft_split (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4025B6: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 96 bytes in 1 blocks are still reachable in loss record 25 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x4B0279A: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 96 bytes in 8 blocks are still reachable in loss record 26 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A6F28: add_history (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4032A4: save_history (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4032E1: check_input_valid (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4024CD: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 137 bytes in 11 blocks are still reachable in loss record 27 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x40880A: ft_substr (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x408474: set_word (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4082DB: ft_split (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4025B6: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 156 bytes in 1 blocks are still reachable in loss record 28 of 77
==4159335==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C197: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335== 
==4159335== 168 bytes in 1 blocks are still reachable in loss record 29 of 77
==4159335==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x4B04CCD: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 168 bytes in 1 blocks are still reachable in loss record 30 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4078B1: execcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4075A8: parseexec (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x407754: parsepipe (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x40780F: parsecmd (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4024FC: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 192 bytes in 8 blocks are still reachable in loss record 31 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A4B1D: alloc_history_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A6F65: add_history (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4032A4: save_history (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4032E1: check_input_valid (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4024CD: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 256 bytes in 1 blocks are still reachable in loss record 32 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895C86: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 272 bytes in 1 blocks are still reachable in loss record 33 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x402650: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 544 bytes in 1 blocks are still reachable in loss record 34 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x402633: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 608 bytes in 1 blocks are still reachable in loss record 35 of 77
==4159335==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x4B0C37E: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 608 bytes in 1 blocks are still reachable in loss record 36 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x4B01119: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 760 bytes in 1 blocks are still reachable in loss record 37 of 77
==4159335==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x4B0C819: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 940 bytes in 1 blocks are still reachable in loss record 38 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x4B0C287: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 1,024 bytes in 1 blocks are still reachable in loss record 39 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4897C7B: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 1,024 bytes in 1 blocks are still reachable in loss record 40 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4897C8B: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 1,024 bytes in 1 blocks are still reachable in loss record 41 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4897CA2: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 1,024 bytes in 1 blocks are still reachable in loss record 42 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4897CBB: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 1,024 bytes in 1 blocks are still reachable in loss record 43 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4897DC5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 1,024 bytes in 1 blocks are still reachable in loss record 44 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4897DDA: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 1,024 bytes in 1 blocks are still reachable in loss record 45 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4897DE8: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 1,024 bytes in 1 blocks are still reachable in loss record 46 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4897DF6: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 1,195 (1,176 direct, 19 indirect) bytes in 7 blocks are definitely lost in loss record 47 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4078B1: execcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4075A8: parseexec (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x407754: parsepipe (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x40780F: parsecmd (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4024FC: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 1,536 bytes in 1 blocks are still reachable in loss record 48 of 77
==4159335==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48AE491: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488B877: rl_add_funmap_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488B8C8: rl_initialize_funmap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A2C: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 1,664 bytes in 1 blocks are still reachable in loss record 49 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x4B0BACD: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 2,032 bytes in 1 blocks are still reachable in loss record 50 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A9419: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 2,240 bytes in 140 blocks are still reachable in loss record 51 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488B822: rl_add_funmap_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488B8C8: rl_initialize_funmap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A2C: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 2,475 bytes in 65 blocks are still reachable in loss record 52 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x407E9B: ft_strdup (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4026C8: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 3,904 bytes in 1 blocks are still reachable in loss record 53 of 77
==4159335==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C1B5: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335== 
==4159335== 3,904 bytes in 1 blocks are still reachable in loss record 54 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x4B00FFF: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 4,016 bytes in 1 blocks are still reachable in loss record 55 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A6FD6: add_history (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4032A4: save_history (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4032E1: check_input_valid (in /goinfre/natferna/cursus/minishell/minishell)
==4159335==    by 0x4024CD: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 4,080 bytes in 1 blocks are still reachable in loss record 56 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A93F9: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 4,112 bytes in 1 blocks are still reachable in loss record 57 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A8DD5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A931F: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 4,112 bytes in 1 blocks are still reachable in loss record 58 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A8E5A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A931F: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 4,112 bytes in 1 blocks are still reachable in loss record 59 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A8E5A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A932B: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 4,112 bytes in 1 blocks are still reachable in loss record 60 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A8E5A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A9337: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 4,112 bytes in 1 blocks are still reachable in loss record 61 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489594C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A84: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 4,112 bytes in 1 blocks are still reachable in loss record 62 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489594C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A93: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 4,112 bytes in 1 blocks are still reachable in loss record 63 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489594C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895AB8: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 7,952 bytes in 1 blocks are still reachable in loss record 64 of 77
==4159335==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x4AFFC97: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B013AF: _nc_find_type_entry (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x4B03E4C: tgetstr_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4159335==    by 0x48A921A: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 8,224 bytes in 2 blocks are still reachable in loss record 65 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A8E47: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A931F: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 8,224 bytes in 2 blocks are still reachable in loss record 66 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A8DD5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A932B: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 8,224 bytes in 2 blocks are still reachable in loss record 67 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A8E47: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A932B: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 8,224 bytes in 2 blocks are still reachable in loss record 68 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A8DD5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A9337: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 8,224 bytes in 2 blocks are still reachable in loss record 69 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A8E47: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x48A9337: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 8,224 bytes in 2 blocks are still reachable in loss record 70 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489593D: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A84: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 8,224 bytes in 2 blocks are still reachable in loss record 71 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489593D: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A93: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 8,224 bytes in 2 blocks are still reachable in loss record 72 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489593D: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895AB8: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 8,224 bytes in 2 blocks are still reachable in loss record 73 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895AD2: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 8,224 bytes in 2 blocks are still reachable in loss record 74 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895AE1: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 12,336 bytes in 3 blocks are still reachable in loss record 75 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895914: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A93: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 12,336 bytes in 3 blocks are still reachable in loss record 76 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895914: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895AB8: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== 28,784 bytes in 7 blocks are still reachable in loss record 77 of 77
==4159335==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4159335==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489B99E: rl_parse_and_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x489BB6C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895A38: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4159335==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4159335== 
==4159335== LEAK SUMMARY:
==4159335==    definitely lost: 1,176 bytes in 7 blocks
==4159335==    indirectly lost: 19 bytes in 4 blocks
==4159335==      possibly lost: 0 bytes in 0 blocks
==4159335==    still reachable: 212,298 bytes in 329 blocks
==4159335==         suppressed: 0 bytes in 0 blocks
==4159335== 
==4159335== For lists of detected and suppressed errors, rerun with: -s
==4159335== ERROR SUMMARY: 35 errors from 4 contexts (suppressed: 0 from 0)

Cada vez que uso echo hola >> archivo.txt
minishell$ echo hola >> archivo.txt
==4160554== Conditional jump or move depends on uninitialised value(s)
==4160554==    at 0x4072EC: is_valid_quote (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4067CF: echo_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4048B6: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x403AD5: runcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x403D8C: runcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x404A4D: run_external (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x403F23: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==  Uninitialised value was created by a stack allocation
==4160554==    at 0x4071B0: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 
==4160554== HEAP SUMMARY:
==4160554==     in use at exit: 215,609 bytes in 371 blocks
==4160554==   total heap usage: 801 allocs, 430 frees, 338,411 bytes allocated
==4160554== 
==4160554== 1 bytes in 1 blocks are still reachable in loss record 1 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A4A5D: rl_maybe_save_line (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A6AC6: rl_get_previous_history (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488BE97: _rl_dispatch_subseq (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488BFF3: _rl_dispatch_subseq (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488BFF3: _rl_dispatch_subseq (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488CCC9: readline_internal_char (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895D14: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 8 bytes in 1 blocks are still reachable in loss record 2 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x497058E: strdup (strdup.c:42)
==4160554==    by 0x4B0ED17: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 8 bytes in 1 blocks are still reachable in loss record 3 of 89
==4160554==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48AE491: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489A626: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 9 bytes in 1 blocks are still reachable in loss record 4 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x497058E: strdup (strdup.c:42)
==4160554==    by 0x4B04D54: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x489E8B1: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489FCE1: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488CB56: _rl_internal_char_cleanup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488CD8F: readline_internal_char (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895D14: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 9 bytes in 1 blocks are still reachable in loss record 5 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x408614: ft_strjoin (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x402B1B: create_env_value (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x406C65: export_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4049BA: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 9 bytes in 1 blocks are still reachable in loss record 6 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x497058E: strdup (strdup.c:42)
==4160554==    by 0x4B04D54: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x489EF9A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489FCE1: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488CB56: _rl_internal_char_cleanup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488CD8F: readline_internal_char (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895D14: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 9 bytes in 1 blocks are indirectly lost in loss record 7 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x407E9B: ft_strdup (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4058FF: remove_quotes (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x406BCD: export_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4049BA: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 12 bytes in 1 blocks are still reachable in loss record 8 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488A1E3: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 12 bytes in 1 blocks are still reachable in loss record 9 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489A5F2: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 13 bytes in 1 blocks are still reachable in loss record 10 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489BBF5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A38: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 15 bytes in 1 blocks are still reachable in loss record 11 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x497058E: strdup (strdup.c:42)
==4160554==    by 0x4B00377: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B02BF8: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 15 bytes in 1 blocks are still reachable in loss record 12 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x497058E: strdup (strdup.c:42)
==4160554==    by 0x4B0C8AE: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 16 bytes in 1 blocks are still reachable in loss record 13 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x4895B26: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 20 bytes in 1 blocks are still reachable in loss record 14 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4898D8B: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489B6C9: rl_parse_and_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489BB6C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A38: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 24 bytes in 1 blocks are still reachable in loss record 15 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x49E7F34: tsearch (tsearch.c:337)
==4160554==    by 0x4B04D6E: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 24 bytes in 1 blocks are still reachable in loss record 16 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x49E7F9E: tsearch (tsearch.c:337)
==4160554==    by 0x4B04D6E: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x489E8B1: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489FCE1: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488CB56: _rl_internal_char_cleanup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488CD8F: readline_internal_char (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895D14: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 24 bytes in 1 blocks are still reachable in loss record 17 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A4A39: rl_maybe_save_line (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A6AC6: rl_get_previous_history (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488BE97: _rl_dispatch_subseq (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488BFF3: _rl_dispatch_subseq (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488BFF3: _rl_dispatch_subseq (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488CCC9: readline_internal_char (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895D14: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 24 bytes in 1 blocks are still reachable in loss record 18 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x49E7F9E: tsearch (tsearch.c:337)
==4160554==    by 0x4B04D6E: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x489EF9A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489FCE1: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488CB56: _rl_internal_char_cleanup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488CD8F: readline_internal_char (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895D14: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 25 bytes in 1 blocks are still reachable in loss record 19 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488B694: readline_internal_teardown (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895D2A: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 27 bytes in 1 blocks are still reachable in loss record 20 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x4B02624: _nc_home_terminfo (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B02BE2: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 46 bytes in 1 blocks are still reachable in loss record 21 of 89
==4160554==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C16F: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554== 
==4160554== 46 bytes in 1 blocks are still reachable in loss record 22 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x4B00FDE: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 48 bytes in 1 blocks are still reachable in loss record 23 of 89
==4160554==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x4B02833: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 56 bytes in 1 blocks are still reachable in loss record 24 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x407902: redircmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x407565: parseredirs (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4076F2: parse_exec_args (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4075DA: parseexec (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x407754: parsepipe (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x40780F: parsecmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4024FC: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 70 bytes in 1 blocks are still reachable in loss record 25 of 89
==4160554==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B08731: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x489E8B1: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489FCE1: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488CB56: _rl_internal_char_cleanup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488CD8F: readline_internal_char (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895D14: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 78 bytes in 1 blocks are still reachable in loss record 26 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x4B0104B: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 93 bytes in 1 blocks are still reachable in loss record 27 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x497058E: strdup (strdup.c:42)
==4160554==    by 0x4B04D54: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 94 bytes in 1 blocks are still reachable in loss record 28 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x4B0495B: _nc_tparm_analyze (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B04C62: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 96 bytes in 1 blocks are still reachable in loss record 29 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x40828A: ft_split (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4025B6: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 96 bytes in 1 blocks are still reachable in loss record 30 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x4B0279A: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 137 bytes in 11 blocks are still reachable in loss record 31 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x40880A: ft_substr (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x408474: set_word (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4082DB: ft_split (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4025B6: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 144 bytes in 12 blocks are still reachable in loss record 32 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A6F28: add_history (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4032A4: save_history (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4032E1: check_input_valid (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4024CD: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 156 bytes in 1 blocks are still reachable in loss record 33 of 89
==4160554==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C197: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554== 
==4160554== 168 bytes in 1 blocks are still reachable in loss record 34 of 89
==4160554==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x4B04CCD: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 168 bytes in 1 blocks are still reachable in loss record 35 of 89
==4160554==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x4B04CCD: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x489E8B1: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489FCE1: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488CB56: _rl_internal_char_cleanup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488CD8F: readline_internal_char (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895D14: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 168 bytes in 1 blocks are still reachable in loss record 36 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4078B1: execcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4075A8: parseexec (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x407754: parsepipe (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x40780F: parsecmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4024FC: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 168 bytes in 1 blocks are still reachable in loss record 37 of 89
==4160554==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x4B04CCD: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x489EF9A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489FCE1: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488CB56: _rl_internal_char_cleanup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488CD8F: readline_internal_char (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895D14: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 168 bytes in 1 blocks are indirectly lost in loss record 38 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4078B1: execcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4075A8: parseexec (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x407754: parsepipe (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4077B3: parsepipe (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x40780F: parsecmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4024FC: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 253 bytes in 12 blocks are still reachable in loss record 39 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A4B39: alloc_history_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A6F65: add_history (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4032A4: save_history (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4032E1: check_input_valid (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4024CD: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 256 bytes in 1 blocks are still reachable in loss record 40 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895C86: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 276 bytes in 1 blocks are still reachable in loss record 41 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x402A3A: create_env_value (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x406C65: export_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4049BA: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 288 bytes in 12 blocks are still reachable in loss record 42 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A4B1D: alloc_history_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A6F65: add_history (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4032A4: save_history (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4032E1: check_input_valid (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4024CD: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 360 (24 direct, 336 indirect) bytes in 1 blocks are definitely lost in loss record 43 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x407AA9: pipecmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4077BF: parsepipe (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x40780F: parsecmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4024FC: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 552 bytes in 1 blocks are still reachable in loss record 44 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x402A24: create_env_value (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x406C65: export_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4049BA: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 608 bytes in 1 blocks are still reachable in loss record 45 of 89
==4160554==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x4B0C37E: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 608 bytes in 1 blocks are still reachable in loss record 46 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x4B01119: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 681 (672 direct, 9 indirect) bytes in 4 blocks are definitely lost in loss record 47 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4078B1: execcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4075A8: parseexec (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x407754: parsepipe (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x40780F: parsecmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4024FC: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 760 bytes in 1 blocks are still reachable in loss record 48 of 89
==4160554==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x4B0C819: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 940 bytes in 1 blocks are still reachable in loss record 49 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x4B0C287: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 1,024 bytes in 1 blocks are still reachable in loss record 50 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4897C7B: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 1,024 bytes in 1 blocks are still reachable in loss record 51 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4897C8B: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 1,024 bytes in 1 blocks are still reachable in loss record 52 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4897CA2: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 1,024 bytes in 1 blocks are still reachable in loss record 53 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4897CBB: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 1,024 bytes in 1 blocks are still reachable in loss record 54 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4897DC5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 1,024 bytes in 1 blocks are still reachable in loss record 55 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4897DDA: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 1,024 bytes in 1 blocks are still reachable in loss record 56 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4897DE8: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 1,024 bytes in 1 blocks are still reachable in loss record 57 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4897DF6: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 1,176 bytes in 7 blocks are indirectly lost in loss record 58 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4078B1: execcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4075A8: parseexec (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x407754: parsepipe (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x40780F: parsecmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4024FC: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 1,344 (336 direct, 1,008 indirect) bytes in 6 blocks are definitely lost in loss record 59 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x407902: redircmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x407565: parseredirs (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4076F2: parse_exec_args (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4075DA: parseexec (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x407754: parsepipe (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x40780F: parsecmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4024FC: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 1,536 bytes in 1 blocks are still reachable in loss record 60 of 89
==4160554==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48AE491: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488B877: rl_add_funmap_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488B8C8: rl_initialize_funmap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A2C: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 1,664 bytes in 1 blocks are still reachable in loss record 61 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x4B0BACD: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 2,032 bytes in 1 blocks are still reachable in loss record 62 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A9419: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 2,240 bytes in 140 blocks are still reachable in loss record 63 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488B822: rl_add_funmap_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488B8C8: rl_initialize_funmap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A2C: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 2,556 bytes in 67 blocks are still reachable in loss record 64 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x407E9B: ft_strdup (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4026C8: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 3,904 bytes in 1 blocks are still reachable in loss record 65 of 89
==4160554==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C1B5: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554== 
==4160554== 3,904 bytes in 1 blocks are still reachable in loss record 66 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x4B00FFF: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 4,016 bytes in 1 blocks are still reachable in loss record 67 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A6FD6: add_history (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4032A4: save_history (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4032E1: check_input_valid (in /goinfre/natferna/cursus/minishell/minishell)
==4160554==    by 0x4024CD: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 4,080 bytes in 1 blocks are still reachable in loss record 68 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A93F9: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 4,112 bytes in 1 blocks are still reachable in loss record 69 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A8DD5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A931F: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 4,112 bytes in 1 blocks are still reachable in loss record 70 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A8E5A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A931F: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 4,112 bytes in 1 blocks are still reachable in loss record 71 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A8E5A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A932B: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 4,112 bytes in 1 blocks are still reachable in loss record 72 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A8E5A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A9337: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 4,112 bytes in 1 blocks are still reachable in loss record 73 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489594C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A84: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 4,112 bytes in 1 blocks are still reachable in loss record 74 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489594C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A93: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 4,112 bytes in 1 blocks are still reachable in loss record 75 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489594C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895AB8: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 7,952 bytes in 1 blocks are still reachable in loss record 76 of 89
==4160554==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x4AFFC97: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B013AF: _nc_find_type_entry (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x4B03E4C: tgetstr_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160554==    by 0x48A921A: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 8,224 bytes in 2 blocks are still reachable in loss record 77 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A8E47: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A931F: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 8,224 bytes in 2 blocks are still reachable in loss record 78 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A8DD5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A932B: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 8,224 bytes in 2 blocks are still reachable in loss record 79 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A8E47: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A932B: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 8,224 bytes in 2 blocks are still reachable in loss record 80 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A8DD5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A9337: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 8,224 bytes in 2 blocks are still reachable in loss record 81 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A8E47: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x48A9337: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 8,224 bytes in 2 blocks are still reachable in loss record 82 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489593D: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A84: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 8,224 bytes in 2 blocks are still reachable in loss record 83 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489593D: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A93: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 8,224 bytes in 2 blocks are still reachable in loss record 84 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489593D: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895AB8: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 8,224 bytes in 2 blocks are still reachable in loss record 85 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895AD2: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 8,224 bytes in 2 blocks are still reachable in loss record 86 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895AE1: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 12,336 bytes in 3 blocks are still reachable in loss record 87 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895914: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A93: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 12,336 bytes in 3 blocks are still reachable in loss record 88 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895914: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895AB8: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== 28,784 bytes in 7 blocks are still reachable in loss record 89 of 89
==4160554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160554==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489B99E: rl_parse_and_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x489BB6C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895A38: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160554==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160554== 
==4160554== LEAK SUMMARY:
==4160554==    definitely lost: 1,032 bytes in 11 blocks
==4160554==    indirectly lost: 1,353 bytes in 9 blocks
==4160554==      possibly lost: 0 bytes in 0 blocks
==4160554==    still reachable: 213,224 bytes in 351 blocks
==4160554==         suppressed: 0 bytes in 0 blocks
==4160554== 
==4160554== For lists of detected and suppressed errors, rerun with: -s
==4160554== ERROR SUMMARY: 35 errors from 11 contexts (suppressed: 0 from 0)
minishell$ 

minishell$ unset VAR
==4160657== Conditional jump or move depends on uninitialised value(s)
==4160657==    at 0x4071E5: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4072D6: is_valid_quote (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x407147: unset_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4049EE: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==  Uninitialised value was created by a stack allocation
==4160657==    at 0x4071B0: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== Conditional jump or move depends on uninitialised value(s)
==4160657==    at 0x40724A: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4072D6: is_valid_quote (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x407147: unset_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4049EE: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==  Uninitialised value was created by a stack allocation
==4160657==    at 0x4071B0: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== Conditional jump or move depends on uninitialised value(s)
==4160657==    at 0x4072EC: is_valid_quote (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x407147: unset_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4049EE: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==  Uninitialised value was created by a stack allocation
==4160657==    at 0x4071B0: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
sh: 1: leaks: not found
==4160657== 
==4160657== HEAP SUMMARY:
==4160657==     in use at exit: 212,443 bytes in 317 blocks
==4160657==   total heap usage: 615 allocs, 298 frees, 233,930 bytes allocated
==4160657== 
==4160657== 4 bytes in 1 blocks are still reachable in loss record 1 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x407E9B: ft_strdup (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4058FF: remove_quotes (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x407187: unset_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4049EE: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x403F11: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 8 bytes in 1 blocks are still reachable in loss record 2 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x497058E: strdup (strdup.c:42)
==4160657==    by 0x4B0ED17: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 8 bytes in 1 blocks are still reachable in loss record 3 of 75
==4160657==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48AE491: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489A626: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 10 bytes in 1 blocks are still reachable in loss record 4 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488B694: readline_internal_teardown (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895D2A: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 12 bytes in 1 blocks are still reachable in loss record 5 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488A1E3: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 12 bytes in 1 blocks are still reachable in loss record 6 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489A5F2: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489AE0D: rl_expand_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488A1BF: rl_set_prompt (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CCF: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 13 bytes in 1 blocks are still reachable in loss record 7 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489BBF5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A38: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 14 bytes in 1 blocks are still reachable in loss record 8 of 75
==4160657==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B08272: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 15 bytes in 1 blocks are still reachable in loss record 9 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x497058E: strdup (strdup.c:42)
==4160657==    by 0x4B00377: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B02BF8: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 15 bytes in 1 blocks are still reachable in loss record 10 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x497058E: strdup (strdup.c:42)
==4160657==    by 0x4B0C8AE: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 16 bytes in 1 blocks are still reachable in loss record 11 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x4895B26: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 20 bytes in 1 blocks are still reachable in loss record 12 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4898D8B: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489B6C9: rl_parse_and_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489BB6C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A38: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 24 bytes in 1 blocks are still reachable in loss record 13 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x49E7F34: tsearch (tsearch.c:337)
==4160657==    by 0x4B04D6E: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 27 bytes in 1 blocks are still reachable in loss record 14 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x4B02624: _nc_home_terminfo (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B02BE2: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 31 bytes in 3 blocks are still reachable in loss record 15 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A4B39: alloc_history_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A6F65: add_history (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4032A4: save_history (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4032E1: check_input_valid (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4024CD: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 36 bytes in 3 blocks are still reachable in loss record 16 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A6F28: add_history (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4032A4: save_history (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4032E1: check_input_valid (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4024CD: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 46 bytes in 1 blocks are still reachable in loss record 17 of 75
==4160657==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C16F: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657== 
==4160657== 46 bytes in 1 blocks are still reachable in loss record 18 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x4B00FDE: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 48 bytes in 1 blocks are still reachable in loss record 19 of 75
==4160657==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x4B02833: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 72 bytes in 3 blocks are still reachable in loss record 20 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A4B1D: alloc_history_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A6F65: add_history (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4032A4: save_history (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4032E1: check_input_valid (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4024CD: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 78 bytes in 1 blocks are still reachable in loss record 21 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x4B0104B: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 93 bytes in 1 blocks are still reachable in loss record 22 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x497058E: strdup (strdup.c:42)
==4160657==    by 0x4B04D54: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 94 bytes in 1 blocks are still reachable in loss record 23 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x4B0495B: _nc_tparm_analyze (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B04C62: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 96 bytes in 1 blocks are still reachable in loss record 24 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x40828A: ft_split (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4025B6: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 96 bytes in 1 blocks are still reachable in loss record 25 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x4B0279A: _nc_first_db (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C696: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 137 bytes in 11 blocks are still reachable in loss record 26 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x40880A: ft_substr (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x408474: set_word (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4082DB: ft_split (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4025B6: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 156 bytes in 1 blocks are still reachable in loss record 27 of 75
==4160657==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C197: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657== 
==4160657== 168 bytes in 1 blocks are still reachable in loss record 28 of 75
==4160657==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x4B04CCD: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B08098: _nc_tiparm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0EC7D: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0ED09: _nc_trim_sgr0 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0D6A8: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 168 bytes in 1 blocks are still reachable in loss record 29 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4078B1: execcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4075A8: parseexec (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x407754: parsepipe (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x40780F: parsecmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4024FC: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 256 bytes in 1 blocks are still reachable in loss record 30 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895C86: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 272 bytes in 1 blocks are still reachable in loss record 31 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x402650: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 336 bytes in 2 blocks are definitely lost in loss record 32 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4078B1: execcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4075A8: parseexec (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x407754: parsepipe (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x40780F: parsecmd (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4024FC: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 544 bytes in 1 blocks are still reachable in loss record 33 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x402F14: safe_malloc (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x402633: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 608 bytes in 1 blocks are still reachable in loss record 34 of 75
==4160657==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x4B0C37E: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 608 bytes in 1 blocks are still reachable in loss record 35 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x4B01119: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 760 bytes in 1 blocks are still reachable in loss record 36 of 75
==4160657==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x4B0C819: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 940 bytes in 1 blocks are still reachable in loss record 37 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x4B0C287: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 1,024 bytes in 1 blocks are still reachable in loss record 38 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4897C7B: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 1,024 bytes in 1 blocks are still reachable in loss record 39 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4897C8B: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 1,024 bytes in 1 blocks are still reachable in loss record 40 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4897CA2: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 1,024 bytes in 1 blocks are still reachable in loss record 41 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48AE4A7: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4897CBB: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4897D67: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 1,024 bytes in 1 blocks are still reachable in loss record 42 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4897DC5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 1,024 bytes in 1 blocks are still reachable in loss record 43 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4897DDA: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 1,024 bytes in 1 blocks are still reachable in loss record 44 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4897DE8: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 1,024 bytes in 1 blocks are still reachable in loss record 45 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4897DF6: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A0C7E: rl_redisplay (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488B458: readline_internal_setup (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CF8: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 1,536 bytes in 1 blocks are still reachable in loss record 46 of 75
==4160657==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48AE491: xrealloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488B877: rl_add_funmap_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488B8C8: rl_initialize_funmap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A2C: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 1,664 bytes in 1 blocks are still reachable in loss record 47 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x4B0BACD: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 2,032 bytes in 1 blocks are still reachable in loss record 48 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A9419: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 2,240 bytes in 140 blocks are still reachable in loss record 49 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488B822: rl_add_funmap_entry (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488B8C8: rl_initialize_funmap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A2C: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 2,556 bytes in 67 blocks are still reachable in loss record 50 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x407E9B: ft_strdup (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4026C8: init_env (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x402EC4: valid_inital_param (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x402422: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 3,904 bytes in 1 blocks are still reachable in loss record 51 of 75
==4160657==    at 0x484DCD3: realloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x4B016CC: _nc_doalloc (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C1B5: _nc_read_termtype (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C52A: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0EC40: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C6BB: _nc_read_entry2 (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C711: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C866: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657== 
==4160657== 3,904 bytes in 1 blocks are still reachable in loss record 52 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x4B00FFF: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0C87D: _nc_setupterm (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B0D4C9: tgetent_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x48A91CD: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 4,016 bytes in 1 blocks are still reachable in loss record 53 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A6FD6: add_history (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4032A4: save_history (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4032E1: check_input_valid (in /goinfre/natferna/cursus/minishell/minishell)
==4160657==    by 0x4024CD: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 4,080 bytes in 1 blocks are still reachable in loss record 54 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A93F9: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 4,112 bytes in 1 blocks are still reachable in loss record 55 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A8DD5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A931F: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 4,112 bytes in 1 blocks are still reachable in loss record 56 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A8E5A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A931F: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 4,112 bytes in 1 blocks are still reachable in loss record 57 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A8E5A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A932B: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 4,112 bytes in 1 blocks are still reachable in loss record 58 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A8E5A: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A9337: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 4,112 bytes in 1 blocks are still reachable in loss record 59 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489594C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A84: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 4,112 bytes in 1 blocks are still reachable in loss record 60 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489594C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A93: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 4,112 bytes in 1 blocks are still reachable in loss record 61 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489594C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895AB8: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 7,952 bytes in 1 blocks are still reachable in loss record 62 of 75
==4160657==    at 0x484DA83: calloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x4AFFC97: ??? (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B013AF: _nc_find_type_entry (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x4B03E4C: tgetstr_sp (in /usr/lib/x86_64-linux-gnu/libtinfo.so.6.3)
==4160657==    by 0x48A921A: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 8,224 bytes in 2 blocks are still reachable in loss record 63 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A8E47: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A931F: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 8,224 bytes in 2 blocks are still reachable in loss record 64 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A8DD5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A932B: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 8,224 bytes in 2 blocks are still reachable in loss record 65 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A8E47: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A932B: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 8,224 bytes in 2 blocks are still reachable in loss record 66 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A8DD5: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A9337: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 8,224 bytes in 2 blocks are still reachable in loss record 67 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A8E47: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x48A9337: _rl_init_terminal_io (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A0F: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 8,224 bytes in 2 blocks are still reachable in loss record 68 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489593D: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A84: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 8,224 bytes in 2 blocks are still reachable in loss record 69 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489593D: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A93: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 8,224 bytes in 2 blocks are still reachable in loss record 70 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489593D: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895AB8: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 8,224 bytes in 2 blocks are still reachable in loss record 71 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895AD2: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 8,224 bytes in 2 blocks are still reachable in loss record 72 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895AE1: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 12,336 bytes in 3 blocks are still reachable in loss record 73 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895914: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A93: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 12,336 bytes in 3 blocks are still reachable in loss record 74 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489575D: rl_bind_keyseq_if_unbound_in_map (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895914: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895AB8: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== 28,784 bytes in 7 blocks are still reachable in loss record 75 of 75
==4160657==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==4160657==    by 0x48ADBAC: xmalloc (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488A251: rl_make_bare_keymap (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x488AB6A: rl_generic_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489B99E: rl_parse_and_bind (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x489BB6C: ??? (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895A38: rl_initialize (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x4895CD4: readline (in /usr/lib/x86_64-linux-gnu/libreadline.so.8.1)
==4160657==    by 0x40245C: main (in /goinfre/natferna/cursus/minishell/minishell)
==4160657== 
==4160657== LEAK SUMMARY:
==4160657==    definitely lost: 336 bytes in 2 blocks
==4160657==    indirectly lost: 0 bytes in 0 blocks
==4160657==      possibly lost: 0 bytes in 0 blocks
==4160657==    still reachable: 212,107 bytes in 315 blocks
==4160657==         suppressed: 0 bytes in 0 blocks
==4160657== 
==4160657== For lists of detected and suppressed errors, rerun with: -s
==4160657== ERROR SUMMARY: 9 errors from 5 contexts (suppressed: 0 from 0)



c2r11s2% valgrind ./minishell
==4161862== Memcheck, a memory error detector
==4161862== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==4161862== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==4161862== Command: ./minishell
==4161862== 
minishell$ echo hola >> archivo.txt 
==4161894== Conditional jump or move depends on uninitialised value(s)
==4161894==    at 0x4071E5: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4161894==    by 0x4072D6: is_valid_quote (in /goinfre/natferna/cursus/minishell/minishell)
==4161894==    by 0x4067CF: echo_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4161894==    by 0x4048B6: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4161894==    by 0x403AD5: runcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4161894==    by 0x403D8C: runcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4161894==    by 0x404A4D: run_external (in /goinfre/natferna/cursus/minishell/minishell)
==4161894==    by 0x403F23: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4161894==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4161894== 
==4161894== Conditional jump or move depends on uninitialised value(s)
==4161894==    at 0x40724A: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4161894==    by 0x4072D6: is_valid_quote (in /goinfre/natferna/cursus/minishell/minishell)
==4161894==    by 0x4067CF: echo_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4161894==    by 0x4048B6: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4161894==    by 0x403AD5: runcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4161894==    by 0x403D8C: runcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4161894==    by 0x404A4D: run_external (in /goinfre/natferna/cursus/minishell/minishell)
==4161894==    by 0x403F23: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4161894==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4161894== 
==4161894== Conditional jump or move depends on uninitialised value(s)
==4161894==    at 0x4072EC: is_valid_quote (in /goinfre/natferna/cursus/minishell/minishell)
==4161894==    by 0x4067CF: echo_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4161894==    by 0x4048B6: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4161894==    by 0x403AD5: runcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4161894==    by 0x403D8C: runcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4161894==    by 0x404A4D: run_external (in /goinfre/natferna/cursus/minishell/minishell)
==4161894==    by 0x403F23: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4161894==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4161894== 
==4161894== 
==4161894== HEAP SUMMARY:
==4161894==     in use at exit: 212,096 bytes in 309 blocks
==4161894==   total heap usage: 557 allocs, 248 frees, 265,946 bytes allocated
==4161894== 
==4161894== LEAK SUMMARY:
==4161894==    definitely lost: 0 bytes in 0 blocks
==4161894==    indirectly lost: 0 bytes in 0 blocks
==4161894==      possibly lost: 0 bytes in 0 blocks
==4161894==    still reachable: 212,096 bytes in 309 blocks
==4161894==         suppressed: 0 bytes in 0 blocks
==4161894== Rerun with --leak-check=full to see details of leaked memory
==4161894== 
==4161894== Use --track-origins=yes to see where uninitialised values come from
==4161894== For lists of detected and suppressed errors, rerun with: -s
==4161894== ERROR SUMMARY: 9 errors from 3 contexts (suppressed: 0 from 0)
minishell$ echo hola >> archivo.txt
==4161916== Conditional jump or move depends on uninitialised value(s)
==4161916==    at 0x4071E5: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4161916==    by 0x4072D6: is_valid_quote (in /goinfre/natferna/cursus/minishell/minishell)
==4161916==    by 0x4067CF: echo_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4161916==    by 0x4048B6: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4161916==    by 0x403AD5: runcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4161916==    by 0x403D8C: runcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4161916==    by 0x404A4D: run_external (in /goinfre/natferna/cursus/minishell/minishell)
==4161916==    by 0x403F23: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4161916==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4161916== 
==4161916== Conditional jump or move depends on uninitialised value(s)
==4161916==    at 0x40724A: check_argument (in /goinfre/natferna/cursus/minishell/minishell)
==4161916==    by 0x4072D6: is_valid_quote (in /goinfre/natferna/cursus/minishell/minishell)
==4161916==    by 0x4067CF: echo_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4161916==    by 0x4048B6: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4161916==    by 0x403AD5: runcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4161916==    by 0x403D8C: runcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4161916==    by 0x404A4D: run_external (in /goinfre/natferna/cursus/minishell/minishell)
==4161916==    by 0x403F23: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4161916==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4161916== 
==4161916== Conditional jump or move depends on uninitialised value(s)
==4161916==    at 0x4072EC: is_valid_quote (in /goinfre/natferna/cursus/minishell/minishell)
==4161916==    by 0x4067CF: echo_impl (in /goinfre/natferna/cursus/minishell/minishell)
==4161916==    by 0x4048B6: run_internal (in /goinfre/natferna/cursus/minishell/minishell)
==4161916==    by 0x403AD5: runcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4161916==    by 0x403D8C: runcmd (in /goinfre/natferna/cursus/minishell/minishell)
==4161916==    by 0x404A4D: run_external (in /goinfre/natferna/cursus/minishell/minishell)
==4161916==    by 0x403F23: control_cmd (in /goinfre/natferna/cursus/minishell/minishell)
==4161916==    by 0x40250D: main (in /goinfre/natferna/cursus/minishell/minishell)
==4161916== 
==4161916== 
==4161916== HEAP SUMMARY:
==4161916==     in use at exit: 212,406 bytes in 316 blocks
==4161916==   total heap usage: 568 allocs, 252 frees, 266,313 bytes allocated
==4161916== 
==4161916== LEAK SUMMARY:
==4161916==    definitely lost: 56 bytes in 1 blocks
==4161916==    indirectly lost: 168 bytes in 1 blocks
==4161916==      possibly lost: 0 bytes in 0 blocks
==4161916==    still reachable: 212,182 bytes in 314 blocks
==4161916==         suppressed: 0 bytes in 0 blocks
==4161916== Rerun with --leak-check=full to see details of leaked memory
==4161916== 
==4161916== Use --track-origins=yes to see where uninitialised values come from
==4161916== For lists of detected and suppressed errors, rerun with: -s
==4161916== ERROR SUMMARY: 9 errors from 3 contexts (suppressed: 0 from 0)
minishell$ 






