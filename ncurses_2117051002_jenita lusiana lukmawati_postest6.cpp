#include <ncurses/ncurses.h>
#include <iostream>
#include <windows.h>
#include <unistd.h>

using namespace std;

int main(){
	
	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	init_pair(2,COLOR_MAGENTA,COLOR_WHITE);
	
	attron (COLOR_PAIR (1));
	mvprintw (6,19,"Jenita Lusiana Lukmawati");
	attroff (COLOR_PAIR (1));
    sleep(1);
	refresh();
	
	attron (COLOR_PAIR (2));
	mvprintw (8,44,"2117051002");
	attroff (COLOR_PAIR (2));
	sleep(1);
	refresh();
	
	getch();
	endwin();
}

