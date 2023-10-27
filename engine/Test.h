#ifndef TEST_H
#define TEST_H

#include <string>
using namespace std;

class Test{
    public:
        Test(const string text);
        virtual ~Test();
           
        string text;

        void printOut();
};
#endif