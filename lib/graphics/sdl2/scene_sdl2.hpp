/*
** EPITECH PROJECT, 2021
** B-OOP-400-LYN-4-1-arcade-nicolas1.peter
** File description:
** scene_sdl2
*/

#ifndef SCENE_SDL2_HPP_
#define SCENE_SDL2_HPP_
#include "../../data.hpp"
#include "data_sdl.hpp"

namespace arcade {
    class Scene {
        private:
            SDL_Window *window;
            int width;
            int height;
            std::string name;
            SDL_Rect scene;

            std::map<size_t, arcade::Text*> text;
            std::map<size_t, arcade::Rect*> rect;

            arcade::pause pause;
            arcade::load load;
        public:
        Scene(arcade::Window *window, float width, float height, std::string name);
        ~Scene();
        void update_scene(arcade::Window *window);

        std::map<size_t, arcade::Text*> *get_ListText();
        std::map<size_t, arcade::Rect*> *get_ListRect();

        void add_text(Text *text);
        void add_rect(Rect *rect);
        
        void set_pause(arcade::pause pause);
        arcade::pause get_pause();

        void set_load(arcade::load load);
        arcade::load get_load();

    };
    // arcade::Scene *create_scene(arcade::Window *window, float width, float height, std::string name);
    // void pause_scene(arcade::Scene *scene, arcade::pause pause);
    // void load_scene(arcade::Scene *scene, arcade::load load);
    // void delete_scene(arcade::Scene *scene);
    // void disp_scene(arcade::Scene *scene, arcade::Window *window);
    // void set_scene_color(arcade::Scene *scene, arcade::color color);
    // void set_scene_position(arcade::Scene *scene, std::pair<float, float> pos);
    // arcade::color get_scene_color(arcade::Scene *scene);
    // std::pair <float, float> get_scene_position(arcade::Scene *scene);
}

#endif /* !SCENE_SDL2_HPP_ */
