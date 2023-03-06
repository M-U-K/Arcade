/*
** EPITECH PROJECT, 2021
** B-OOP-400-LYN-4-1-arcade-nicolas1.peter
** File description:
** scene_sdl2
*/
#include "scene_sdl2.hpp"


arcade::Scene::Scene(arcade::Window *window, float width, float height, std::string name)
{
    this->name = name;
    this->height = height;
    this->width = width;
    this->pause = ON_P;
    this->load = ON_L;
    this->scene.w = width;
    this->scene.h = height;
}

arcade::Scene::~Scene()
{
}

arcade::Scene *arcade::create_scene(arcade::Window *window, float width, float height, std::string name)
{
    arcade::Scene *scene = new arcade::Scene(window, width, height, name);
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

void arcade::Scene::set_load(arcade::load load)
{
    this->load = load;
}

void arcade::Scene::set_pause(arcade::pause pause)
{
    this->pause = pause;
}

arcade::pause arcade::Scene::get_pause()
{
    return this->pause;
}

std::map<size_t, arcade::Text*> *arcade::Scene::get_ListText()
{
    return &this->text;
}

std::map<size_t, arcade::Rect*> *arcade::Scene::get_ListRect()
{
    return &this->rect;
}

void arcade::disp_scene(arcade::Scene *scene, arcade::Window *window)
{    
    if (scene->get_load() == ON_L)
        scene->update_scene(window);
}