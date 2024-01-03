#ifndef EntityRegister_H
#define EntityRegister_H

#include <map>
#include <string>
#include "../../components/GameObject.h"
#include "Player.h"

class EntityRegister{
    public:
        EntityRegister(){};
        ~EntityRegister(){};

        //TODO: fix this
        map<string, GameObject*> entityMap;

        void initializeMap(){
            entityMap = {{player.getName(), &player}};
        }
    private:
        Player player = Player();
};

#endif