#include "StringSeparator.h"

map<string,string> StringSeparator::separateString(string *input){
    map<string,string> stringMap;
    bool isFirst = true;

    for(int i = 0; i < input->length(); i++){
        switch(input->at(i)){
            case ' ':
                isFirst = false;
                break;
            default:
                isFirst ? stringMap["command"] += input->at(i) : 
                    stringMap["target"] += input->at(i);
                break;
        }
    }
    return stringMap;
}