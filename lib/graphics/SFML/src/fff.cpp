/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** main
*/

#include "../inc/data.hpp"


int main()
{
    unsigned long j;

    arcade::Window *window = arcade::create_window(1000, 1000, "juif");


    arcade::Time *time = arcade::create_time(window);
    arcade::Scene *scene = arcade::create_scene(window, 100, 200, "caca");
    arcade::Scene *scene2 = arcade::create_scene(window, 50, 200, "caca");
    arcade::set_scene_color(scene, arcade::BLUE);
    arcade::set_scene_position(scene2, std::pair<float, float>(50, 0));
    arcade::set_scene_color(scene2, arcade::RED);
    arcade::Text *text1 = arcade::create_text(scene, "CROTTE", 30);
    arcade::set_text_position(text1, std::pair<float, float>(arcade::get_text_position(text1).first+50, arcade::get_text_position(text1).second+50));
    arcade::set_text_rotation(text1, 10);
    arcade::set_text_color(text1, arcade::RED);


   // arcade::Rect *rect = arcade::create_rect(scene, 20, 20);
//    arcade::set_rect_color(rect, arcade::PURPLE);

    arcade::load_scene(scene2, arcade::OFF_L);

    while (arcade::window_isopen(window)) {
    
        arcade::disp_window(window);
        j = arcade::get_time(time);
//        std::cout << j << std::endl;
        if (j >= 5) {
            arcade::set_text_position(text1, std::pair<float, float>(arcade::get_text_position(text1).first+1, arcade::get_text_position(text1).second));
            arcade::reset_time(time);
        }
        if (arcade::check_key(window, arcade::A))
            std::cout << "juif" << std::endl;
    }
    arcade::delete_window(window);


}
