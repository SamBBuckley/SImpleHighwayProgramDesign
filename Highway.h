#include <iostream>
#include <string>
#include "City.h"

using std::string;

class Highway {

public:
    //Big three
    Highway(const Highway& hw);
    Highway& operator=(const Highway& hw);
    ~Highway();
    //Constructors
    Highway();
    Highway(int id, int citiesCrossed, int* cityIds);
    
    //Functions
    bool crossesCity(City& city);
    bool corssesCity(int cityId);
    bool withinState(State& state);
    bool withinState(int stateId);

private:
    int id;
    int citiesCrossed;
    int* cityIds;

};

Highway* loadHighwaysFromFile(string filename);