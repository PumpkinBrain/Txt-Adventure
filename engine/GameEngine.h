#ifndef GameEngine_H
#define GameEngine_H

#include <string>
#include <map>
#include "./components/Player.h"

using namespace std;

class GameEngine{
    public:
        GameEngine(){};
        ~GameEngine() = default;
        void gameLoop();
};

#endif