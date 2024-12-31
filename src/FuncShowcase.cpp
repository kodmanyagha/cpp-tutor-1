#include "FuncShowcase.h"

namespace cpptutor {

void FuncShowcase::defaultParamShowcase(string name) {
  cout << "Name: " << name << endl;
}

void FuncShowcase::swapNumbers(int &no1, int &no2) {
  int tmp = no1;
  no1 = no2;
  no2 = tmp;
}

void FuncShowcase::modifyStr(string &str) { str += " World"; }

void FuncShowcase::passArray(int numbers[5]) {
  for (int i = 0; i < 5; i++) {
    cout << "i: " << i << " , val: " << numbers[i] << endl;
  }
}

} // namespace cpptutor
