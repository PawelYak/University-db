#include "student.hpp"
#include <iostream>
#include <string>

std::string Student::getName() { return Student::name_; }

std::string Student::getSurname() { return Student::surname_; }

void Student::printData() {
  std::cout << "Name: " << Student::name_ << '\n'
            << "Surname: " << surname_ << '\n'
            << "Address: " << Student::address_.getStreet() << " "
            << Student::address_.getHomeNum() << '\n'
            << "Index number: " << indexNum_ << '\n';
}