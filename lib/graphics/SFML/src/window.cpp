/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** window
*/

#include "../inc/window.hpp"



arcade::Window *arcade::create_window(unsigned int width, unsigned int height, std::string title)
{
    arcade::Window *window = new arcade::Window(sf::VideoMode(width, height), title);
    return window;
}

void arcade::disp_window(arcade::Window *window)
{
    window->update_window();
}

void arcade::delete_window(arcade::Window *window)
{
  window->~Window();
}


arcade::Window::Window(sf::VideoMode size, std::string title) : size(size), title(title)
{
    this->window.create(size, title);
    this->nbr_layer = 0;
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

sf::RenderWindow *arcade::Window::get_window()
{
    return &this->window;
}
std::map<size_t, arcade::Scene*> *arcade::Window::get_ListScene()
{
    return &this->scene;
}

std::map<size_t, arcade::Time*> *arcade::Window::get_ListTime()
{
    return &this->time;
}

void arcade::Window::draw(const sf::Drawable &drawable, const sf::RenderStates &states)
{
    this->window.draw(drawable, states);
}

arcade::load arcade::Window::check_window_isopen()
{
    return static_cast<arcade::load>(this->window.isOpen());
}

arcade::load arcade::window_isopen(arcade::Window *window)
{
    return window->check_window_isopen();
}

void arcade::Window::update_window()
{
        sf::Event event;
        while (this->window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                this->window.close();
            }
        }
        std::map<size_t, Time*>::iterator itt = this->get_ListTime()->begin();
        while(itt != this->get_ListTime()->end()) {
            if (itt->second->get_time_active() == ON_L) {
                itt->second->set_actual_time(itt->second->get_time_2());
            }
            itt++;
        }
        this->window.clear(sf::Color::Black);
        std::map<size_t, Scene*>::iterator it = this->get_ListScene()->begin();
        while(it != this->get_ListScene()->end()) {
            arcade::disp_scene(it->second, this);
            it++;
        }
        this->window.display();        
}

bool arcade::Window::check_key(arcade::key key)
{
    if (key == arcade::A && sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        return (1);
    if (key == arcade::B && sf::Keyboard::isKeyPressed(sf::Keyboard::B))
        return (1);
    if (key == arcade::C && sf::Keyboard::isKeyPressed(sf::Keyboard::C))
        return (1);
    if (key == arcade::D && sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        return (1);
    if (key == arcade::E && sf::Keyboard::isKeyPressed(sf::Keyboard::E))
        return (1);
    if (key == arcade::D && sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        return (1);
    if (key == arcade::F && sf::Keyboard::isKeyPressed(sf::Keyboard::F))
        return (1);
    if (key == arcade::G && sf::Keyboard::isKeyPressed(sf::Keyboard::G))
        return (1);
    if (key == arcade::H && sf::Keyboard::isKeyPressed(sf::Keyboard::H))
        return (1);
    if (key == arcade::I && sf::Keyboard::isKeyPressed(sf::Keyboard::I))
        return (1);
    if (key == arcade::J && sf::Keyboard::isKeyPressed(sf::Keyboard::J))
        return (1);
    if (key == arcade::K && sf::Keyboard::isKeyPressed(sf::Keyboard::K))
        return (1);
    if (key == arcade::L && sf::Keyboard::isKeyPressed(sf::Keyboard::L))
        return (1);
    if (key == arcade::M && sf::Keyboard::isKeyPressed(sf::Keyboard::M))
        return (1);
    if (key == arcade::N && sf::Keyboard::isKeyPressed(sf::Keyboard::N))
        return (1);
    if (key == arcade::O && sf::Keyboard::isKeyPressed(sf::Keyboard::O))
        return (1);
    if (key == arcade::P && sf::Keyboard::isKeyPressed(sf::Keyboard::P))
        return (1);
    if (key == arcade::Q && sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
        return (1);
    if (key == arcade::R && sf::Keyboard::isKeyPressed(sf::Keyboard::R))
        return (1);
    if (key == arcade::S && sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        return (1);
    if (key == arcade::T && sf::Keyboard::isKeyPressed(sf::Keyboard::T))
        return (1);
    if (key == arcade::U && sf::Keyboard::isKeyPressed(sf::Keyboard::U))
        return (1);
    if (key == arcade::V && sf::Keyboard::isKeyPressed(sf::Keyboard::V))
        return (1);
    if (key == arcade::W && sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        return (1);
    if (key == arcade::X && sf::Keyboard::isKeyPressed(sf::Keyboard::X))
        return (1);
    if (key == arcade::Y && sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
        return (1);
    if (key == arcade::Z && sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
        return (1);
    if (key == arcade::SPACE && sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
        return (1);
    if (key == arcade::ECHAP && sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
        return (1);
    return (0);


}

bool arcade::check_key(arcade::Window *window, arcade::key key)
{
    return (window->check_key(key));
}
