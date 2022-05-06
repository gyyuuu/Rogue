#include "header/GameSystem.hpp"
#include "header/Character.hpp"

#include <ncurses.h>

int main() {
    setlocale(LC_ALL, "");
    initscr();
    cbreak();
    curs_set(0);
    GameSystem system;
    system.Create();
    endwin();
    return 0;
}
