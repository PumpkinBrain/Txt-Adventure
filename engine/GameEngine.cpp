#include <iostream>
#include <string>
#include <map>
#include "GameEngine.h"

using namespace std;
using command = void (*)();

void hi(){cout<<"hi!!";}



void call(string txt){
    map<string, command> myMap;
    myMap["hello"] = hi;

    command c = myMap[txt];
    (*c)();
}

GameEngine::GameEngine(){}
GameEngine::~GameEngine(){}

void GameEngine::gameLoop(){
    cout<< "IM ALIVEEE";
    string st;
    cin>>st;
    call(st);
}