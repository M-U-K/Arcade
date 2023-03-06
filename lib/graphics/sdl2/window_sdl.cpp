/*
** EPITECH PROJECT, 2021
** B-OOP-400-LYN-4-1-arcade-nicolas1.peter
** File description:
** window_sdl
*/

#include "window_sld.hpp"

arcade::Window *arcade::create_window(unsigned int width, unsigned int height, std::string title)
{
    arcade::Window *window = new arcade::Window(width, height, title);
    return window;
}

arcade::Window::Window(int width, int height, std::string title)
{
    this->title = title;
    this->height = height;
    this->width = width;
    this->nbr_layer = 0;
    this->window_is_open = true;
    this->window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_RESIZABLE);
}

arcade::Window::~Window()
{
    
}

void arcade::Window::add_scene(class arcade::Scene *scene)
{
    this->scene.insert(std::make_pair(this->nbr_layer, scene));
    this->nbr_layer++;
}

void arcade::Window::add_time(class arcade::Time *time)
{
    this->time.insert(std::make_pair(this->nbr_layer, time));
    this->nbr_time++;
}

void arcade::delete_window(arcade::Window *window)
{
    window->~Window();
}

void arcade::disp_window(arcade::Window *window)
{
    window->update_window();
}

SDL_Window *arcade::Window::get_window()
{
    return (this->window);
}

std::map<size_t, arcade::Scene*> *arcade::Window::get_ListScene()
{
    return &this->scene;
}

std::map<size_t, arcade::Time*> *arcade::Window::get_ListTime()
{
    return &this->time;
}

arcade::load arcade::Window::check_window_isopen()
{
    return static_cast<arcade::load>(this->window_is_open);
}

arcade::load arcade::window_isopen(arcade::Window *window)
{
    return window->check_window_isopen();
}

void arcade::Window::update_window()
{
    SDL_Event event;

    while (window_is_open == true) {
        while (SDL_PollEvent(&event)) {
            if(event.type == SDL_QUIT)
            this->window_is_open = false;
        }
        SDL_UpdateWindowSurface(this->window);
    }
}