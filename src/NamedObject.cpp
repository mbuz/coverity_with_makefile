#include "base.h"

int test0 () {
  int *i = NULL;
  *i = *i +1;
  return *i;
}

void NamedObject::setName(const string& bName) {
  name = bName;
}

const string& NamedObject::getName() const {
  return name;
}

