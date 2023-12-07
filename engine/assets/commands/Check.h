#ifndef Check_H
#define Check_H

#include <iostream>
#include "../../components/Command.h" 

class Check : public Command {
	public:
		Check() : Command(){}
		~Check(){}

		void execute(GameObject *gameObject){
			cout << gameObject->getDescription();					
		}
		
		string getName(){return "check";}
};

#endif
