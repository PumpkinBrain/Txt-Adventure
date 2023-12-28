#ifndef GameEngine_H
#define GameEngine_H

using namespace std;

class GameEngine{
    public:
        GameEngine(){};
        ~GameEngine() = default;
        void gameLoop();
};

#endif