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
        Room(string name): 
            GameObject(JsonHandler("rooms", name)),
            name(name)
        {};
        ~Room() = default;

        string getName() override {return name;}
    private:
        string name;
};

#endif