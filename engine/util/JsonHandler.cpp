#include "JsonHandler.h"
#include "../lib/json/json.h"
#include <fstream>
#include <iostream>
#include <filesystem>

using namespace std;

string JsonHandler::getDescription (string condition){
    
    ifstream jsonStream ("engine/assets/descriptions.json");
    Json::Value root;
    Json::Reader reader;

    if(!jsonStream) {
        cerr << "não foi possivel ler arquivo!" <<endl;
    } else {
        reader.parse(jsonStream, root); 
    }
        return root[category][name][condition].asString();
}