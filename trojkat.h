#ifndef trojkat_h


#define trojkat_h
#include <iostream>
#include <math.h>

using namespace std;

struct Punkt{
float x;
float y;
};

struct Trojkat{
Punkt A;
Punkt B;
Punkt C;
};

float PoleTrojkata(Trojkat ABC);



#endif // trojkat_h
