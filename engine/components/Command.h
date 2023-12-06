#ifndef Command_H
#define Command_H

#include <string>
#include "GameObject.h"

using namespace std;

class Command {
    public:
        Command(string name) : 
            name(name)
        {};
        ~Command(){};
        //virtual void execute(GameObject gameObject);

        string getName(){return name;}
    private:
        string name;
};

#endif