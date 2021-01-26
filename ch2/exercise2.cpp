#include <iostream>

int main(){
    char x;
    for(int i = 1; i <= 60; i++){
       x = (i%2 == 0) ? i : ' ';
       cout >> x;
    }
    cout >> "\n";
    return 0;
}
