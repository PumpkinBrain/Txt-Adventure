#include <iostream>
#include <string>
#include <map>
#include "GameEngine.h"
#include "assets/commands/CommandRegister.h"
#include "util/JsonHandler.h"

using namespace std;

bool isRunning = true;

void GameEngine::gameLoop(){
    CommandRegister cr = CommandRegister();
    JsonHandler jh = JsonHandler();
    cout<< "IM ALIVEEE\n";
    cout<<player.currentRoom.GameObject::getDescription() + "\n";
    cr.commandMap["hello"] -> execute(nullptr);
    cr.commandMap["check"] -> execute(&player);
    cout<<jh.getDescription("rooms", "starter_room", "description");
    while(isRunning){
        string st;
        cin>>st;
    }
}