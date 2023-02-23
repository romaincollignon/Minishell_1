/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** all prototypes and include
*/

#ifndef MY_H_
    #define MY_H_
    #include <fcntl.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <sys/stat.h>
    #include <ncurses.h>
    #include <signal.h>

    #include "struct_all.h"
    #include "my.h"

    // Function:
    int mini_printf(const char *format, ...);
    char **read_file(char *av[]);
    int mini_printf(const char *format, ...);
    int printf_credit(int tmp);
    int my_strlen(char const *str);
    char *my_put_nbr_modif(int nb);
    int	my_getnbr(char const *str);
    int my_power(int nb, int p);
    char **my_double_tab(char *buffer, char separator);
    int my_strcmp(char const *s1, char const *s2);
    char *my_put_nbr_modif(int nb);
    char *my_put_nbr_double(int nb);
    char *my_revstr(char *str);
    char* my_inv_double_tab(char** txt);
    char* my_inv_double_tab_html(char** txt);
    char *my_strcpy(char *dest, char const *src);
    char **my_str_to_word_array(char *tab, char *sep);
    void fill(char *str, int size);
    char pass_char_wait(int hit, int pos);
    char *my_strcpy(char *dest, char const *src);
    char *my_strupper(char *str);
    int my_strncmp(char const *s1, char const *s2, int n);


    // Shell:
    int shell(i_s *info_shell);
    char *get_cmd(i_s *info_shell);
    int cherch_periph(i_s *info_shell);
    int start_cmd(i_s *info_shell, char *nb_cmd);
    void error_shell(i_s *info_shell, int nb_error);
    int cherch_nb_dir(char **dir);

    // Cmd_Shell:
    int my_cd(i_s *info_shell, char *cmd);
    int my_env(i_s *info_shell, char *cmd);
    int my_exit(i_s *info_shell, char *cmd);
    int my_setenv(i_s *info_shell, char *cmd);
    int my_unsetenv(i_s *info_shell, char *cmd);
    int my_other(i_s *info_shell, char *arg, char *cmd);
    int my_pwd(i_s *info_shell, char *cmd);
    int my_echo(i_s *info_shell, char *cmd);
    int my_execute(i_s *info_shell, char *cmd);

    // Function my_other:
    char *cherch_path(i_s *info_shell);
    char *my_other_edit_arg(char *arg);
    char **cherch_dr(i_s *info_shell, char *cmd);
    char *add_cmd(char *path, char *cmd);

    // Functin my_setenv && my_unsetenv:
    int new_env(i_s *info_shell, char *arg);
    int edit_env(i_s *info_shell, char **tab_cmd, int nb_arg, int pos_env);
    int cherch_arg_env(i_s *info_shell, char *cmd);

    // Function_Shell:
    int nb_arg(char *cmd);
    int cherch_nb_dir(char **dir);
    int cherch_in_env(char *env, char *cmd);
    int verif_signal(int pid);
    int verif_perm_directo(char *directo);

    // Function Write Error:
    int three_write(char *str_1, char *str_2, char *str_3);
    int double_write(char *str_1, char *str_2);
    int write_error(char const *str);
    int error_env(char *str_1, char *str_2, char *str_3);


    // Init && Free:
    int init_struct(i_s *info_shell, char **env);
    void free_struct(i_s *info_shell);


    // Color:
    #define CDEF  "\x1B[0m"

    #define CBLD  "\x1B[1m"
    #define CFNT  "\x1B[2m"
    #define CITA  "\x1B[3m"
    #define CUND  "\x1B[4m"
    #define CINV  "\x1B[7m"
    #define CTGH  "\x1B[9m"
    #define CBLK  "\x1B[30m"
    #define CRED  "\x1B[31m"
    #define CGRN  "\x1B[32m"
    #define CYEL  "\x1B[33m"
    #define CBLU  "\x1B[34m"
    #define CMAG  "\x1B[35m"
    #define CCYN  "\x1B[36m"
    #define CWHT  "\x1B[37m"


#endif /* !MY_H_ */
