#ifndef Room_H
#define Room_H
    
#include <list>
#include <map>
#include <string>

using namespace std;

class Room{
    public:
        Room(map<string, Room> roomList, string description, string name):
            adjacentRooms(roomList), 
            roomDescription(description),
            roomName(name)
            {};
        ~Room() = default;
        
        map<string, Room> getRooms(){return adjacentRooms;};
        string getDescription(){return roomDescription;};
        string getName(){return roomName;};
    private:
        map<string, Room> adjacentRooms;
        string roomDescription;
        string roomName;
};

#endif