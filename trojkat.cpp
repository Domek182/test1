#include "trojkat.h"

float PoleTrojkata(Trojkat ABC){
    float a, b, c;
    a = sqrt(((ABC.A.x-ABC.A.x)*(ABC.B.x-ABC.A.x)+(ABC.B.y-ABC.A.y)*(ABC.B.y-ABC.A.y)));
    b = sqrt(((ABC.C.x-ABC.B.x)*(ABC.C.x-ABC.B.x)+(ABC.C.y-ABC.B.y)*(ABC.C.y-ABC.B.y)));
    c = sqrt(((ABC.C.x-ABC.A.x)*(ABC.C.x-ABC.A.x)+(ABC.C.y-ABC.A.y)*(ABC.C.y-ABC.A.y)));
    if (a+b<=c)
        if(a+c<=b)
            if(c+b<=a)
            return -1;
    return (sqrt((a+b+c)*(a+b-c)*(a-b+c)*(-a+b+c))/4);
}

