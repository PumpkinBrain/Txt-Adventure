#ifndef JsonHandler_H
#define JsonHandler_H

#include <string>

using namespace std;

class JsonHandler {
    public:
        string getDescription(string category, string name, string condition);
};

#endif