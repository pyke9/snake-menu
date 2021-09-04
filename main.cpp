#include "game.h"
#include "Menu.h"

int main()
{
  Game game;

  while ( !game.isDone() ) {
    game.checkEvents();
    game.checkInput();
    game.update();
    game.draw();
  }

  Menu Menu;



  return 0;
}
