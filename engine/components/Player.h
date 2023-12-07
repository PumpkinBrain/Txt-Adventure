#ifndef Player_H
#define Player_H

#include <iostream>
#include <string>
#include <map>
#include "Room.h"

using namespace std;

class Player : public GameObject {
    public:
        Player(Room startingRoom, string description, string name) : 
            GameObject(description, name),
            currentRoom(startingRoom)
        {};
        ~Player() = default;
        Room currentRoom;
};

#endif