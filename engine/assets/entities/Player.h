#ifndef TestPlayer_H
#define TestPlayer_H

#include "../../components/Entity.h"

class Player : public Entity {
    public:
        Player() :
            Entity("player")
        {}
        ~Player(){}

        string getDescription() override {
            return jsonHandler.getDescription("full_health");
        }

        string getName() override {
            return "player";
        }
};

#endif