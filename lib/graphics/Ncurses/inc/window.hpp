/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** window
*/

#ifndef WINDOW_HPP_
#define WINDOW_HPP_
#include "../../../data.hpp"
#include "data_ncurses.hpp"

namespace arcade {
    class Window {
    private:
        WINDOW *window;
        char our_char;
        bool stop;
        std::map<size_t, arcade::Scene*> scene;
        std::map<size_t, arcade::Time*> time;
        unsigned int nbr_scene;
        unsigned int nbr_time;
    public:
        void add_time(Time *time);
        void add_scene(Scene *scene);
        Window(unsigned int width, unsigned int height);
        ~Window();
        void update_window();
        arcade::load check_window_isopen();
        std::map<size_t, arcade::Scene*> *get_ListScene();

    };


}
#endif /* !WINDOW_HPP_ */
