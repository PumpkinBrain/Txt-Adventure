#ifndef GameEngine_H
#define GameEngine_H

#include <string>
#include <map>
#include "Player.h"

using namespace std;

class GameEngine{
    public:
        GameEngine(Player player) : 
            player(player)
        {}
        ~GameEngine() = default;
        Player player;
        void gameLoop();
};

#endif