/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** start
*/

#ifndef START_HPP_
#define START_HPP_
#include "../../../data.hpp"

namespace arcade {
    class Start {
        private:
            std::vector<std::string> list_lib_game;
            std::vector<std::string> list_lib_graphic;
        public:
            enum Map {
                GAME = 0,
                GRAPHIC = 1
            };
            std::vector<std::string> get_map(Map map);

    };
//    std::pair<std::pair<bool, arcade::Window *>, std::pair<std::string, std::string>> save;
    extern "C" { arcade::Window *make_window(); };
    extern "C" { std::pair<std::pair<int, arcade::Window *>, std::pair<std::string, std::string>> start(std::string, std::string, arcade::Window *, int); };
}

#endif /* !START_HPP_ */
