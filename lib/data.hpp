/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** data
*/

#include <iostream>
#include <vector>
#include <ncurses.h> 
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <cstring>
#include <stdio.h>
#include <dirent.h>
#include <iostream>  
#include <fstream>
#include <string>
#include <sys/types.h>
#include <time.h>
#include <ctime>    
#include <chrono>

//#include "text.hpp"
#ifndef DATA_HPP_
#define DATA_HPP_


namespace arcade {
    class Text;
    class Window;
    class Scene;
    class Time;
    class Rect;
    enum pause {
        OFF_P = 0,
        ON_P = 1
    };
    enum load {
        OFF_L = 0,
        ON_L = 1
    };
    enum color {
        WHITE = 0,
        BLACK = 1,
        BLUE = 2,
        RED = 3,
        GREEN = 4,
        PURPLE = 5
    };
    
    enum key {
        A = 0,
        B = 1,
        C = 2,
        D = 3,
        E = 4,
        F = 5, 
        G = 6,
        H = 7,
        I = 8,
        J = 9,
        K = 10, 
        L = 11, 
        M = 12,
        N = 13,
        O = 14,
        P = 15,
        Q = 16,
        R = 17,
        S = 18,
        T = 19,
        U = 20,
        V = 21,
        W = 22,
        X = 23,
        Y = 24,
        Z = 25,
        SPACE = 26,
        ECHAP = 27,
        ENTER = 28
    };


    //Rect
    arcade::Rect *create_rect(arcade::Scene *scene, float width, float height);
    void load_rect(arcade::Rect *rect, arcade::load load);
    void delete_rect(arcade::Rect *rect);
    void set_rect_position(arcade::Rect *rect, std::pair<float, float> pos);
    void set_rect_color(arcade::Rect *rect, arcade::color color);
    void set_rect_size(arcade::Rect *rect, std::pair<float, float> size);
    std::pair <float, float> get_rect_position(arcade::Rect *rect);
    arcade::color get_rect_color(arcade::Rect *rect);
    std::pair <float, float> get_rect_size(arcade::Rect *rect);

    //Scene
    arcade::Scene *create_scene(arcade::Window *window, float width, float height, std::string name);
    void pause_scene(arcade::Scene *scene, arcade::pause pause);
    void load_scene(arcade::Scene *scene, arcade::load load);
    void delete_scene(arcade::Scene *scene);
    void disp_scene(arcade::Scene *scene, arcade::Window *window);
    void set_scene_color(arcade::Scene *scene, arcade::color color);
    void set_scene_position(arcade::Scene *scene, std::pair<float, float> pos);
    arcade::color get_scene_color(arcade::Scene *scene);
    std::pair <float, float> get_scene_position(arcade::Scene *scene);

    //Text
    std::string get_text_content(arcade::Text *text);
    std::pair <float, float> get_text_position(arcade::Text *text);
    float get_text_rotation(arcade::Text *text);
    std::pair <float, float> get_text_scale(arcade::Text *text);
    arcade::color get_text_color(arcade::Text *text);
    void set_text_content(arcade::Text *text, std::string content);
    void set_text_position(arcade::Text *text, std::pair<float, float> pos);
    void set_text_rotation(arcade::Text *text, float angle);
    void set_text_scale(arcade::Text *text, std::pair<float, float> scale);
    void set_text_color(arcade::Text *text, arcade::color color);
    void set_text_font(arcade::Text *text, std::string font_path);
    arcade::Text *create_text(arcade::Scene *scene, std::string content = "text", unsigned int size = 30, std::string font = "../../rsc/font/basic.ttf");
    void pause_text(arcade::Text *text, arcade::pause pause);
    void load_text(arcade::Text *text, arcade::load load);
    void delete_text(arcade::Text *text);

    //Time
    arcade::Time *create_time(arcade::Window *window);
    unsigned long get_time(arcade::Time *time);
    void reset_time(arcade::Time *time);

    //Window
    arcade::Window *create_window(unsigned int width, unsigned int height, std::string title);
    void disp_window(arcade::Window *window);
    void delete_window(arcade::Window *window);
    arcade::load window_isopen(arcade::Window *window);
    bool check_key(arcade::Window *window, arcade::key key);

}
/*
#include "game/Start/inc/start.hpp"
#include "graphics/SFML/inc/text.hpp"
#include "graphics/SFML/inc/scene.hpp"
#include "graphics/SFML/inc/window.hpp"
#include "graphics/SFML/inc/time.hpp"
#include "graphics/SFML/inc/rect.hpp"*/
#endif /* !DATA_HPP_ */
