#include <iostream>
using namespace std;

int main(void){
	int month_len[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	char day_of_week[7][4]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
	
	int x,y;
	cin>>x>>y;
	
	for(int i=0;i<x;i++){
		+=month_len[i];
	}
	result%=7;

	cout<<day_of_week[result];

	return 0;
}
	
