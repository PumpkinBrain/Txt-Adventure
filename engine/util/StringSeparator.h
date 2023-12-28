#ifndef StringSeparator_H
#define StringSeparator_H

#include <string>
#include <map>

using namespace std;

class StringSeparator {
    public: 
        StringSeparator(){};
        ~StringSeparator(){};

        map<string, string> separateString(string *input);
};

#endif