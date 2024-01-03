#ifndef GameObject_H
#define GameObject_H

#include <map>
#include <string>
#include "../util/JsonHandler.h"

using namespace std;

class GameObject{
    public:
        GameObject(JsonHandler handler, string name) : 
            jsonHandler(handler),
            name(name)
        {};

        JsonHandler jsonHandler;

        virtual string getDescription() = 0;
        string getName(){return name;}
    private:
        string name;
};

#endif