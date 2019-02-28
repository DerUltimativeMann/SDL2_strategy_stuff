#include "game.h"

int main(int argc, char **argv) {

    GameFrame *game = new GameFrame();

    while(game->getRunning()) {
        game->update();
        game->render();
    }

    delete game;
    return 0;
}
