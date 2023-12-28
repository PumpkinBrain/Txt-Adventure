#include <iostream>
#include <string>
#include <map>
#include "GameEngine.h"
#include "assets/commands/CommandRegister.h"
#include "assets/entities/EntityRegister.h"
#include "util/JsonHandler.h"

using namespace std;

bool isRunning = true;

void GameEngine::gameLoop(){
    CommandRegister commandRegister = CommandRegister();
    EntityRegister entityRegister = EntityRegister();
    while(isRunning){
        string input, command, target;
        getline(cin, input);

        //TODO: make substring out of input, separating into command and target
            //command will be to retrieve the command from commandRegister;
            //target will be to retrieve GameObject from entityRegister;
        commandRegister.commandMap[input]->execute(nullptr);
    }
}