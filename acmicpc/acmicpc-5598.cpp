#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(void){
	string input;
	icin>>input;
	for(int i=0;i<input.size();i++){
		if(input[i]>='A'&&input[i]<='C') printf("%c",input[i]+('X'-'A'));
		else printf("%c",input[i]-3);
	}
	return 0;
}
