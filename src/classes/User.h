#include <iostream>

using namespace std;

namespace cpptutor::classes {

class User {
public:
  string firstname;
  string lastname;
  string username;
  string password;

  User(string firstname, string lastname);

  User *setFirstname(string firstname);
  string getFirstname();

  User *setLastname(string lastname);
  string getLastname();
};

} // namespace cpptutor::classes
