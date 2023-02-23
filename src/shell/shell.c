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
#include <signal.h>

#include "../../include/struct_all.h"
#include "my.h"

void print_deb(void)
{
    if (isatty(0) == 1) {
        mini_printf(CBLD CCYN"• ");
        mini_printf(CRED"My_Shell "CDEF);
        mini_printf(CCYN CBLD"➜ "CDEF);
    }
}

void sigint_signal_gesture(int sig)
{
    if (sig == SIGINT) {
        mini_printf("\n");
        print_deb();
    }
}

int boucle_shell(i_s *info_shell, int error)
{
    print_deb();
    signal(SIGINT, sigint_signal_gesture);
    char *cmd = get_cmd(info_shell);
    if (info_shell->stop == 1)
        return 0;
    error = start_cmd(info_shell, cmd);
    error_shell(info_shell, error);
    return 0;
}

int shell(i_s *info_shell)
{
    int error = 0;
    while (info_shell->stop == 0) {
        while (info_shell->restart == 0 && info_shell->stop == 0) {
            error = boucle_shell(info_shell, error);
        }
        info_shell->restart = 0;
    } return 0;
}
