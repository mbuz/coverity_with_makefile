
// *****************************************************************************
class InputHandler {
protected:
  string input;

public:
                      InputHandler() {}
  const string&       get() const {return input;}
  virtual int         ask(const string& question);
};

// *****************************************************************************
class YesNoHandler : public InputHandler {
public:
                      YesNoHandler() {}
  virtual int         ask(const string& question);
};
