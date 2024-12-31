#include "User.h"
#include <iostream>
#include <vector>

using namespace std;

namespace cpptutor::classes {

class Admin : public User {
public:
  vector<string> roles;
  Admin *addRole(string role);
};

} // namespace cpptutor::classes
