/*
** EPITECH PROJECT, 2022
** get_cmd.c
** File description:
** Function : get_cmd
*/

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <ncurses.h>

#include "../../include/struct_all.h"
#include "my.h"

char *get_cmd(i_s *info_shell)
{
    size_t line = 0;
    char *buffer = NULL;
    int error = 0;
    error = getline(&buffer, &line, stdin);
    if (error == -1) {
        info_shell->stop = 1;
        info_shell->restart = 1;
        return 0;
    }
    return buffer;
}
