/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** window
*/

#include "../inc/window.hpp"

arcade::Window *arcade::create_window(unsigned int width, unsigned int height, std::string title)
{
    initscr();
    arcade::Window *window = new arcade::Window(width, height);
    noecho();
    raw();
    curs_set(0);
    nodelay(stdscr, true);
    return window;
}


arcade::Window::Window(unsigned int width, unsigned int height)
{
    this->window = newwin(height/20, width/10, 1, 1);
    this->stop = 0;
    box( this->window, 0, 0 );
    refresh();
    wrefresh(this->window);
}

void arcade::delete_window(arcade::Window *window)
{
    endwin();
    window->~Window();
}

arcade::Window::~Window()
{
    delwin(this->window);
}


void arcade::disp_window(arcade::Window *window)
{
    window->update_window();
}


void arcade::Window::add_scene(class arcade::Scene *scene)
{
    this->scene.insert(std::make_pair(this->nbr_scene, scene));
    this->nbr_scene++;
}

void arcade::Window::add_time(class arcade::Time *time)
{
    this->time.insert(std::make_pair(this->nbr_time, time));
    this->nbr_time++;
}

std::map<size_t, arcade::Scene*> *arcade::Window::get_ListScene()
{
    return &this->scene;
}


void arcade::Window::update_window()
{
    //char ch = 'f';

    box(this->window, 0, 0);
    
    
    
    
  //  refresh();
//    doupdate();
//    wrefresh(this->window);
wnoutrefresh(this->window);
    std::map<size_t, Scene*>::iterator it = this->get_ListScene()->begin();
    while(it != this->get_ListScene()->end()) {
        wprintw(it->second->get_scene(), "juif");
//        wrefresh(it->second->get_scene());
        wnoutrefresh(it->second->get_scene());
        it++;
    }
    doupdate();

//      clear();
    //box( this->window, 0, 0 );
	//wborder(this->window, ' ', ' ', ' ',' ',' ',' ',' ',' ');
    //wrefresh(this->window);
  //  noecho();


//    keypad(stdscr, TRUE);   
//    raw();

}

arcade::load arcade::window_isopen(arcade::Window *window)
{
    return window->check_window_isopen();
}

arcade::load arcade::Window::check_window_isopen()
{
    this->our_char = getch();
    if (this->our_char != 'e')
        return (arcade::load::ON_L);
    return (arcade::load::OFF_L);
}

bool arcade::check_key(arcade::Window *window, arcade::key key)
{

}