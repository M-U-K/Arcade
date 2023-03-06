/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** text
*/

#include "../inc/text.hpp"

arcade::Text *arcade::create_text(arcade::Scene *scene, std::string content, unsigned int size, std::string font)
{
    arcade::Text *text = new arcade::Text(content, size, font);
    scene->add_text(text);
    return text;
}

void arcade::delete_text(arcade::Text *text)
{
    text->~Text();
}

void arcade::pause_text(arcade::Text *text, arcade::pause pause)
{
    text->set_pause(pause);
}

void arcade::load_text(arcade::Text *text, arcade::load load)
{
    text->set_load(load);
}

void arcade::Text::set_pause(arcade::pause pause)
{
    this->pause = pause;
}

arcade::pause arcade::Text::get_pause()
{
    return (this->pause);
}

void arcade::Text::set_load(arcade::load load)
{
    this->load = load;
}

arcade::load arcade::Text::get_load()
{
    return (this->load);
}

arcade::Text::Text(std::string content, unsigned int size, std::string font_name) : content(content), size(size)
{
    this->font.loadFromFile(font_name); 
    this->text = sf::Text(content, this->font, size);
    this->pause = ON_P;
    this->load = ON_L;
}


sf::Text arcade::Text::get_text()
{
    return (this->text);   
}

arcade::Text::~Text()
{

}


void arcade::Text::set_Text(std::string content)
{
    this->text.setString(content);
}

void arcade::Text::set_Position(sf::Vector2f pos)
{
    this->text.setPosition(pos);
}

void arcade::Text::set_Rotation(float angle)
{
    this->text.setRotation(angle);
}

void arcade::Text::set_Scale(sf::Vector2f pos)
{
    this->text.setScale(pos);
}

void arcade::Text::set_FillColor(sf::Color color)
{
    this->text.setFillColor(color);
}

void arcade::Text::set_Font(std::string font_path)
{
    this->font.loadFromFile(font_path); 
    this->text.setFont(this->font);
}


void arcade::set_text_content(arcade::Text *text, std::string content)
{
    text->set_Text(content);
}

void arcade::set_text_position(arcade::Text *text, std::pair<float, float> pos)
{
    text->set_Position(sf::Vector2f(pos.first, pos.second));
}

void arcade::set_text_rotation(arcade::Text *text, float angle)
{
    text->set_Rotation(angle);
}

void arcade::set_text_scale(arcade::Text *text, std::pair<float, float> pos)
{
    text->set_Scale(sf::Vector2f(pos.first, pos.second));
}

void arcade::set_text_color(arcade::Text *text, arcade::color color)
{
    if (color == arcade::WHITE)
        text->set_FillColor(sf::Color::White);
    if (color == arcade::BLACK)
        text->set_FillColor(sf::Color::Black);
    if (color == arcade::BLUE)
        text->set_FillColor(sf::Color::Blue);
    if (color == arcade::RED)
        text->set_FillColor(sf::Color::Red);
    if (color == arcade::GREEN)
        text->set_FillColor(sf::Color::Green);
    if (color == arcade::PURPLE)
        text->set_FillColor(sf::Color::Magenta);

}

void arcade::set_text_font(arcade::Text *text, std::string font_path)
{
    text->set_Font(font_path);
}


std::string arcade::Text::get_Text()
{
    return this->text.getString();
}

sf::Vector2f arcade::Text::get_Position()
{
    return this->text.getPosition();
}

float arcade::Text::get_Rotation()
{
    return this->text.getRotation();
}

sf::Vector2f arcade::Text::get_Scale()
{
    return this->text.getScale();
}

sf::Color arcade::Text::get_FillColor()
{
    return this->text.getFillColor();
}


std::string arcade::get_text_content(arcade::Text *text)
{
    return text->get_Text();
}

std::pair <float, float> arcade::get_text_position(arcade::Text *text)
{
    std::pair <float, float> pos;
    pos.first = text->get_Position().x;
    pos.second = text->get_Position().y;
    return (pos);
}

float arcade::get_text_rotation(arcade::Text *text)
{
    return text->get_Rotation();
}

std::pair <float, float> arcade::get_text_scale(arcade::Text *text)
{
    std::pair <float, float> pos;
    pos.first = text->get_Scale().x;
    pos.second = text->get_Scale().y;
    return (pos);
}

arcade::color arcade::get_text_color(arcade::Text *text)
{
    sf::Color color = text->get_FillColor();
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

