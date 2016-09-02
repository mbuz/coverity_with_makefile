// *****************************************************************************
class University : public NamedObject {
private:
  int    capacity;
  int    occPlaces;

  list<Student> student_list;
  

public:
  University(int   cap) :
    capacity(cap) {}

  University(const string& uniName,
             int   cap) :
    NamedObject(uniName),
    capacity(cap),
    occPlaces(0) {}
  
  void addStudent(Student& s);
  
  virtual void print() const;
};


