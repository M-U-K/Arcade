/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** main
*/

#include "../lib/data.hpp"
#include "../inc/arcade.hpp"

void *arcade::load_lib_game(std::string name)
{
      std::pair<std::pair<bool, arcade::Window *>, std::pair<std::string, std::string>> (*func_print_name)(std::string, std::string, arcade::Window*, bool);

     std::pair<std::pair<bool, arcade::Window *>, std::pair<std::string, std::string>> test;
  


    std::string str = "lib/game/";
    str.append(name);    

    const char * c = str.c_str();
    void *lib = dlopen(c, RTLD_NOW | RTLD_GLOBAL);

   * (void **) (& func_print_name) = dlsym (lib, "start");
    test = func_print_name(arcade::name.first, arcade::name.second, arcade::window, arcade::state);
    arcade::window = test.first.second;
    arcade::state = test.first.first;
    arcade::name = test.second;
    return lib;

}

void *arcade::load_lib_graph(std::string name)
{
    if (arcade::lib_graph) {
      if (arcade::lib_game)
       dlclose(arcade::lib_game);
      dlclose (arcade::lib_graph);
    }
    std::string str = "lib/graphics/";
    str.append(name);    

    const char * c = str.c_str();
    void *lib = dlopen(c, RTLD_NOW | RTLD_GLOBAL);
    return lib;

}

void arcade::update_lib()
{
    arcade::lib_graph = arcade::load_lib_graph(arcade::name.second);
    arcade::lib_game = arcade::load_lib_game(arcade::name.first);
}


int main()
{
    arcade::name_lib_graph = "yuilm.so";
    arcade::name_lib_game = "lib_start.so";
    arcade::state = 0;
    arcade::name.first = arcade::name_lib_game;
    arcade::name.second = arcade::name_lib_graph;
    
  
    //arcade::save_val = 0;


//    std::pair<std::string, std::string> save(arcade::name.first, arcade::name.second);

//  dlclose (lib);
  while (1) {
    std::cout << "pitié = " << arcade::state << std::endl;
    arcade::update_lib();
  }

//  while (1);
   // arcade::save_val = 1;
/*
  //  dlclose(lib);
    dlclose(arcade::lib_graph);
//    dlclose(lib);
    dlclose(arcade::lib_graph);

    lib = dlopen("lib/game/lib_start.so", RTLD_NOW | RTLD_GLOBAL);    
    * (void **) (& func_window) = dlsym (lib, "make_window");
//    arcade::window = func_window();
    std::cout << "pitié " << arcade::name.second << std::endl;
    arcade::lib_graph = arcade::load_lib_graph(arcade::name.second);
*/
//    arcade::update_lib();

/*
    arcade::lib_graph = arcade::load_lib_graph("lib_arcade_sfml.so");
    arcade::lib_game = arcade::load_lib_game("lib_start.so");



    arcade::lib_graph = arcade::load_lib_graph("yuilm.so");
    arcade::lib_game = arcade::load_lib_game("lib_start.so");
*/




  // * (void **) (& func_print_name) = dlsym (arcade::lib_game, "start");

    //func_print_name();


//    dlclose(arcade::lib_graph);
  //  dlclose(arcade::lib_game);

}
