#ifndef GameObject_H
#define GameObject_H

#include <map>
#include <string>
#include "Command.h"

using namespace std;

class GameObject{
    public:
        GameObject(string description, string name) : 
            description(description),
            name(name)
        {};

        virtual string getDescription(){return description;}
        string getname(){return name;}
    private:
        string description;
        string name;
};

#endif