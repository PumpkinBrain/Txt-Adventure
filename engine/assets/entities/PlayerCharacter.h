#ifndef PlayerCharacter_H
#define PlayerCharacter_H

#include "../../components/Player.h"
#include "../rooms/Rooms.h"

class PlayerCharacter{
    public:
        PlayerCharacter(){}
        ~PlayerCharacter(){}

        Rooms rooms = Rooms();
        Player playerChar = Player(rooms.starterRoom, "you feel alright", "Player");
};

#endif