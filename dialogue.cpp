//hw making dialogue with different color lines

#include <ncurses.h>
#include <stdlib.h>

using namespace std;


int main(int argc, char ** argv){
	initscr();
	start_color();
	init_pair(1, COLOR_CYAN, COLOR_BLUE);
	attron(COLOR_PAIR(1));
	printw("Hey, what are you doing today?\n");
	init_pair(2, COLOR_BLUE, COLOR_GREEN);
	attron(COLOR_PAIR(2));
	printw("Hi, I'm not doing anything today\n");
	attron(COLOR_PAIR(1));
	printw("Do you want to hang out today?\n");
	attron(COLOR_PAIR(2));
	printw("Sure!\n");
	attron(COLOR_PAIR(1));
	printw("Let's go eat at a restaurant.\n");
	attron(COLOR_PAIR(2));
	printw("Ok.\n");
	attron(COLOR_PAIR(1));
	printw("Let's meet up around 2:00 pm.\n");
	attron(COLOR_PAIR(2));
	printw("Ok!\n");
	attron(COLOR_PAIR(1));
	printw("I'm gonna go now, bye!\n");
	attron(COLOR_PAIR(2));
	printw("Ok, byee!\n");
	attron(COLOR_PAIR(1));
	printw("Can't wait to see you later!\n");
	attron(COLOR_PAIR(2));
	printw("Can't wait to see you too!\n");
	


	getch();
	endwin();

	return 0;
}