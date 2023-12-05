#ifndef Command_H
#define Command_H

#include "GameObject.h"

class Command {
    public:
        Command(){};
        ~Command(){};
        virtual void execute(GameObject comp);
};

#endif