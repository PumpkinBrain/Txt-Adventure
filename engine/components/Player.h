#ifndef Player_H
#define Player_H

#include <iostream>
#include <string>
#include <map>
#include "Room.h"

using namespace std;

class Player : public GameObject {
    public:
        Player(Room startingRoom, string description) : 
            GameObject(description, "player"),
            currentRoom(startingRoom)
        {};
        ~Player() = default;
        Room currentRoom;

        string getName () override {return "player";}
};

#endif