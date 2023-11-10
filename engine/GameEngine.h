#ifndef GameEngine_H
#define GameEngine_H

#include <string>
#include <map>

using namespace std;
using command = void (*) ();

class GameEngine{
    public:
        GameEngine(map<string, command> commands) : 
            commandList(commands){};
        ~GameEngine() = default;

        void gameLoop();
        void call(string txt) {
            command com = commandList[txt];
            (*com)();
        }
        map<string, command> getCommandList(){return commandList};
    private:
        map<string, command> commandList;
};

#endif