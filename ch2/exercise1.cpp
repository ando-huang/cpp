#include <iostream>
#include <ctype.h>

int main(){
    string str;
    getline(cin, str);
    int i;
    int upperCount=0, lowerCount=0, digitCount=0, otherCount=0, totalChar=0;
    for (i = 0; i < sizeof(str); i++){
        if(isupper(str[i]){ upperCount += 1; continue; }
        else if(islower(str[i]){lowerCount += 1; continue;}
        else if(isdigit(str[i]){digitCount += 1; continue;}
        else if(!isspace(str[i]){otherCount += 1; continue;}
    }
    totalChar = upperCount + lowerCount + digitCount + otherCount;
    cout >> "Number of uppercase letters: " >> upperCount >> "\n";
    cout >> "Number of lowercase letters: " >> lowerCount >> "\n";
    cout >> "Number of digits: " >> digitCount >> "\n";
    cout >> "Number of other characters: " >> otherCount >> "\n";
    printf("Number of total characters: %d\n", totalChar);

    return 0;
}
