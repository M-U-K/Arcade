/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** window
*/

#ifndef WINDOW_HPP_
#define WINDOW_HPP_
#include "../../../data.hpp"
#include "data_sfml.hpp"

namespace arcade {
    class Window {
    private:
        sf::RenderWindow window;
        sf::VideoMode size;
        std::string title;
        std::map<size_t, arcade::Scene*> scene;
        std::map<size_t, arcade::Time*> time;
        unsigned int nbr_layer;
        unsigned int nbr_time;
    public:
        void add_time(Time *time);
        void add_scene(Scene *scene);
        void draw(const sf::Drawable &drawable, const sf::RenderStates &states = sf::RenderStates::Default);
        Window(sf::VideoMode size = sf::VideoMode(800, 600), std::string tilte = "title");
        void update_window();
        std::map<size_t, arcade::Time*> *get_ListTime();
        std::map<size_t, arcade::Scene*> *get_ListScene();
        ~Window();
        sf::RenderWindow *get_window();
        arcade::load check_window_isopen();
        bool check_key(arcade::key key);
    };


}
#endif /* !WINDOW_HPP_ */
