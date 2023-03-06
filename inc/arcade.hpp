/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** arcade
*/

#ifndef ARCADE_HPP_
#define ARCADE_HPP_
#include <dlfcn.h>


namespace arcade {
    void *lib_graph;
    void *lib_game;
    int state;
    arcade::Window *window;
    arcade::Window *window2;
    std::string name_lib_graph;
    std::string name_lib_game;
    std::pair<std::string, std::string> name;
    void *load_lib_graph(std::string);
    void *load_lib_game(std::string);
    void update_lib();
}

#endif /* !ARCADE_HPP_ */
