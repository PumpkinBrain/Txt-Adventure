#include <iostream>
#include <string>
#include <map>
#include "GameEngine.h"

using namespace std;

bool isRunning = true;

void GameEngine::gameLoop(){
    cout<< "IM ALIVEEE\n";
    while(isRunning){
        string st;
        cin>>st;
        GameEngine::call(st);
    }
}