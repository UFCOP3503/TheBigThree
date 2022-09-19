//
// Created by Cruz Castro, Laura M on 9/19/22.
//
#include <iostream>
#include "Employee.h"
Employee::Employee() {
    name_ = "No name";
    years_ = 0;
    salary_ = 0;
}

Employee::Employee(std::string name, int years, float salary) {
    name_ = name;
    years_ = years;
    salary_ = salary;
}

// Here goes the copy constructor

// Here goes the copy assignment operator

//Here goes the destructor


float Employee::getYears() {
    return years_;
}

void Employee::Senior() {
    if (years_ > 10)
    {
        std::cout << "This is a senior employee" << std::endl;
    }
    else
    {
        std::cout << "This is not a senior employee" << std::endl;
    }
}

void Employee::setOneMoreYear() {
    this->years_ = years_ + 1;
}
