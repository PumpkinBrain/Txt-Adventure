#ifndef Entity_H
#define Entity_H

#include "GameObject.h"

using namespace std;

class Entity : public GameObject {
    public:
        Entity(string name) :
            GameObject(JsonHandler("entities", name))
        {};
};

#endif