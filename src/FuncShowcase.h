#include <iostream>

using namespace std;

namespace cpptutor {

class FuncShowcase {
public:
  void defaultParamShowcase(string name = "Emir");
  void swapNumbers(int &no1, int &no2);
  void modifyStr(string &str);
  void passArray(int numbers[]);
};

} // namespace cpptutor
