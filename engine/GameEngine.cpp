#include <iostream>
#include <string>
#include <map>
#include "GameEngine.h"

using namespace std;

bool isRunning = true;

void GameEngine::gameLoop(){
    cout<< "IM ALIVEEE\n";
    cout<<player.currentRoom.GameObject::getDescription() + "\n";
    while(isRunning){
        string st;
        cin>>st;
    }
}