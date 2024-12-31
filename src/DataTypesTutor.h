#pragma once

#include <iostream>
#include <string>

using namespace std;

namespace cpptutor {

class DataTypesTutor {
public:
  int age;
  string name;
  void printName();
  void setCc(string ccNo, uint16_t ccSecret, uint16_t ccYear, uint8_t ccMonth);
  string getCc();

private:
  string ccNo;
  uint16_t ccSecret;
  uint16_t ccYear;
  uint8_t ccMonth;
};

} // namespace cpptutor
