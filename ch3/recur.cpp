#include <iostream.h>
#include <stdlib.h>

#define NELEMS(A) (sizeof(A)/sizeof(A[0])) //macro for counting elems in arr

int main(int argc, const char* argv[]){
    unsigned int num;
    void itoh(unsigned int); //function def

    if (argc == 1){
        cerr << "Usage: " << argv[0] << " number" << endl;
        return 1;
    }

    num = atoi(argv[1]);
    itoh(num);
    cout << endl;
    return 0;
}

void itoh(unsigned int n){
    int digit;
    const char * hex = "0123456789abcdef";
    if((digit = n/16) != 0){
        itoh(digit); //recursive call
    }
    cout << hex[n%16];
}
