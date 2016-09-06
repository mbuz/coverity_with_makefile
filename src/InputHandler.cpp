
#include "base.h"

// *****************************************************************************
int InputHandler::ask(const string& question) {
  do {
    cout << question << ":" << endl;
    cin >> input;

  } while (input.empty());

  return 0;
}

// *****************************************************************************
int YesNoHandler::ask(const string& question) {

  do {
    cout << question;
    cout << " (Yes [y], No [N]): ";
    cin >> input;

  } while (input != "y" && input != "n");

  if (input == "y") {
    return 1;
  }
  return 0;
}
