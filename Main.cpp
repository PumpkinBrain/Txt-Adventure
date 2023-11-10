#include "engine/GameEngine.h"
#include "engine/components/Room.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;
using command = void (*)();

void look(){
    Room room = Room({}, "The room is filled with dead bodies and it stinks of blood", "The room");
    cout<<"you are in " + room.getName() << endl;
    cout<<room.getDescription()<<endl;
}

int main(){
    map<string, command> myMap;
    myMap["look"] = look;
    GameEngine engine(myMap);
    engine.gameLoop();
}