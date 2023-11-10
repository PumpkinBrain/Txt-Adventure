#ifndef Assets_H
#define Assets_H

#include "../components/Room.h"
#include "../components/Player.h"

class Assets{
    public:
        Assets() = default;
        ~Assets() = default;
        Player player = Player(a);

    private:
        Room a = Room({"north", b}, "A room filled with dead bodies and blood", "The room");
        Room b = Room({"south", a}, "A very long corridor. It still stinks of blood", "The corridor");

};
    
#endif