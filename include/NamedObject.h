#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>


// *****************************************************************************
class NamedObject {
protected:
  string        name;

public:
  NamedObject() {}
  NamedObject(const string& bName) :
    name(bName) {}
  
  friend class  boost::serialization::access;
  
  template <typename Archive>
  void serialize(Archive &ar,
                 const unsigned int version) {
    ar & name;
  }  
  
  void setName(const string& bName);
  const string& getName() const;

  virtual void print() const = 0;
  virtual void store(boost::archive::text_oarchive& oa);
  virtual void restore(boost::archive::text_iarchive& oa);
};


