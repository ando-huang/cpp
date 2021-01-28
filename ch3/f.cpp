#include <iostream.h>
#include <stdlib.h>

float f(float); //doesn't need param var name in declaration

int main(int argc, const char* argv[]){
    void g(float *); //declares new function g with floatptr arg

    if(argc != 2){
        cerr << "Usage: " << argv[0] << " number\n";
        return 1;
    }

    float m = atof(argv[1]);

    m = f(m); //executes f on m

    cout << m << endl;

    g(&m); //recall g() returns float
    cout << m << endl;
    return 0;
}

float f(float val){ //needs param var name now
    return val + 2; 
}

void g(float *pf){ //no return value needed
    *pf += 2;      //modifies the pointer by dereferencing
}
