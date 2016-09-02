

// *****************************************************************************
class NamedObject {
protected:
  string        name;

public:
  baseObject() {}
  baseObject(const string& bName) :
    name(bName) {}
  
  
  virtual void print() const = 0;
};


