/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** time
*/

#include "../inc/time.hpp"

arcade::Time *arcade::create_time(arcade::Window *window)
{
    arcade::Time *time = new arcade::Time();
    window->add_time(time);
    return time;
}

arcade::Time::Time()
{   
    this->actual_clock = std::clock();
}

unsigned long arcade::get_time(arcade::Time *time)
{
    return time->get_actual_time();
}

unsigned long arcade::Time::get_actual_time()
{
    this->past_clock = std::clock();

    this->diff_clock += this->past_clock - this->actual_clock;
    this->actual_clock = std::clock();
    
    return (this->diff_clock/100);
}

void arcade::reset_time(arcade::Time *time)
{
    time->reset_time();
}

void arcade::Time::reset_time()
{
    this->actual_clock = std::clock();
    this->past_clock = std::clock();
        this->diff_clock = 0;
}
