#ifndef Rooms_H
#define Rooms_H

#include "../../components/Room.h"

class Rooms{
    public:
        Rooms(){}
        ~Rooms(){}

        Room starterRoom = Room("you are in a dark and stinky room", "starter room");
};

#endif