/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** start
*/

#include "../inc/start.hpp"
#include "../../../../inc/arcade.hpp"

std::vector<std::string> arcade::Start::get_map(Map map)
{
    if (map == GAME)
        return this->list_lib_game;
    if (map == GRAPHIC)
        return this->list_lib_graphic;
}


arcade::Window *arcade::make_window()
{
    arcade::Window *window = arcade::create_window(1000, 1000, "Start");
    return (window);
}

std::pair<std::pair<int, arcade::Window *>, std::pair<std::string, std::string>> arcade::start(std::string name_game, std::string name_graph, arcade::Window *window, int state)
{
  //  void *f = dlopen("../../../../lib/graphics/lib_arcade_sfml.so", RTLD_LAZY | RTLD_LOCAL);

    arcade::name_lib_game = name_game;
    arcade::name_lib_graph = name_graph;
    arcade::name = std::pair<std::string, std::string>(name_game, name_graph);
  
  
  
    arcade::Start test;
  
    std::vector <std::string> map_game;
    std::vector <std::string> map_graph;
    map_graph = test.get_map(arcade::Start::GRAPHIC);
    map_game = test.get_map(arcade::Start::GAME);


    DIR *dir;
    struct dirent *dent;
    char buffer[50];
    int size_game = 0;
    strcpy(buffer, "./lib/game/");
    dir = opendir(buffer);   //this part
    if(dir!=NULL) {
        while((dent=readdir(dir))!=NULL) {
            std::string str(dent->d_name);
            if (str.find_last_of(".") != std::string::npos) {
                if (!str.substr(str.find_last_of(".")+1).compare("so")) {
                    map_game.push_back(str);
                    size_game ++;
                }
            }
        }
    }
    closedir(dir);
    strcpy(buffer, "./lib/graphics/");
    dir = opendir(buffer);   //this part
    int size_graph = 0;
    auto it = map_graph.end();

    if(dir!=NULL) {
        while((dent=readdir(dir))!=NULL) {
            std::string str(dent->d_name);
            if (str.find_last_of(".") != std::string::npos) {
                if (!str.substr(str.find_last_of(".")+1).compare("so")) {
                    map_graph.push_back(str);
                    size_graph ++;
                }
            }
        }
    }



std::cout << size_graph << std::endl;
std::cout << size_game << std::endl;


//    std::map<int, std::string>::iterator h = map_graph.begin();
  //  while (h != map_graph.end()) {
    //    std::cout << "crotte" << std::endl;
    //++h;
    //}

    closedir(dir);

    unsigned long j;

    std::cout << "JUIFFFF = " << state << std::endl;

    window = arcade::create_window(1000, 1000, "Start");
    arcade::Time *time = arcade::create_time(window);
  
    arcade::Scene *scene_arcade = arcade::create_scene(window, 800, 800, "graph");
    
    arcade::Scene *scene_graphic = arcade::create_scene(window, 200, 100 +(20*map_graph.size()), "graph");
    arcade::Scene *scene_game = arcade::create_scene(window, 200, 100 + (20*map_game.size()), "game");

    arcade::Text *text_title = arcade::create_text(scene_arcade, "Arcade", 30, "rsc/font/basic.ttf");
    arcade::set_text_position(text_title, std::pair<float, float>(arcade::get_text_position(text_title).first+450, arcade::get_text_position(text_title).second+100));
    arcade::set_text_color(text_title, arcade::BLACK);

    arcade::Text *text_game_title = arcade::create_text(scene_game, "Game", 20, "rsc/font/basic.ttf");
    arcade::set_text_position(text_game_title, std::pair<float, float>(arcade::get_text_position(text_game_title).first+250, arcade::get_text_position(text_game_title).second+200));
    arcade::set_text_color(text_game_title, arcade::BLACK);


    arcade::Text *text_graph_title = arcade::create_text(scene_graphic, "Graph", 20, "rsc/font/basic.ttf");
    arcade::set_text_position(text_graph_title, std::pair<float, float>(arcade::get_text_position(text_graph_title).first+650, arcade::get_text_position(text_graph_title).second+200));
    arcade::set_text_color(text_graph_title, arcade::BLACK);


    arcade::set_scene_color(scene_game, arcade::BLUE);
    arcade::set_scene_position(scene_game, std::pair<float, float>(200, 200));
    arcade::set_scene_color(scene_graphic, arcade::RED);
    arcade::set_scene_position(scene_graphic, std::pair<float, float>(600, 200));
    arcade::set_scene_color(scene_arcade, arcade::PURPLE);
    arcade::set_scene_position(scene_arcade, std::pair<float, float>(100, 50));


    for (auto& x: map_graph) {
        std::cout << "crotte" << std::endl;
        std::cout << x << std::endl;
    }


    //std::vector<std::string>::iterator d = map_graph.begin();
    std::map<std::string, arcade::Text*> map_graph2;
    int s = 0;

    for (auto d: map_graph) {        
        map_graph2.insert(std::pair<std::string, arcade::Text*>(d, arcade::create_text(scene_graphic, d, 15, "rsc/font/basic.ttf")));
        arcade::set_text_position(map_graph2.at(d), std::pair<float, float>(arcade::get_text_position(map_graph2.at(d)).first+630, arcade::get_text_position(map_graph2.at(d)).second+250+s));
        arcade::set_text_color(map_graph2.at(d), arcade::BLACK);
        s += 20;
    }


    s = 0;
    std::vector<std::string>::iterator g = map_game.begin();
    std::map<std::string, arcade::Text*> map_game2;

    for (auto& d: map_game) {        
        map_game2.insert(std::pair<std::string, arcade::Text*>(d, arcade::create_text(scene_game, d, 15, "rsc/font/basic.ttf")));
        arcade::set_text_position(map_game2.at(d), std::pair<float, float>(arcade::get_text_position(map_game2.at(d)).first+230, arcade::get_text_position(map_game2.at(d)).second+250+s));
        arcade::set_text_color(map_game2.at(d), arcade::BLACK);
        s += 20;
    }

    arcade::Rect *rect_graph = arcade::create_rect(scene_graphic, 10, 10);
    arcade::set_rect_position(rect_graph, std::pair<float, float>(arcade::get_rect_position(rect_graph).first+610, arcade::get_rect_position(rect_graph).second+250));
    arcade::Rect *rect_game = arcade::create_rect(scene_game, 10, 10);
    arcade::set_rect_position(rect_game, std::pair<float, float>(arcade::get_rect_position(rect_game).first+210, arcade::get_rect_position(rect_game).second+250));

    arcade::Text *cursor = arcade::create_text(scene_game, "<--", 15, "rsc/font/basic.ttf");
    arcade::set_text_position(cursor, std::pair<float, float>(arcade::get_text_position(cursor).first+410, arcade::get_text_position(cursor).second+250));
    arcade::set_text_color(cursor, arcade::BLACK); 

    int y = 0;
    int south = 0;

    while (arcade::window_isopen(window)) {
        
        arcade::disp_window(window);
        
        j = arcade::get_time(time);
//        std::cout << j << std::endl;
        if (j >= 5) {
            arcade::reset_time(time);
        }
        if (arcade::check_key(window, arcade::S) && ((y == 1 && south != size_graph-1) || (y == 0 && south != size_game-1))) {
            arcade::set_text_position(cursor, std::pair<float, float>(arcade::get_text_position(cursor).first, arcade::get_text_position(cursor).second+20));
            while(arcade::check_key(window, arcade::S));
            south++;
        }
        if (arcade::check_key(window, arcade::Z) && south != 0) {
            arcade::set_text_position(cursor, std::pair<float, float>(arcade::get_text_position(cursor).first, arcade::get_text_position(cursor).second-20));
            while(arcade::check_key(window, arcade::Z));
            south--;
        }
        if (arcade::check_key(window, arcade::D) && y == 0) {
            arcade::set_text_position(cursor, std::pair<float, float>(arcade::get_text_position(cursor).first+400, arcade::get_text_position(cursor).second));
            while(arcade::check_key(window, arcade::D));
            y ++;
            if (south > size_graph-1) {
                arcade::set_text_position(cursor, std::pair<float, float>(arcade::get_text_position(cursor).first, arcade::get_text_position(cursor).second-20*(south - (size_graph-1))));
                south = size_graph-1;
            }
        }
        if (arcade::check_key(window, arcade::Q) && y == 1) {
            arcade::set_text_position(cursor, std::pair<float, float>(arcade::get_text_position(cursor).first-400, arcade::get_text_position(cursor).second));
            while(arcade::check_key(window, arcade::Q));
            y --;
            if (south > size_game-1) {
                arcade::set_text_position(cursor, std::pair<float, float>(arcade::get_text_position(cursor).first, arcade::get_text_position(cursor).second-20*(south - (size_game-1))));
                south = size_game-1;
            }
        }
        if (arcade::check_key(window, arcade::SPACE)) {
            if (y == 1) {
                arcade::set_rect_position(rect_graph, std::pair<float, float>(arcade::get_text_position(cursor).first-200, arcade::get_text_position(cursor).second));
                while(arcade::check_key(window, arcade::SPACE));
                s = 250;
                for (auto& d: map_graph) {
                    s+=20;
                    if (s == arcade::get_text_position(cursor).second+20) {
                        std::cout << " JUIF = " << d << std::endl;
                        
                        arcade::name_lib_graph = d;
                        arcade::delete_rect(rect_graph);
                        arcade::delete_rect(rect_game);
                        arcade::delete_text(cursor);
                        for (auto d: map_graph) {        
                            arcade::delete_text(map_graph2.at(d));
                        }
                        for (auto& d: map_game) {        
                            arcade::delete_text(map_game2.at(d));
                        }
                        arcade::delete_text(text_graph_title);
                        arcade::delete_text(text_game_title);
                        arcade::delete_text(text_title);
                        arcade::delete_scene(scene_game);
                        arcade::delete_scene(scene_graphic);
                        arcade::delete_scene(scene_arcade);
                        arcade::delete_window(window);
                      //  return;
                        return std::pair <std::pair<int, arcade::Window*>, std::pair<std::string, std::string>>(
                        std::pair<int, arcade::Window*>(0, window), 
                        std::pair<std::string, std::string>(arcade::name_lib_game, arcade::name_lib_graph));
                    }
                }
            }
            if (y == 0) {
                arcade::set_rect_position(rect_game, std::pair<float, float>(arcade::get_text_position(cursor).first-200, arcade::get_text_position(cursor).second));
                while(arcade::check_key(window, arcade::SPACE));
                s = 250;
                for (auto& d: map_game) {
                    s+=20;

                    if (s == arcade::get_text_position(cursor).second+20) {
                        std::cout << "lib game = PUTAIN DE MERDE NTM" << d << std::endl;
                        arcade::name_lib_game = d;
                        std::cout << "lib game = PUTAIN DE MERDE NTM2 "<< arcade::name_lib_game << std::endl;

                        arcade::delete_rect(rect_graph);
                        arcade::delete_rect(rect_game);
                        arcade::delete_text(cursor);
                        for (auto d: map_graph) {        
                            arcade::delete_text(map_graph2.at(d));
                        }
                        for (auto& d: map_game) {        
                            arcade::delete_text(map_game2.at(d));
                        }
                        arcade::delete_text(text_graph_title);
                        arcade::delete_text(text_game_title);
                        arcade::delete_text(text_title);
                        arcade::delete_scene(scene_game);
                        arcade::delete_scene(scene_graphic);
                        arcade::delete_scene(scene_arcade);
                        arcade::delete_window(window);
                        return std::pair <std::pair<int, arcade::Window*>, std::pair<std::string, std::string>>(
                        std::pair<int, arcade::Window*>(1, window), 
                        std::pair<std::string, std::string>(arcade::name_lib_game, arcade::name_lib_graph));
                    }
  //                      arcade::load_lib_game(d);
                }
            }
        }
    
    }
    arcade::delete_rect(rect_graph);
    arcade::delete_rect(rect_game);
    arcade::delete_text(cursor);
    for (auto d: map_graph) {        
        arcade::delete_text(map_graph2.at(d));
    }
    for (auto& d: map_game) {        
        arcade::delete_text(map_game2.at(d));
    }
    arcade::delete_text(text_graph_title);
    arcade::delete_text(text_game_title);
    arcade::delete_text(text_title);
    arcade::delete_scene(scene_game);
    arcade::delete_scene(scene_graphic);
    arcade::delete_scene(scene_arcade);
    arcade::delete_window(window);
    
    return std::pair <std::pair<int, arcade::Window*>, std::pair<std::string, std::string>>(
    std::pair<int, arcade::Window*>(2, window), 
    std::pair<std::string, std::string>(arcade::name_lib_game, arcade::name_lib_graph));
}

