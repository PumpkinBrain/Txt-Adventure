#include "GameEngine.h"

#include <iostream>
#include <string>
#include <map>
#include "assets/commands/CommandRegister.h"
#include "assets/entities/EntityRegister.h"
#include "util/JsonHandler.h"
#include "util/StringSeparator.h"

using namespace std;

bool isRunning = true;

void GameEngine::gameLoop(){
    CommandRegister commandRegister = CommandRegister();
    EntityRegister entityRegister = EntityRegister();
    StringSeparator stringSeparator = StringSeparator();

    while(isRunning){
        map<string, string> inputMapping;
        getline(cin, inputMapping["input"]);
        
        //TODO: pass target from inputMapping as execute param and:
            //make it deal with an empty string
        inputMapping = stringSeparator.separateString(&inputMapping["input"]);
        commandRegister.commandMap[inputMapping["command"]]->
            execute(entityRegister.entityMap[inputMapping["target"]]);
    }
}