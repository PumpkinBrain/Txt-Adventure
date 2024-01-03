#ifndef Command_H
#define Command_H

#include <string>
#include "GameObject.h"

using namespace std;

class Command {
    public:
        Command(){};
        ~Command(){};

        virtual void execute(GameObject *gameObject) = 0;
        virtual string getName() = 0;
};

#endif