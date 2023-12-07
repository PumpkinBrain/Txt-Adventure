#ifndef Hi_H
#define Hi_H

#include <iostream>
#include "../../components/Command.h"

class Hi : public Command {
    public:
        Hi() : Command(){}
        ~Hi(){}

        void execute(GameObject *gameObject) override {
            cout<<"HELLO WORLD\n";
        }

        string getName() override {return "hello";}
};

#endif