#include <cstddef>
#include <memory>
#pragma once
#include "student.hpp"
#include <vector>

class studenList {

  std::vector<std::unique_ptr<Student>> studentlist_{};

public:
  void addStudent();
};