#include <iostream>
#include <vector>
using namespace std;

int main(void){

	int t,input;
	vector <bool> result;
	
	cin>>t;

	for(int i=0;i<t;i++){
		cin>>input;
		while(input!=1){
			result.push_back(input%2);
			input/=2;
		}
		result.push_back(input);

		for(int j=0;j<result.size();j++){
			if(result[j]) cout<<j<<' ';
		}
		cout<<'\n';
		result.clear();
	}
	//1101
	//0123
	//3210

	return 0;
}
