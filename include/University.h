// *****************************************************************************
class University : public NamedObject {
private:
  int    capacity;
  int    occPlaces;

  list<Student> student_list;
  

public:
  University(int   cap) :
    capacity(cap),
    occPlaces(0) {}

  University(const string& uniName,
             int   cap) :
    NamedObject(uniName),
    capacity(cap),
    occPlaces(0) {}
  
  void addStudent(Student& s);
  
  template <typename Archive>
  void serialize(Archive &ar,
                 const unsigned int version) {
    ar & boost::serialization::base_object<NamedObject>(*this);
    ar & capacity;
    ar & occPlaces;
  }
  
  virtual void print() const;
  virtual void store(boost::archive::text_oarchive& oa);
  virtual void restore(boost::archive::text_iarchive& oa);
};


