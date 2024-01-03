#ifndef JsonHandler_H
#define JsonHandler_H

#include <string>

using namespace std;

class JsonHandler {
    public:
        JsonHandler(string category, string name) :
            category(category),
            name(name)
        {};
        ~JsonHandler(){};

        string getDescription(string condition);
        
    private:
        string category, name;
};

#endif