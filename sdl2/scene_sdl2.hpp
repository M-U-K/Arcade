/*
** EPITECH PROJECT, 2021
** B-OOP-400-LYN-4-1-arcade-nicolas1.peter
** File description:
** scene_sdl2
*/

#ifndef SCENE_SDL2_HPP_
#define SCENE_SDL2_HPP_
#include <SDL2/SDL.h>
#include <iostream>
#include <vector>

namespace arcade {
    class Scene {
        private:
            SDL_Window *window;
        public:

    };
}

    arcade::Scene *create_scene(arcade::Window *window, float width, float height, std::string name);
    void pause_scene(arcade::Scene *scene, arcade::pause pause);
    void load_scene(arcade::Scene *scene, arcade::load load);
    void delete_scene(arcade::Scene *scene);
    void disp_scene(arcade::Scene *scene, arcade::Window *window);
    
    void set_scene_color(arcade::Scene *scene, arcade::color color);
    void set_scene_position(arcade::Scene *scene, std::pair<float, float> pos);
    arcade::color get_scene_color(arcade::Scene *scene);
    std::pair <float, float> get_scene_position(arcade::Scene *scene);

#endif /* !SCENE_SDL2_HPP_ */
