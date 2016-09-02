#include "base.h"

// *****************************************************************************
void Student::print() const {
  cout << "Name:         " << name << endl; 
  cout << "Addresse:     " << CompleteAddress << endl; 
  if( Gender == 'f' || Gender == 'F' ) 
    cout << "Gender:       Female" << endl; 
  else if( Gender == 'm' || Gender == 'M' ) 
    cout << "Gender:       Male" << endl; 
  else 
    cout << "Gender:       Unknown" << endl; 
  
  cout << "Age:          " << Age << endl; 
  cout << "Scholarship:  "; 
  
  if( HasScholarship) 
    cout << "YES" << endl;
  else 
    cout << "NO" << endl;
  cout << "\n";
}

