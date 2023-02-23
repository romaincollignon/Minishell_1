/*
** EPITECH PROJECT, 2022
** struct_menu.h
** File description:
** struct for all game
*/

#ifndef STRUCT_MENU_H
    #define STRUCT_MENU_H

    typedef struct info_shell {
        char **env;
        int size_env;
        char *tmp_env;
        int tmp_pos_env;
        char *dir;
        char *back_dir;
        int stop;
        int restart;
    } i_s;

#endif /* !STRUCT_MENU_H */
