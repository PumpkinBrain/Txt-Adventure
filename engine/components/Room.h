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
        Room(map<string, Room> roomList, string description, string name,
                map<string, Command> commandMap): 
            GameObject(commandMap),
            adjacentRooms(roomList), 
            roomDescription(description),
            roomName(name)
            {};
        ~Room() = default;
        
        map<string, Room> getRooms(){return adjacentRooms;};
        string getName(){return roomName;};

    private:
        map<string, Room> adjacentRooms;
        string roomDescription;
        string roomName;
};

#endif