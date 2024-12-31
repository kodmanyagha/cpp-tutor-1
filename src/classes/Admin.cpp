#include "Admin.h"

namespace cpptutor::classes {

Admin *Admin::addRole(string role) {
  this->roles.push_back(role);
  return this;
}

} // namespace cpptutor::classes
