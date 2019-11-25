#include <string>
#include "State.h"

using std::string;

class City {
public:
    //Big Three
    City(const City& rhs);
    City& operator=(const City& rhs);
    ~City();

    //Constructors
    City();
    City(int id, string name, State state, long pop);
    //Functions:
    int getId();
    string getName();
    State getState();
    long getPopulation();
    bool inState(State& state);
    bool inState(int stateId);

private:
    int id;
    string name;
    State state;
    long population;
};

City* loadCitiesFromFile(string filename);