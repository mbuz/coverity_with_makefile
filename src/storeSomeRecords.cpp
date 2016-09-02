#include "base.h"

// *****************************************************************************
// Creates two strudent records and adds them to a University. Calls the 
// University store function and closes the file.
void storeSomeRecords() {
  Student one("Paula Waller",
              "824 Larson Drv, Silver Spring, MD 20910",
              'F',
              16,
              true); 
  Student two("Paul Clinton",
              "1024 Olson Blv, Goldmountain, CA 21110",
              'M',
              14,
              false); 
  
  University oneTown("OneTown University", 1300);

  oneTown.addStudent(one);
  oneTown.addStudent(two);
  oneTown.print();

  Student three("Sarah Muster",
                "567 Boring Street, Newtown, MD 20910",
                'F',
                15,
                true); 

  University secondTown(900);

  secondTown.setName("OneTown University");
  secondTown.addStudent(three);
  secondTown.print();
}

// *****************************************************************************
int main() {
  
  storeSomeRecords(); 
  cout << "-----------------" << endl;
  
  return 0;
}

