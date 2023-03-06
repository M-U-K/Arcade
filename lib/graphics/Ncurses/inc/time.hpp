/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** time
*/

#ifndef TIME_HPP_
#define TIME_HPP_
#include "../../../data.hpp"
#include "data_ncurses.hpp"

namespace arcade {
    class Time {
        private:
            clock_t actual_clock;
            clock_t diff_clock;
            clock_t past_clock;
            unsigned long actual_time;
        public:
            Time();
            ~Time();
            unsigned long get_actual_time();
            void reset_time();
    };

}

#endif /* !TIME_HPP_ */
