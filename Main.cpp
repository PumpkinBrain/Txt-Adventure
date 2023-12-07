#include "engine/GameEngine.h"
#include "engine/assets/entities/PlayerCharacter.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    PlayerCharacter chara = PlayerCharacter();
    GameEngine engine(chara.playerChar);
    engine.gameLoop();
}