#ifndef Check_H
#define Check_H

#include <iostream>
#include "../../components/Command.h" 

class Check : public Command {
	public:
		Check() : Command(){}
		~Check(){}

		void execute(GameObject *gameObject) override {
			if(gameObject != nullptr){
				cout << gameObject->getDescription();					
			} else {
				cout << "please define target!\n";
			}
		}
		
		string getName() override {return "check";}
};

#endif
