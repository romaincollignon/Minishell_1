/*
** EPITECH PROJECT, 2022
** shell.c
** File description:
** Function : shell
*/

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <ncurses.h>

#include "../../include/struct_all.h"
#include "../../include/my.h"

char *one_word(char *cmd)
{
    int tmp = 0;
    while (cmd[tmp] != ' ' && cmd[tmp] != '\0' && cmd != NULL)
        tmp++;
    char *result = malloc(sizeof(char) * (tmp + 2));
    for (int n = 0; n <= tmp; n++)
        result[n] = cmd[n];
    result[tmp] = ' ';
    result[tmp + 1] = '\0';
    return result;
}

void deb_cleaner(char *cmd)
{
    for (int n = 0; cmd[n] != '\0'; n++) {
        if (cmd[n] == '\t')
            cmd[n] = ' ';
        if (cmd[n] == '\n')
            cmd[n] = '\0';
    }
    while (cmd[0] == ' ') {
        for (int n = 0; cmd[n] != '\0'; n++)
            cmd[n] = cmd[n + 1];
    }
    if (cmd[0] == '\0')
        return;
    while (cmd[(my_strlen(cmd) - 1)] != '\0' &&
        cmd[(my_strlen(cmd) - 1)] == ' ') {
        cmd[(my_strlen(cmd) - 1)] = '\0';
    }
}

void my_cleaner(char *cmd)
{
    deb_cleaner(cmd);
    int i = 0;
    int j = 0;
    int len = my_strlen(cmd);
    char *temp = malloc(sizeof(char) * (len + 2));
    if (cmd[0] == '\0') {
        free(temp);
        return;
    }
    for (i = 0; i < len; i++) {
        if (cmd[i] != ' ' || (cmd[i] == ' ' && cmd[i + 1] != ' ')) {
        temp[j++] = cmd[i];
        }
    }
    temp[j] = '\0';
    my_strcpy(cmd, temp);
    free(temp);
}

int start_cmd(i_s *info_shell, char *cmd)
{
    my_cleaner(cmd);
    if (info_shell->stop == 1 || cmd[0] == '\0')
        return 0;
    char *one_arg = one_word(cmd);
    int (*funct[7])(i_s *, char *) = {&my_cd, &my_env, &my_exit, &my_setenv,
    &my_unsetenv, &my_pwd, &my_echo};
    char *flags[7] = {"cd ", "env ", "exit ", "setenv ", "unsetenv ", "pwd ",
    "echo "};
    for (int n = 0; n < 7; n++) {
        if (my_strcmp(flags[n], one_arg) == 0)
            return funct[n](info_shell, cmd);
    }
    if (info_shell->stop == 1)
        return 0;
    one_arg[(my_strlen(one_arg) - 1)] = '\0';
    if (my_execute(info_shell, cmd) == 1)
        return 0;
    if (my_other(info_shell, cmd, one_arg) == -1)
        double_write(one_arg, ": Command not found.\n");
    return 0;
}
