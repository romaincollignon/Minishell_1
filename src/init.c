/*
** EPITECH PROJECT, 2022
** init.c
** File description:
** Function : init_all
*/

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <signal.h>

#include "../include/struct_all.h"
#include "my.h"

int init_struct(i_s *info_shell, char **env)
{
    int size = 0;
    for (; env[size] != NULL; size++);
    info_shell->env = malloc(sizeof(char *) * (size + 5));
    for (int n = 0; n < size; n++) {
        info_shell->env[n] = malloc(sizeof(char) * my_strlen(env[n]));
        info_shell->env[n] = env[n];
    }
    info_shell->stop = 0;
    info_shell->restart = 0;
    info_shell->dir = malloc(sizeof(char) * 256);
    getcwd(info_shell->dir, 256);
    info_shell->back_dir = malloc(sizeof(char) * 257);
    info_shell->back_dir[0] = 'n';
    info_shell->back_dir[1] = 'o';
    info_shell->back_dir[2] = '\0';
    info_shell->size_env = size - 1;
    info_shell->env[size] = NULL;
    return 0;
}
