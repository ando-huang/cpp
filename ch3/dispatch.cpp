#include <iostream.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define NELEMS(A) (sizeof(A) / sizeof(A[0]))

struct math{
    const char* name;
    double (*pmf)(double);
};

math mtab[] = {
    "sin", sin,
    "cos", cos,
    "tan", tan,
    "sqrt", sqrt,
    "exp", exp
};

int main(int argc, const char* argv[]){
    if(argc != 3){
        cerr << "Usage: " << argv[0] << endl;
        return 1;
    }

    int mf;
    for(mf = 0; mf < NELEMS(mtab); mf++){
        if(strcmp(argv[1], mtab[mf].name == 0){
            break;
        }
    }
    if(mf == NELEMS(mtab)){
        cerr << "math_func " << argv[1] << " not found" << endl;
        return 1;
    }

    double arg = atof(argv[2]);
    cout << mtab[mf].pmf(arg) << endl;
    return 0;
}


