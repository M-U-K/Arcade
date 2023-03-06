/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** rect
*/

#include "../inc/rect.hpp"


arcade::Rect::Rect(arcade::Scene *scene, sf::Vector2f size)
{
    this->rect = new sf::RectangleShape(size);
    this->load = ON_L;
}

arcade::Rect::~Rect()
{

}

arcade::load arcade::Rect::get_load()
{
    return (this->load);
}

sf::RectangleShape arcade::Rect::get_rect()
{
    return *this->rect;
}

void arcade::load_rect(arcade::Rect *rect, arcade::load load)
{
    rect->set_load(load);
}

void arcade::Rect::set_load(arcade::load load)
{
    this->load = load;
}


arcade::Rect *arcade::create_rect(arcade::Scene *scene, float width, float height)
{
    arcade::Rect *rect = new arcade::Rect(scene, sf::Vector2f(width, height));
    scene->add_rect(rect);
    return rect;
}

void arcade::delete_rect(arcade::Rect *rect)
{
    rect->~Rect();
}

void arcade::Rect::set_rect_position(sf::Vector2f pos)
{
    this->rect->setPosition(pos);
}

void arcade::Rect::set_rect_color(sf::Color color)
{
    this->rect->setFillColor(color);
}

void arcade::Rect::set_rect_size(sf::Vector2f size)
{
    this->rect->setSize(size);
}

sf::Vector2f arcade::Rect::get_rect_position()
{
    return this->rect->getPosition();
}

sf::Vector2f arcade::Rect::get_rect_size()
{
    return this->rect->getSize();
}

sf::Color arcade::Rect::get_rect_color()
{
    return this->rect->getFillColor();
}

void arcade::set_rect_position(arcade::Rect *rect, std::pair<float, float> pos)
{
    rect->set_rect_position(sf::Vector2f(pos.first, pos.second));
}

void arcade::set_rect_color(arcade::Rect *rect, arcade::color color)
{
    if (color == arcade::WHITE)
        rect->set_rect_color(sf::Color::White);
    else if (color == arcade::BLACK)
        rect->set_rect_color(sf::Color::Black);
    else if (color == arcade::BLUE)
        rect->set_rect_color(sf::Color::Blue);
    else if (color == arcade::RED)
        rect->set_rect_color(sf::Color::Red);
    else if (color == arcade::GREEN)
        rect->set_rect_color(sf::Color::Green);
    else if (color == arcade::PURPLE)
        rect->set_rect_color(sf::Color::Magenta);
    else 
        rect->set_rect_color(sf::Color::Transparent);
}

void arcade::set_rect_size(arcade::Rect *rect, std::pair <float, float> size)
{
    rect->set_rect_size(sf::Vector2f(size.first, size.second));
}

std::pair <float, float> arcade::get_rect_position(arcade::Rect *rect)
{
    std::pair <float, float> pos;
    pos.first = rect->get_rect_position().x;
    pos.second = rect->get_rect_position().y;
    return (pos);
}

std::pair <float, float> arcade::get_rect_size(arcade::Rect *rect)
{
    std::pair <float, float> pos;
    pos.first = rect->get_rect_size().x;
    pos.second = rect->get_rect_size().y;
    return (pos);
}

arcade::color get_rect_color(arcade::Rect *scene)
{
    sf::Color color = scene->get_rect_color();
    if (color == sf::Color::White)
        return (arcade::WHITE);
    if (color == sf::Color::Black)
        return (arcade::BLACK);
    if (color == sf::Color::Blue)
        return (arcade::BLUE);
    if (color == sf::Color::Red)
        return (arcade::RED);
    if (color == sf::Color::Green)
        return (arcade::GREEN);
    if (color == sf::Color::Magenta)
        return (arcade::PURPLE);
    return (arcade::WHITE);
}