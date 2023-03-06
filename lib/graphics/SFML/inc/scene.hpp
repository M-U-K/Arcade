/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** scene
*/


#ifndef SCENE_HPP_
#define SCENE_HPP_
#include "../../../data.hpp"
#include "data_sfml.hpp"

namespace arcade {
//    class Window;

    class Scene {
    private:
        sf::Vector2f size;
        unsigned int layer;
        std::string name;
        sf::RectangleShape *scene;
        arcade::pause pause;
        arcade::load load;
//        sf::RenderWindow *window;
        std::map<size_t, arcade::Text*> text;
        std::map<size_t, arcade::Rect*> rect;
        unsigned int nbr_layer_text;
        unsigned int nbr_layer_rect;
    public:
        void add_text(Text *text);
        void add_rect(Rect *rect);
        void update_scene(arcade::Window *window);
        std::map<size_t, arcade::Text*> *get_ListText();
        std::map<size_t, arcade::Rect*> *get_ListRect();

        sf::RectangleShape *get_scene();
        Scene(arcade::Window *window, sf::Vector2f size, std::string name);
        ~Scene();

        void set_pause(arcade::pause pause);
        arcade::pause get_pause();

        void set_load(arcade::load load);
        arcade::load get_load();

        void set_FillColor(sf::Color color = sf::Color::Transparent);
        sf::Color get_FillColor();

        void set_OutlineColor(sf::Color color = sf::Color::Transparent);
        sf::Color get_OutlineColor();

        void set_Thickness(float thickness = 0);
        float get_Thickness();

        void set_Position(sf::Vector2f pos = sf::Vector2f(1, 1));
        sf::Vector2f get_Position();

    };



}
//#include "window.hpp"

#endif /* !SCENE_HPP_ */
