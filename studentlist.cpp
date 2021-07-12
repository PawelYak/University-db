#include "studentlist.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

class List {

  std::vector<Student *> list_{};

public:
  void addStudent(Student *student) { list_.push_back(student); }

  void printList() {
    for (const auto &student : list_) {
      std::cout << student->getName() << ' ' << student->getSurname() << '\n';
    }
  }

  Student *findSurname(std::string surname) {
    for (auto student : list_) {
      if (student->getSurname() == surname) {
        std::cout << student->getSurname() << '\n';
        return student;
      }
    }
     std::cout << "Not found" << '\n';
      return nullptr;
  }
};