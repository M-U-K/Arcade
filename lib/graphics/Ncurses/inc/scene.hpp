/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** scene
*/


#ifndef SCENE_HPP_
#define SCENE_HPP_
#include "../../../data.hpp"
#include "data_ncurses.hpp"

namespace arcade {
//    class Window;

    class Scene {
    private:
        WINDOW *scene;
        arcade::pause pause;
        arcade::load load;
    public:
        Scene(arcade::Window *window, float, float, std::string name);
        ~Scene();
        WINDOW *get_scene();
    };



}
//#include "window.hpp"

#endif /* !SCENE_HPP_ */
