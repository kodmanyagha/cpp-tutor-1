#include "User.h"

namespace cpptutor::classes {

User::User(string firstname, string lastname) {
  this->firstname = firstname;
  this->lastname = lastname;
}

User *User::setFirstname(string firstname) {
  this->firstname = firstname;
  return this;
}

string User::getFirstname() { return this->firstname; }

User *User::setLastname(string lastname) {
  this->lastname = lastname;
  return this;
}

string User::getLastname() { return this->lastname; }

} // namespace cpptutor::classes
