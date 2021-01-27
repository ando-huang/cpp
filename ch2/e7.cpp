#include <iostream>
#include <assert.h>

int main(){
    const int max = 10;
    char c;
    int digit, index;
    int buffer[max];

    cout << "Innput a digit and an index: ";
    cin >> c >> index;

    assert(c >= '0' && c <= '9');
    digit = c-'0';

    assert(index >= 0 && index < max);
    buffer[index] = digit;
    return 0;
}
