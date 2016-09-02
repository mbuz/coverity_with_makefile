

// *****************************************************************************
class NamedObject {
protected:
  string        name;

public:
  NamedObject() {}
  NamedObject(const string& bName) :
    name(bName) {}
  
  void setName(const string& bName);
  const string& getName() const;

  virtual void print() const = 0;
};


