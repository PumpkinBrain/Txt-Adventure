#include "engine/GameEngine.h"
#include "engine/assets/Assets.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;
using command = void (*)();

int main(){
    Assets a = Assets();
    GameEngine engine(a.player.getCommands());
    engine.gameLoop();
}