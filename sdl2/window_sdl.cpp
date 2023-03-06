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
    this->window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_RESIZABLE);
}

arcade::Window::~Window()
{
    
}

void arcade::delete_window(arcade::Window *window)
{
    window->~Window();
}

void arcade::disp_window(arcade::Window *window)
{
    window->update_window();
}

void arcade::Window::update_window()
{
    SDL_Event event;
    
    bool window_is_open = true;
    while (window_is_open == true) {
        while (SDL_PollEvent(&event)) {
            if(event.type == SDL_QUIT)
            window_is_open = false;
        }
        SDL_UpdateWindowSurface(this->window);
    }
}