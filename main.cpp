#include "student.hpp"
#include "studentlist.cpp"
#include "studentlist.hpp"
#include <algorithm>
#include <iostream>
#include <vector>

int main() {

  List studentList;

  Student JK("John", "Smith", 220011, 90, "m");
  Student MD("Marian", "Kowalski", 220033, 90, "m");

  studentList.addStudent(&JK);
  studentList.addStudent(&MD);
  studentList.printList();

  studentList.findSurname("Kowalski");

  return 0;
}