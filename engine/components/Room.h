#ifndef Room_H
#define Room_H
    
#include <list>
#include <map>
#include <string>
#include <iostream>
#include "GameObject.h"

using namespace std;

class Room : public GameObject{
    public:
        Room(string description, string name): 
            GameObject(description, name)
            {};
        ~Room() = default;
};

#endif