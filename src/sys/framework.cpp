#include "framework.h"

GameFrame::GameFrame(){
    SDL_Init(SDL_INIT_EVERYTHING);
    GameFrame::window = SDL_CreateWindow("GameDev2019 - Strategy Game Stuff", 50, 50, 640, 480, 0);
    GameFrame::renderer = SDL_CreateRenderer(window, SDL_TRUE, 0);
    GameFrame::running = true;
}

GameFrame::~GameFrame() {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void GameFrame::update() {
    // Replace later
    SDL_Event event;

    while(SDL_PollEvent(&event)) {
        switch(event.type) {
            case SDL_QUIT:
            running = false;
        }
    }
}

void GameFrame::render() {
    SDL_RenderClear(renderer);
    // Drawing orders here

    SDL_RenderPresent(renderer);
}


void GameFrame::setRunning(bool running) {
    GameFrame::running = running;
}

bool GameFrame::getRunning() const {
    return GameFrame::running;
}
