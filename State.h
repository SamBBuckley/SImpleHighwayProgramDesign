#include <iostream>
#include <string>

using std::string;

class State {

public:
    //Big three
    State(const State& state);
    State& operator=(const State& state);
    ~State();
    //Constructors
    State();
    State(int id, string name);

    //Functions
    int getId();
    string getName();

private:
    int id;
    string name;

};

State* loadStatesFromFile(string filename);