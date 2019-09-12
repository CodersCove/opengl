#include "OB/Game.h"

    int main()
    {
      Game* game = new Game();
      game->AddPlayer(new Player(game));
      do{
          game->Tick();
      }
      while( game->CanExit() );
      std::cout << "done";
      delete game;
      return 0;
    }
