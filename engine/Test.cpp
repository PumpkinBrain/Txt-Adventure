/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cpplite/CPPTemplate.cpp to edit this template
 */
#include <iostream>
#include<string>
#include "Test.h"

using namespace std;

Test::Test(const string text):
    text(text){}

Test::~Test(){}

void Test::printOut(){
    cout << text;
}