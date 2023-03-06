/*
** EPITECH PROJECT, 2021
** B-OOP-400-LYN-4-1-arcade-nicolas1.peter
** File description:
** window_sld
*/

#ifndef WINDOW_SLD_HPP_
#define WINDOW_SLD_HPP_

#include "../../data.hpp"
#include "data_sdl.hpp"

namespace arcade {
    class Window {
        private:
            SDL_Window *window;
            SDL_Surface *window_surface;
            std::string title;
            bool window_is_open;
            int width;
            int height;
            int nbr_layer;
            int nbr_time;
            std::map<size_t, arcade::Scene*> scene;
            std::map<size_t, arcade::Time*> time;

        public:
            Window(int width = 800, int height = 600, std::string title = "title");
            ~Window();

            void update_window();
            SDL_Window *get_window();

            void add_scene(Scene *scene);
            void add_time(Time *time);

            std::map<size_t, arcade::Time*> *get_ListTime();
            std::map<size_t, arcade::Scene*> *get_ListScene();

            arcade::load check_window_isopen();
            bool check_key(arcade::key key);

            
    };
    // arcade::Window *create_window(unsigned int width, unsigned int height, std::string title);
    // void disp_window(arcade::Window *window);
    // void delete_window(arcade::Window *window);
    // arcade::load window_isopen(arcade::Window *window);
    // bool check_key(arcade::Window *window, arcade::key key);
}

#endif /* !WINDOW_SLD_HPP_ */