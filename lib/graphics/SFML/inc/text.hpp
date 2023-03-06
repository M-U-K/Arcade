/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** text
*/


#ifndef TEXT_HPP_
#define TEXT_HPP_
#include "../../../data.hpp"
#include "data_sfml.hpp"

namespace arcade {
    class Text {
        public:
            enum class style {
                REGULAR = 0,
                BOLD = 1 << 0,
                ITALIC = 1 << 1,
                UNDERLINED = 1 << 2,
                STRIKETHROUGH = 1 << 3
            };

            sf::Text get_text();
            Text(std::string content = "text", unsigned int size = 30, std::string font = "../../../rsc/font/basic.ttf");
            ~Text();
            
            void set_Text(std::string content = "text");
            std::string get_Text();
            
            void set_Size(unsigned int size = 30);
            unsigned int get_Size();
            
            void set_Font(std::string font = "../../../rsc/font/basic.ttf");
            std::string get_Font();
            
            void set_Position(sf::Vector2f pos = sf::Vector2f(1, 1));
            sf::Vector2f get_Position();

            void set_Origin(sf::Vector2f origin = sf::Vector2f(1, 1));
            sf::Vector2f get_Origin();

            void set_Scale(sf::Vector2f scale = sf::Vector2f(1, 1));
            sf::Vector2f get_Scale();

            void set_Rotation(float angle = 0);
            float get_Rotation();

            void set_LineSpace(float linespace = 0);
            float get_LineSpace();

            void set_LetterSpace(float letterspace = 0);
            float get_LetterSpace();

            void set_FillColor(sf::Color color_fill = sf::Color::White);
            sf::Color get_FillColor();

            void set_OutlineColor(sf::Color color_outline = sf::Color::White);
            sf::Color get_OutlineColor();

            void set_OutlineThickness(float thickness = 0);
            float get_OutlineThickness();

            void set_pause(arcade::pause pause);
            arcade::pause get_pause();

            void set_load(arcade::load load);
            arcade::load get_load();

        private:
            std::string content;
            sf::Text text;
            sf::Font font;
            unsigned int size;
            float line_space;
            float letter_space;
            enum style style;
            sf::Color color_fill;
            sf::Color color_outline;
            sf::Vector2f pos;
            sf::Vector2f scale;
            sf::Vector2f origin;
            float angle;
            float thickness;
            arcade::pause pause;
            arcade::load load;
    };

}
#endif /* !TEXT_HPP_ */
