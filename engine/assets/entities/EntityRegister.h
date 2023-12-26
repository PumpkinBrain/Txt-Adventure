#ifndef EntityRegister_H
#define EntityRegister_H

#include <map>
#include <string>
#include "../../components/GameObject.h"
#include "PlayerCharacter.h"

class EntityRegister{
    public:
        EntityRegister();
        ~EntityRegister();

        map<string, GameObject*> entityMap = 
                {{playerChar.playerChar.getName(), &playerChar.playerChar}};

    private:
        PlayerCharacter playerChar = PlayerCharacter();
};

#endif