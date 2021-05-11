#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(void){
        char caiser[26]={'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W'};
        string input;
        cin>>input;
        for(int i=0;i<input.size();i++){
                printf("%c",caiser[input[i]-'A']);
        }
        return 0;
}
