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

unsigned long arcade::get_time(arcade::Time *time)
{
    time->change_active(arcade::ON_L);
    return time->get_actual_time();
}

void arcade::Time::change_active(arcade::load load)
{
    this->get_active = load;
}

void arcade::Time::set_actual_time(unsigned long time)
{
    this->actual_time = time;
}

unsigned long arcade::Time::get_actual_time()
{
    return this->actual_time;
}

arcade::load arcade::Time::get_time_active()
{
    return this->get_active;
}

unsigned long  arcade::Time::get_time_2()
{
    sf::Time take_time = this->clock.getElapsedTime();
    return take_time.asMilliseconds();
}

arcade::Time::Time()
{
    this->clock;
}

void arcade::Time::reset_time()
{
    this->clock.restart();
}

void arcade::reset_time(arcade::Time *time)
{
    time->reset_time();
}