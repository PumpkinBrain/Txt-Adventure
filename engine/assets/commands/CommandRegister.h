#ifndef CommandRegister_H
#define CommandRegister_H

#include <map>
#include <memory>
#include "../../components/Command.h"
#include "Hi.h"
#include "Check.h"

using namespace std;

class CommandRegister{
    public:
        CommandRegister(){}
        ~CommandRegister(){}

        map<string, Command*> commandMap = {{hi.getName(), &hi},
					                        {check.getName(), &check}};        
    private:
        Hi hi = Hi();
	    Check check = Check();
};

#endif
