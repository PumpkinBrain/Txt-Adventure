#include <iostream>
#include <string>
#include <map>
#include "GameEngine.h"

using namespace std;
using command = void (*)();

bool isRunning = true;

GameEngine::~GameEngine(){}

void GameEngine::gameLoop(){
    cout<< "IM ALIVEEE\n";
    while(isRunning){
        string st;
        cin>>st;
        GameEngine::call(st);
    }
}