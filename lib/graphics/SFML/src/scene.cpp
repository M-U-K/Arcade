/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** scene
*/

#include "../inc/scene.hpp"

arcade::Scene *arcade::create_scene(arcade::Window *window, float width, float height, std::string name)
{
    arcade::Scene *scene = new arcade::Scene(window, sf::Vector2f(width, height), name);
    window->add_scene(scene);
    return scene;
}

void arcade::pause_scene(arcade::Scene *scene, pause pause)
{
    scene->set_pause(pause);
}

void arcade::load_scene(arcade::Scene *scene, load load)
{
    scene->set_load(load);
}

void arcade::delete_scene(arcade::Scene *scene)
{
    scene->~Scene();
}

std::map<size_t, arcade::Text*> *arcade::Scene::get_ListText()
{
    return &this->text;
}

std::map<size_t, arcade::Rect*> *arcade::Scene::get_ListRect()
{
    return &this->rect;
}

void arcade::Scene::add_text(class arcade::Text *text)
{
    this->text.insert(std::make_pair(this->nbr_layer_text, text));
    this->nbr_layer_text++;
}


void arcade::Scene::add_rect(class arcade::Rect *rect)
{
    this->rect.insert(std::make_pair(this->nbr_layer_text, rect));
    this->nbr_layer_rect++;
}

sf::RectangleShape *arcade::Scene::get_scene()
{
    return this->scene;
}

void arcade::disp_scene(arcade::Scene *scene, arcade::Window *window)
{    
    if (scene->get_load() == ON_L)
        scene->update_scene(window);
}


void arcade::Scene::set_Position(sf::Vector2f pos)
{
    this->scene->setPosition(pos);
}

void arcade::Scene::update_scene(arcade::Window *window)
{
        window->draw(*this->scene);
        std::map<size_t, Text*>::iterator it = this->get_ListText()->begin();
        while(it != this->get_ListText()->end()) {
            if (it->second->get_load() == ON_L)
                window->draw(it->second->get_text());
//            arcade::disp_scene(it->second);
        it++;
        }
        std::map<size_t, Rect*>::iterator itd = this->get_ListRect()->begin();
        while(itd != this->get_ListRect()->end()) {
            if (itd->second->get_load() == ON_L)
                window->draw(itd->second->get_rect());
//            arcade::disp_scene(it->second);
        itd++;
        }
}

arcade::Scene::Scene(arcade::Window *window, sf::Vector2f size, std::string name) : size(size), name(name)
{
   this->scene = new sf::RectangleShape(size);
   this->pause = ON_P;
   this->load = ON_L;
}
arcade::Scene::~Scene()
{
}

void arcade::Scene::set_FillColor(sf::Color color)
{
    this->scene->setFillColor(color);
}

void arcade::Scene::set_OutlineColor(sf::Color color)
{
    this->scene->setOutlineColor(color);
}

void arcade::Scene::set_pause(arcade::pause pause)
{
    this->pause = pause;
}

arcade::pause arcade::Scene::get_pause()
{
    return this->pause;
}

void arcade::Scene::set_load(arcade::load load)
{
    this->load = load;
}

arcade::load arcade::Scene::get_load()
{
    return this->load;
}

void arcade::set_scene_color(arcade::Scene *scene, arcade::color color)
{
    if (color == arcade::WHITE)
        scene->set_FillColor(sf::Color::White);
    else if (color == arcade::BLACK)
        scene->set_FillColor(sf::Color::Black);
    else if (color == arcade::BLUE)
        scene->set_FillColor(sf::Color::Blue);
    else if (color == arcade::RED)
        scene->set_FillColor(sf::Color::Red);
    else if (color == arcade::GREEN)
        scene->set_FillColor(sf::Color::Green);
    else if (color == arcade::PURPLE)
        scene->set_FillColor(sf::Color::Yellow);
    else 
        scene->set_FillColor(sf::Color::Transparent);
}

void arcade::set_scene_position(arcade::Scene *scene, std::pair<float, float> pos)
{
    scene->set_Position(sf::Vector2f(pos.first, pos.second));
}

arcade::color get_scene_color(arcade::Scene *scene)
{
    sf::Color color = scene->get_FillColor();
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

std::pair <float, float> arcade::get_scene_position(arcade::Scene *scene)
{
    std::pair <float, float> pos;
    pos.first = scene->get_Position().x;
    pos.second = scene->get_Position().y;
    return (pos);
}

sf::Color arcade::Scene::get_FillColor()
{
    return this->scene->getFillColor();
}

sf::Vector2f arcade::Scene::get_Position()
{
    return this->scene->getPosition();
}