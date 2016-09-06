
// *****************************************************************************
class Student : public NamedObject {
private: 
  string        CompleteAddress;
  char          Gender;
  unsigned      Age;
  bool          HasScholarship;
  

public:

  Student() :
    Gender('U'),
    Age(0),
    HasScholarship(false) {}
  
  Student(const string& sName,
          const string& completeAddresse,
          char gender,
          unsigned age,
          bool hasscholarship) :
    NamedObject(sName),
    CompleteAddress(completeAddresse),
    Gender(gender),
    Age(age),
    HasScholarship(hasscholarship)
    {}

  template <typename Archive>
  void serialize(Archive &ar,
                 const unsigned int version) {
    ar & boost::serialization::base_object<NamedObject>(*this);
    ar & CompleteAddress;
    ar & Gender;
    ar & Age;
    ar & HasScholarship;
  }
  virtual void print() const;
};

