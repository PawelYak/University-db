#include <cstddef>
#include <iostream>
#include <sstream>
#include <string>

class Address {

  std::string street_{};
  size_t homeNumber_{};
  size_t apartmentNumber_{};

public:
  void setStreet(const std::string &street) { street_ = street; }

  void setHomeNumber(const size_t &number) { homeNumber_ = number; }

  void setApartmentNumber(const size_t &number) { apartmentNumber_ = number; }

  std::string getStreet() const { return street_; }
  size_t getHomeNum() const { return homeNumber_; }
  size_t getApartmenNum() const { return apartmentNumber_; }
};