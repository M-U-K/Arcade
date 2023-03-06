/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** main
*/

#include "../../data.hpp"
#include "data_sdl.hpp"

int main()
{
    arcade::Window *window;
    //arcade::Scene *scene;

    window = arcade::create_window(800, 600, "bite");
    //scene = arcade::create_scene(window, 800, 600, "caca");
    
    printf("\n---CREATED---\n");
    arcade::disp_window(window);

    arcade::delete_window(window);
}
