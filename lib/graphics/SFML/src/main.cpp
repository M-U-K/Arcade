/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** main
*/

#include "../../../data.hpp"
#include "../inc/data_sfml.hpp"

int main()
{

    unsigned long j;

   arcade::Window *window = arcade::create_window(1000, 1000, "juif");
   arcade::Time *time = arcade::create_time(window);

   while (arcade::window_isopen(window)) {
      arcade::disp_window(window);
        j = arcade::get_time(time);
      printf("%ld\n", j);
      //arcade::reset_time(time);

   }
   arcade::delete_window(window);
}
