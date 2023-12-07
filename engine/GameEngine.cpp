#include <iostream>
#include <string>
#include <map>
#include "GameEngine.h"
#include "assets/commands/CommandRegister.h"

using namespace std;

bool isRunning = true;

void GameEngine::gameLoop(){
    CommandRegister cr = CommandRegister();
    cout<< "IM ALIVEEE\n";
    cout<<player.currentRoom.GameObject::getDescription() + "\n";
    cr.commandMap["hello"]->execute(nullptr);
    while(isRunning){
        string st;
        cin>>st;
    }
}