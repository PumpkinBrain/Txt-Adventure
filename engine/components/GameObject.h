#ifndef GameObject_H
#define GameObject_H

#include <map>
#include <string>
#include "Command.h"

using namespace std;

class GameObject{
    public:
        GameObject(map<string, Command> commandMap) : 
            commandMap(commandMap)
        {};

        map<string, Command> getCommandMap(){return commandMap;}
    private:
        map<string, Command> commandMap;
};

#endif