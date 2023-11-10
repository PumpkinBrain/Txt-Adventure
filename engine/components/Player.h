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
        Player(Room startingRoom) :
            currentRoom(startingRoom)
        {};
        ~Player() = default;
        Room currentRoom;
        map<string, command> commandList;
};

#endif