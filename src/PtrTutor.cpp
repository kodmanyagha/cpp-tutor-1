#include "PtrTutor.h"
#include <stdio.h>
#include <vector>

using namespace std;

namespace cpptutor {

void PtrTutor::printMemoryAddress() {
  int b = 15;
  int *a = &b;
  printf("a: %p\n", a);
  printf("b: %d\n", b);
}

void PtrTutor::arrayShowcase() {
  string cars[4] = {"fiat egea", "volvo xc90", "ferrari f40", "mclaren f1"};
  cars[0] = "fiat linea";
  cout << "Cars: " << cars[0] << endl;

  for (string car : cars) {
    cout << "Current car: " << car << endl;
  }

  cout << "Array length: " << sizeof(cars) / sizeof(cars[0]) << endl;
}

void PtrTutor::vectorShowcase() {
  vector<string> students;
  students.push_back("emir");
  students.push_back("ibo");
  students.push_back("hüso");
  students.push_back("haso");
  students.push_back("gökko");
  students.push_back("yuno");

  try {
    // throw 10;
    throw "test";

  } catch (int e) {
    cout << "int exception occured: " << e << endl;
  } catch (...) {
    cout << "An error occured" << endl;
  }

  cout << "Student: " << students.at(1) << endl;
}

struct {
  int myNum;
  string myString;
} myStructure1;

////////////////////////////////////////////////////////////

struct MyDataType {
  int foo;
  string bar;
  bool baz;
};

void PtrTutor::structShowcase() {
  myStructure1.myNum = 10;
  myStructure1.myString = "test";

  MyDataType data1;
  data1.foo = 20;
  data1.bar = "bar 1";
  data1.baz = true;

  cout << "data1.foo : " << data1.foo << endl;
}

////////////////////////////////////////////////////////////

enum Level { LOW, MEDIUM, HIGH };
void PtrTutor::enumShowcase() {
  enum Level myLevel = LOW;
  myLevel = MEDIUM;

  cout << "Level: " << myLevel << endl;

  enum Level myLevel2 = LOW;

  switch (myLevel2) {
  case Level::LOW:
    cout << "Level is low" << endl;
    break;

  case Level::MEDIUM:
    cout << "Level is medium" << endl;
    break;

  case Level::HIGH:
    cout << "Level is high" << endl;
    break;

  default:
    cout << "Unknown level" << endl;
  }
}

////////////////////////////////////////////////////////////

// Pass-by-value
int square1(int n) {
  cout << "address of n in square1(): " << &n << endl;
  n *= n;
  return n;
}

// Pass-by-reference with Pointer Argument
void square2(int *n) {
  cout << "Address of n in square2(): " << n << endl;
  *n *= *n;
}

// Pass-by-reference with Reference Argument
void square3(int &n) {
  cout << "Address of n in square3(): " << &n << endl;
  n *= n;
}

void PtrTutor::pointerShowcase() {
  int n = 2;
  n = square1(n);
  cout << "1- n: " << n << endl;

  square2(&n);
  cout << "2- n: " << n << endl;

  square3(n);
  cout << "3- n: " << n << endl;
}

} // namespace cpptutor
