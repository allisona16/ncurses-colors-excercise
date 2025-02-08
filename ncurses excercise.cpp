#include <ncurses.h>
#include <stdlib.h>

using namespace std;


int main(int argc, char ** argv){
	initscr();
	start_color();
	init_pair(1, COLOR_RED, COLOR_WHITE);
	init_pair(2, COLOR_GREEN, COLOR_WHITE);
	init_pair(3, COLOR_BLUE, COLOR_WHITE);
	init_pair(4, COLOR_MAGENTA, COLOR_WHITE);
	init_pair(5, COLOR_CYAN, COLOR_WHITE);
	raw();
	attron(COLOR_PAIR(1));
	printw("please enter your name ");
	//char name = getch();
	char name[100]; 
	getstr(name);
	//attroff(A_REVERSE | A_BLINK);	

	attron(COLOR_PAIR(3));
	printw("your name is %s", name);
	move(2,0);
	noecho();   
	attron(COLOR_PAIR(2));         
	printw("please enter your password");
	getstr(name);
	attron(COLOR_PAIR(4));
	printw("your password is: %s", name);
	move(0,0);
	attron(COLOR_PAIR(5));
	addch('?');
	move(3,0);
	addch('!');
	getch();
	endwin();

	return 0;
}