/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** time
*/

#ifndef TIME_HPP_
#define TIME_HPP_
#include "../../../data.hpp"
#include "data_sfml.hpp"

namespace arcade {
    class Time {
    private:
        sf::Clock clock;
        load get_active;
        unsigned long actual_time;
    public:
        Time();
        ~Time();
        unsigned long get_time_2();
        void reset_time();
        void set_actual_time(unsigned long time);
        unsigned long get_actual_time();
        load get_time_active();
        void change_active(arcade::load load);

    };

}

#endif /* !TIME_HPP_ */
