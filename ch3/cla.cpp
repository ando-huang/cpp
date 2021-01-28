#include <iostream.h>

/**
 *  this program takes three cl args
 *  error if not 3
 *
 *  prints out args 1,2
 *  prints out first char of args 1, 2
 */

int main(int argc, const char* argv[]){
    if(argc!=3){
        cerr << "Usage: " << argv[0] << " option filename\n;
        return 1;
    }
    cout << argv[1] << '\t' << argv[2] << endl;
    cout <, argv[1][0] << '\t' << argv[1][1] << endl;
    return 0;
}
