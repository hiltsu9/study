#include <iostream>
#include <limits.h>
using namespace std;

int main(void){
	int sum=0,min=INT_MAX;
	int input;
	for(int i=0;i<7;i++){
		cin>>input;

		if(input%2==1){
			sum+=input;
			if(min>input) min=input;
		}
	}
	
	if(sum) cout<<sum<<'\n'<<min;
	else cout<<-1;
	return 0;
}
