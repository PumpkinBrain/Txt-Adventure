#ifndef Player_H
#define Player_H

#include <iostream>
#include <string>
#include <map>
#include "Room.h"

using namespace std;
using command = void (*)();

class Player{
    public:
        Player(Room startingRoom):
            currentRoom(startingRoom),
        {};
        ~Player() = default;
        Room currentRoom;
        map<string,command> getCommands(){return commandList;};
    private:
        map<string, command> commandList;
        void look(){cout<<currentRoom.getDescription();}
};

#endif