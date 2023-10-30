#ifndef Room_H
#define Room_H
    
#include <list>
#include <map>
#include <string>

using namespace std;

class Room{
    public:
        Room()
        ~Room()
        
        map<string, Room> getRooms();
        string getDescription();
};

#endif