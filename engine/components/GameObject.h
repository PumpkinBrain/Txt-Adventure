#ifndef GameObject_H
#define GameObject_H

#include <map>
#include <string>
#include "../util/JsonHandler.h"

using namespace std;

class GameObject{
    public:
        GameObject(JsonHandler handler) : 
            jsonHandler(handler)
        {};

        JsonHandler jsonHandler;

        virtual string getDescription(){return "a";}
        virtual string getName() = 0;
        
    private:
};

#endif