#ifndef Assets_H
#define Assets_H

#include "../components/Room.h"
#include "../components/Player.h"
#include <iostream>
#include <string>
#include <map>

using namespace std;
using command = void (*) ();

class Rooms{
    public:
        Rooms()=default;
        ~Rooms()=default;
        Room a = Room({{"north", b}}, "A room filled with dead bodies and blood", "The room");
        Room b = Room({{"south", a}}, "A very long corridor. It still stinks of blood", "The corridor");
};

Rooms r = Rooms();        
Player player(r.a);
void look(){cout<<player.currentRoom.getDescription();};

map<string, command> commandMap = {
    {"look", look}
};

Player initialize(){
    player.commandList = commandMap;
    return player;
}
#endif