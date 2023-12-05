#ifndef Room_H
#define Room_H
    
#include <list>
#include <map>
#include <string>
#include <iostream>
#include "GameObject.h"
#include "Command.h"

using namespace std;

class Room : GameObject{
    public:
        Room(string description, string name, map<string, Command> commandMap): 
            GameObject(commandMap, description, name)
            {};
        ~Room() = default;
};

#endif