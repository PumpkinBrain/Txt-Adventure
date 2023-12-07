#ifndef CommandRegister_H
#define CommandRegister_H

#include <map>
#include <memory>
#include "../../components/Command.h"
#include "Hi.h"

using namespace std;

class CommandRegister{
    public:
        CommandRegister(){}
        ~CommandRegister(){}

        Hi hi = Hi();
        map<string, Command*> commandMap = {{hi.getName(), &hi}};        
};

#endif