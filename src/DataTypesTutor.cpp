#include "DataTypesTutor.h"

using namespace std;

namespace cpptutor {

void DataTypesTutor::printName() {
  cout << "My name is " << this->name << endl;
}

void DataTypesTutor::setCc(string ccNo, uint16_t ccSecret, uint16_t ccYear,
                           uint8_t ccMonth) {
  this->ccNo = ccNo;
  this->ccSecret = ccSecret;
  this->ccYear = ccYear;
  this->ccMonth = ccMonth;
}

string DataTypesTutor::getCc() {
  return this->ccNo.substr(0, 4) + " #### #### ####";
}

} // namespace cpptutor
