#include "engine/GameEngine.h"

#include <iostream>
#include <map>
#include <string>

using namespace std;
using command = void (*)();

void aaa(){cout<<"aaaaaa\n";}

int main(){
    map<string, command> myMap;
    myMap["a"] = aaa;
    GameEngine engine(myMap);
    engine.gameLoop();
}