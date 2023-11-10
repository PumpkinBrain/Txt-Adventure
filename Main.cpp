#include "engine/GameEngine.h"
#include "engine/assets/Assets.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;
using command = void (*)();

int main(){
    Player player = initialize();
    GameEngine engine(player.commandList);
    engine.gameLoop();
}