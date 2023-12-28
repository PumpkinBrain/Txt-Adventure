#ifndef EntityRegister_H
#define EntityRegister_H

#include <map>
#include <string>
#include "../../components/GameObject.h"
#include "../../components/Player.h"
#include "../rooms/Rooms.h"

class EntityRegister{
    public:
        EntityRegister(){};
        ~EntityRegister(){};

        //TODO: fix this
        map<string, GameObject*> entityMap = {{playerCharacter.getName(), &playerCharacter}};

    private:
        Rooms rooms = Rooms();
        Player playerCharacter = Player(rooms.starterRoom, "you feel alright");
};

#endif