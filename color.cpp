//hw making dialogue with different color lines

#include <ncurses.h>
#include <stdlib.h>

using namespace std;

#define COLOR_PINK 8


int main(int argc, char ** argv){
	initscr();
	start_color();
	raw();
	keypad(stdscr, TRUE);
	noecho();
	init_color(COLOR_RED, 700, 0, 0);
	init_pair(1, COLOR_YELLOW, COLOR_RED);
	init_pair(2, COLOR_CYAN, COLOR_BLUE);
	int ch;
	printw("press F1-F2 to change color, q to close\n");
	ch=getch();
	while(ch != 113)
	{
		if(ch == KEY_F(1))
			attron(COLOR_PAIR(1));
		else if(ch == KEY_F(2))
			attron(COLOR_PAIR(2));
		else if(ch == KEY_F(3))
			attroff(COLOR_PAIR(1) | COLOR_PAIR(2));

		printw("Hello there!\n");
		ch=getch();

	}
	attroff(COLOR_PAIR(1) | COLOR_PAIR(2));
	if(can_change_color())
	{
		printw("can change color");
		init_color(COLOR_PINK, 996, 410, 703);
		init_pair(8, COLOR_PINK, COLOR_BLACK);
		init_pair(4, COLOR_RED, COLOR_WHITE);
		attron(COLOR_PAIR(8));
		printw("this should be in pink");
		attron(COLOR_PAIR(4));
		printw("this should be in red");
	}


	getch();
	endwin();

	return 0;
}