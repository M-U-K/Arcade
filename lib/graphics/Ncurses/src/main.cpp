/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** main
*/

#include "../../../data.hpp"
#include "../inc/data_ncurses.hpp"

int main()
{

    unsigned long j;

   arcade::Window *window = arcade::create_window(1000, 1000, "juif");
   arcade::Time *time = arcade::create_time(window);
    arcade::Scene *scene = arcade::create_scene(window, 100, 200, "caca");
    arcade::Scene *scene2 = arcade::create_scene(window, 50, 200, "caca");
 
   while (arcade::window_isopen(window)) {
      arcade::disp_window(window);
        j = arcade::get_time(time);
 //     printf("%ld\n", j);

      if (j >= 5000) {
    //     printf("        juif");
  //    printf("%ld\n", j);

         arcade::reset_time(time);
      }
   }
   arcade::delete_window(window);
}
