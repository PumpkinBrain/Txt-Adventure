#ifndef GameObject_H
#define GameObject_H

#include <map>
#include <string>
#include "Command.h"

using namespace std;

class GameObject{
    public:
        GameObject(map<string, Command> commandMap, string description, string name) : 
            commandMap(commandMap),
            description(description),
            name(name)
        {};

        map<string, Command> getCommandMap(){return commandMap;}
        string getDescription(){return description;}
        string getname(){return name;}
    private:
        map<string, Command> commandMap;
        string description;
        string name;
};

#endif