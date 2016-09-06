#include "base.h"


// *****************************************************************************
void University::print() const {
  cout << "Name:            " << getName() << endl; 
  cout << "Capacity:        " << capacity << endl; 
  cout << "occupied places: " << occPlaces << endl; 
  
  for (list<Student>::const_iterator it=student_list.begin(); it != student_list.end(); ++it) {
    Student s = (*it);
    s.print();
  }
}

// *****************************************************************************
void University::addStudent(Student& s) {
  if (student_list.size() >= (unsigned) capacity) {
    cerr << "University " << name << " takes no students anymore!" << endl;
  }
  student_list.push_back(s);
  occPlaces = student_list.size();
}

// *****************************************************************************
void University::store(boost::archive::text_oarchive& oa) {
  occPlaces = student_list.size();
  oa << *this;
  
  for (list<Student>::iterator it=student_list.begin(); it != student_list.end(); ++it) {
    Student s = (*it);
    oa << s;
  }
}

// *****************************************************************************
void University::restore(boost::archive::text_iarchive& ia) {
  ia >> *this;

  Student s;

  for (int i=0; i<occPlaces; i++) {
    ia >> s;
    addStudent(s);
  }
}

