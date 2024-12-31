#include "functions.h"

namespace cpptutor {

int plusFunc(int no1, int no2) {
  cout << "plusFunc 1 invoked" << endl;
  return no1 + no2;
}

float plusFunc(float no1, float no2) {
  cout << "plusFunc 2 invoked" << endl;
  return no1 + no2;
}

double plusFunc(int no1, double no2) {
  cout << "plusFunc 3 invoked" << endl;
  return no1 + no2;
}

} // namespace cpptutor
