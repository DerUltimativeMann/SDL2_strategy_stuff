#ifndef _FRAMEWORK_H
#define _FRAMEWORK_H

#include <SDL2/SDL.h>

class GameFrame {
private:
    SDL_Window *window;
    SDL_Renderer *renderer;
    bool running;
public:
    GameFrame();
    ~GameFrame();

    void update();
    void render();

    void setRunning(bool running);
    bool getRunning() const;

};

#endif
