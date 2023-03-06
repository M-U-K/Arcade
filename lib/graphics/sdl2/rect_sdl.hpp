/*
** EPITECH PROJECT, 2021
** B-OOP-400-LYN-4-1-arcade-nicolas1.peter
** File description:
** rect_sdl
*/

#ifndef RECT_SDL_HPP_
#define RECT_SDL_HPP_

#include "../../data.hpp"
#include "data_sdl.hpp"


namespace arcade {
    class Rect {
        private:
            SDL_Rect *rect;
            arcade::load load;
            std::pair<float, float> pos;

        public:
            Rect(arcade::Scene *scene, std::pair<float, float> pos);
            ~Rect();

            void set_load(arcade::load load);
            void set_rect_position(std::pair<float, float> pos);
            void set_rect_color(sf::Color color);
            void set_rect_size(std::pair<float, float> pos);

            SDL_Rect get_rect();
            sf::Vector2f get_rect_position();
            sf::Color get_rect_color();
            sf::Vector2f get_rect_size();
            arcade::load get_load();
    };
}

#endif /* !RECT_SDL_HPP_ */
