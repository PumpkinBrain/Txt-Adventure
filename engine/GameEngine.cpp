#include <iostream>
#include <string>
#include <map>
#include "GameEngine.h"

using namespace std;
using command = void (*)();

bool isRunning = true;

void hi(){cout<<"hi!!\n";}
void quit(){isRunning = false;}

void call(string txt){
    map<string, command> myMap;
    myMap["hello"] = hi;
    myMap["quit"] = quit;
 
    command c = myMap[txt];
    (*c)();
}

GameEngine::GameEngine(){}
GameEngine::~GameEngine(){}

void GameEngine::gameLoop(){
    cout<< "IM ALIVEEE\n";
    while(isRunning){
        string st;
        cin>>st;
        call(st);
    }
}