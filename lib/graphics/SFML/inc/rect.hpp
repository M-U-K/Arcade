/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** rect
*/

#ifndef RECT_HPP_
#define RECT_HPP_
#include "../../../data.hpp"
#include "data_sfml.hpp"


namespace arcade {
    class Rect {
        private:
            sf::RectangleShape *rect;
            arcade::load load;
        public:
            Rect(arcade::Scene *scene, sf::Vector2f size);
            ~Rect();
            void set_load(arcade::load load);
            void set_rect_position(sf::Vector2f pos);
            void set_rect_color(sf::Color color);
            void set_rect_size(sf::Vector2f size);
            sf::RectangleShape get_rect();
            sf::Vector2f get_rect_position();
            sf::Color get_rect_color();
            sf::Vector2f get_rect_size();
            arcade::load get_load();
    };

}


#endif /* !RECT_HPP_ */
