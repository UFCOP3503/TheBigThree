//
// Created by Cruz Castro, Laura M on 9/19/22.
//
#include <string>

#pragma once
class Employee {
private:
    int years_;
    float salary_;

public:
    std::string name_;
    // Our three constructors
    Employee();
    Employee(std::string name, int years, float salary);
    //TODO: complete copy constructor

    //TODO: complete copy assignment

    //TODO: complete destructor

    //Other class non-special functions
    float getYears();
    void Senior();
    void setOneMoreYear();

};



