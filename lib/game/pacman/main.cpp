/*
** EPITECH PROJECT, 2021
** B-OOP-400-LYN-4-1-arcade-nicolas1.peter
** File description:
** main
*/

#include "./../../data.hpp"

int main()
{
    unsigned long j;
    int i = 0;
    int p = 0;
     unsigned long y = 0;

    arcade::Window *window = arcade::create_window(1000, 1000, "juif");


    arcade::Time *time = arcade::create_time(window);
    arcade::Scene *scene4 = arcade::create_scene(window, 0, 0, "ball");
    arcade::Scene *scene3 = arcade::create_scene(window, 0, 0, "ball");
    arcade::Scene *eat1 = arcade::create_scene(window, 0, 0, "ball");

    arcade::Scene *scene_wall5 = arcade::create_scene(window, 0, 0, "wall");
    arcade::Scene *scene_wall6 = arcade::create_scene(window, 0, 0, "wall");
    arcade::Scene *scene_wall7 = arcade::create_scene(window, 0, 0, "wall");
    arcade::Scene *scene_wall8 = arcade::create_scene(window, 0, 0, "wall");
    arcade::Scene *scene_wall9 = arcade::create_scene(window, 0, 0, "wall");
    arcade::Scene *scene_wall10 = arcade::create_scene(window, 0, 0, "wall");
    arcade::Scene *scene_wall11 = arcade::create_scene(window, 0, 0, "wall");
    arcade::Scene *scene_wall12 = arcade::create_scene(window, 0, 0, "wall");
    arcade::Scene *scene_wall13 = arcade::create_scene(window, 0, 0, "wall");
    arcade::Scene *scene_wall14 = arcade::create_scene(window, 0, 0, "wall");
    arcade::Scene *scene_wall15 = arcade::create_scene(window, 0, 0, "wall");
    arcade::Scene *scene_wall16 = arcade::create_scene(window, 0, 0, "wall");
    arcade::Scene *scene_wall17 = arcade::create_scene(window, 0, 0, "wall");
    arcade::Scene *scene_wall18 = arcade::create_scene(window, 0, 0, "wall");
    arcade::Scene *scene_wall19 = arcade::create_scene(window, 0, 0, "wall");
    arcade::Scene *scene_wall20 = arcade::create_scene(window, 0, 0, "wall");


    arcade::Scene *scene6 = arcade::create_scene(window, 0, 0, "score");

    arcade::Rect *ball = arcade::create_rect(scene3, 10, 10);
    arcade::Rect *ball1 = arcade::create_rect(eat1, 10, 10);
    arcade::Rect *pacman = arcade::create_rect(scene4, 30, 30);
    arcade::Rect *wall1 = arcade::create_rect(scene_wall5, 50, 1000);
    arcade::Rect *wall2 = arcade::create_rect(scene_wall6, 1000, 50);
    arcade::Rect *wall3 = arcade::create_rect(scene_wall7, 50, 1000);
    arcade::Rect *wall4 = arcade::create_rect(scene_wall8, 1000, 50);
    arcade::Rect *wall5 = arcade::create_rect(scene_wall9, 200, 50);
    arcade::Rect *wall6 = arcade::create_rect(scene_wall10, 200, 50);
    arcade::Rect *wall7 = arcade::create_rect(scene_wall11, 50, 200);
    arcade::Rect *wall8 = arcade::create_rect(scene_wall12, 50, 200);
    arcade::Rect *wall9 = arcade::create_rect(scene_wall13, 50, 275);
    arcade::Rect *wall10 = arcade::create_rect(scene_wall14, 50, 250);
    arcade::Rect *wall11 = arcade::create_rect(scene_wall15, 50, 250);
    arcade::Rect *wall12 = arcade::create_rect(scene_wall16, 50, 275);
    arcade::Rect *wall13 = arcade::create_rect(scene_wall17, 125, 50);
    arcade::Rect *wall14 = arcade::create_rect(scene_wall18, 125, 50);
    arcade::Rect *wall15 = arcade::create_rect(scene_wall19, 125, 50);
    arcade::Rect *wall16 = arcade::create_rect(scene_wall20, 125, 50);














    arcade::set_rect_position(wall1, std::pair<float, float>(0, 0));
    arcade::set_rect_position(wall2, std::pair<float, float>(0, 0));
    arcade::set_rect_position(wall3, std::pair<float, float>(950, 0));
    arcade::set_rect_position(wall4, std::pair<float, float>(0, 950));
    arcade::set_rect_position(wall5, std::pair<float, float>(400, 375));
    arcade::set_rect_position(wall6, std::pair<float, float>(400, 600));
    arcade::set_rect_position(wall7, std::pair<float, float>(475, 800));
    arcade::set_rect_position(wall8, std::pair<float, float>(475, 0));

    arcade::set_rect_position(wall9, std::pair<float, float>(750, 150));
    arcade::set_rect_position(wall10, std::pair<float, float>(750, 600));
    arcade::set_rect_position(wall11, std::pair<float, float>(200, 600));
    arcade::set_rect_position(wall12, std::pair<float, float>(200, 150));
    arcade::set_rect_position(wall13, std::pair<float, float>(200, 150));
    arcade::set_rect_position(wall14, std::pair<float, float>(200, 800));
    arcade::set_rect_position(wall15, std::pair<float, float>(675, 800));
    arcade::set_rect_position(wall16, std::pair<float, float>(675, 150));













    arcade::set_rect_position(ball, std::pair<float, float>(arcade::get_rect_position(ball).first+400, arcade::get_rect_position(ball).second+400));
    arcade::set_rect_position(ball1, std::pair<float, float>(arcade::get_rect_position(ball1).first+450, arcade::get_rect_position(ball1).second+450));

    arcade::set_rect_position(pacman, std::pair<float, float>(arcade::get_rect_position(pacman).first+700, arcade::get_rect_position(pacman).second+700));
    arcade::set_rect_color(ball, arcade::RED);
    arcade::set_rect_color(ball1, arcade::RED);
    arcade::set_rect_color(pacman, arcade::PURPLE);
    arcade::set_rect_color(wall1, arcade::BLUE);
    arcade::set_rect_color(wall2, arcade::BLUE);
    arcade::set_rect_color(wall3, arcade::BLUE);
    arcade::set_rect_color(wall4, arcade::BLUE);
    arcade::set_rect_color(wall5, arcade::BLUE);
    arcade::set_rect_color(wall6, arcade::BLUE);
    arcade::set_rect_color(wall7, arcade::BLUE);
    arcade::set_rect_color(wall8, arcade::BLUE);
    arcade::set_rect_color(wall9, arcade::BLUE);
    arcade::set_rect_color(wall10, arcade::BLUE);
    arcade::set_rect_color(wall11, arcade::BLUE);
    arcade::set_rect_color(wall12, arcade::BLUE);
    arcade::set_rect_color(wall13, arcade::BLUE);
    arcade::set_rect_color(wall14, arcade::BLUE);
    arcade::set_rect_color(wall15, arcade::BLUE);
    arcade::set_rect_color(wall16, arcade::BLUE);













    arcade::Text *text1 = arcade::create_text(scene6, "0", 30, "./../../../rsc/font/basic.ttf");
    arcade::set_text_position(text1, std::pair<float, float>(arcade::get_text_position(text1).first+50, arcade::get_text_position(text1).second+50));
    arcade::set_text_rotation(text1, 10);
    arcade::set_text_color(text1, arcade::RED);


    while (arcade::window_isopen(window)) {
        arcade::disp_window(window);
        j = arcade::get_time(time);
        if (arcade::check_key(window, arcade::D) && i == 0) {
            arcade::set_rect_position(pacman, std::pair<float, float>(arcade::get_rect_position(pacman).first+10, arcade::get_rect_position(pacman).second));
            i++;
            y = j;
        }
        if (arcade::check_key(window, arcade::Q) && i == 0) {
            arcade::set_rect_position(pacman, std::pair<float, float>(arcade::get_rect_position(pacman).first-10, arcade::get_rect_position(pacman).second));
            i++;
            y = j;
        }
        if (arcade::check_key(window, arcade::Z) && i == 0) {
            arcade::set_rect_position(pacman, std::pair<float, float>(arcade::get_rect_position(pacman).first, arcade::get_rect_position(pacman).second-10));
            i++;
            y = j;
        }
        if (arcade::check_key(window, arcade::S) && i == 0) {
            arcade::set_rect_position(pacman, std::pair<float, float>(arcade::get_rect_position(pacman).first, arcade::get_rect_position(pacman).second+10));
            i++;
            y = j;
        }
        if (j >= y + 100) {
            i = 0;
        }
        if (arcade::get_rect_position(pacman).first+10 >= arcade::get_rect_position(ball).first && arcade::get_rect_position(pacman).first+10 <= arcade::get_rect_position(ball).first+10 && arcade::get_rect_position(pacman).second+10 >= arcade::get_rect_position(ball).second && arcade::get_rect_position(pacman).second+10 <= arcade::get_rect_position(ball).second+10)
        {
            arcade::set_text_content(text1, std::to_string(++p));
            arcade::set_rect_position(ball, std::pair<float, float>(1000, 1000));
        }
        if (arcade::get_rect_position(pacman).first+10 >= arcade::get_rect_position(ball1).first && arcade::get_rect_position(pacman).first+10 <= arcade::get_rect_position(ball1).first+10 && arcade::get_rect_position(pacman).second+10 >= arcade::get_rect_position(ball1).second && arcade::get_rect_position(pacman).second+10 <= arcade::get_rect_position(ball1).second+10)
        {
            arcade::set_text_content(text1, std::to_string(++p));
            arcade::set_rect_position(ball1, std::pair<float, float>(1000, 1000));
        }
        if (arcade::check_key(window, arcade::A)) {
            std::cout << j << std::endl;
            std::cout << y << std::endl;
            std::cout << i << std::endl;
        }
    }
    arcade::delete_window(window);
}