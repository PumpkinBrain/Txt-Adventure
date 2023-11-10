#ifndef Player_H
#define Player_H

#include <string>
#include <map>
#include "Room.h"

using namespace std;
using command = void (*)();

class Player{
    public:
        Player(Room startingRoom, map<string,command> commands):
            currentRoom(startingRoom),
            commandList(commands)
        {};
        ~Player() = default;
        void setCurrentRoom(Room newRoom){currentRoom = newRoom;};
    private:
        Room currentRoom
        map<string, command> commandList;
};

#endif