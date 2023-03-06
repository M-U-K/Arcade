/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** scene
*/

#include "../inc/scene.hpp"

arcade::Scene *arcade::create_scene(arcade::Window *window, float width, float height, std::string name)
{
    arcade::Scene *scene = new arcade::Scene(window, width, height, name);
    window->add_scene(scene);
    return scene;
}

WINDOW *arcade::Scene::get_scene()
{
    return this->scene;
}

arcade::Scene::Scene(arcade::Window *window, float width, float height, std::string name)
{
    this->scene = newwin(height/20, width/10, 1, 1);
    box( this->scene, 0, 0 );
    wrefresh(this->scene);

    this->pause = ON_P;
    this->load = ON_L;
}

void arcade::pause_scene(arcade::Scene *scene, arcade::pause pause)
{

}

void arcade::load_scene(arcade::Scene *scene, arcade::load load)
{

}

void arcade::delete_scene(arcade::Scene *scene)
{

}

arcade::Scene::~Scene()
{
}

void arcade::disp_scene(arcade::Scene *scene, arcade::Window *window)
{

}

void arcade::set_scene_color(arcade::Scene *scene, arcade::color color)
{

}

void arcade::set_scene_position(arcade::Scene *scene, std::pair<float, float> pos)
{

}

arcade::color arcade::get_scene_color(arcade::Scene *scene)
{

}

std::pair <float, float> arcade::get_scene_position(arcade::Scene *scene)
{

}
