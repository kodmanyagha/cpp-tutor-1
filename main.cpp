#include <stdio.h>

#include "main.h"
#include "src/DataTypesTutor.h"
#include "src/FuncShowcase.h"
#include "src/PtrTutor.h"
#include "src/classes/User.h"
#include "src/file_system/FileSystemManager.h"
#include "src/functions.h"

using namespace std;
using namespace cpptutor;

int main() {
  DataTypesTutor my_obj_1;

  my_obj_1.age = 10;
  my_obj_1.name = "ismail hakki";
  my_obj_1.printName();

  DataTypesTutor my_obj_2;
  my_obj_1.setCc("1234 5678 1234 1234", 111, 2024, 11);
  cout << "My credit card info: " << my_obj_1.getCc() << endl;

  PtrTutor ptrTutor;
  ptrTutor.printMemoryAddress();
  ptrTutor.arrayShowcase();
  ptrTutor.structShowcase();
  ptrTutor.enumShowcase();
  ptrTutor.pointerShowcase();

  FuncShowcase funcShowcase;
  funcShowcase.defaultParamShowcase();
  funcShowcase.defaultParamShowcase("Bugra");

  int no1 = 10;
  int no2 = 20;
  funcShowcase.swapNumbers(no1, no2);
  cout << "no1: " << no1 << " , no2: " << no2 << endl;

  string myStr = "Hello";
  funcShowcase.modifyStr(myStr);
  cout << "myStr: " << myStr << endl;

  int numbers1[3] = {3, 77, 22};
  funcShowcase.passArray(numbers1);

  int numbers2[5] = {44, 55, 2, 6, 4};
  funcShowcase.passArray(numbers2);

  cout << "plusFunc result: " << plusFunc(10, 20) << endl;
  cout << "plusFunc result: " << plusFunc(10.0f, 20.0f) << endl;
  cout << "plusFunc result: " << plusFunc(10, 20.2) << endl;

  classes::User user1("John", "Doe");
  classes::User user2("Jane", "Foo");

  user1.setFirstname("Johnny")->setLastname("Cage");

  cout << "User 1 Firstname: " << user1.getFirstname() << endl;
  cout << "User 1 Lastname: " << user1.getLastname() << endl;

  file_system ::FileSystemManager manager("test");
  manager.write("test");

  return 0;
}
