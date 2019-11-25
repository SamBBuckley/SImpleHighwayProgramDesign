#include <iostream>
#include "Highway.h"

using namespace std;

int main() {
  /*
  Simple Breakdown of what the main would do.

  First: Create a State* of states.
  Second: Create a City* of cities.
  Third: Create a Highway* of highways.

  Fourth: Begin a loop asking the user what they want to do.
    I.E. User wants to list all highways
      -> Iterate through and list each Highway in the list of highways
    I.E. User wants to List all Cities
      -> Iterate through and list each City in the list of cities.
    I.E. User wants to List all States
      -> Iterate through and list each State in the list of states.
    I.E. User wants to list all cities in a given state.
      -> Iterate through and list each city within a given state using provided functions
    I.E. User wants to list all Cities a highway goes through.
      -> Iterate through the Highways Cities list to get id, then iterate through cities till you find that id then output that name ... etc.
    I.E. User wants to list all Highways in a given state.
      -> iterate through each city and check if in given state using provided functions
    This can continue on and on.
  */

  cout << "Compile and run successful"; // Check to make sure that they .h file were all good.
  return 0;
}
