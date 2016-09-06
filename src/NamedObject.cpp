#include "base.h"

void NamedObject::setName(const string& bName) {
  name = bName;
}

const string& NamedObject::getName() const {
  return name;
}

// *****************************************************************************
void NamedObject::store(boost::archive::text_oarchive& oa) {
  oa << *this;
}

// *****************************************************************************
void NamedObject::restore(boost::archive::text_iarchive& ia) {
  ia >> *this;
}

