#include <iostream>
#include <vector>
#include <float.h> // define the max, min value of real number

using namespace std;
int main(void){
	vector <double> input;
	int n;
	double grade;
	double max=DBL_MIN;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>> grade;
		input.push_back(grade);
		if(max<grade)max=grade;
	}

	grade=0;
	for(int i=0;i<input.size();i++){
		input[i]=input[i]/max*100;
		grade+=input[i];
	}

	cout<<grade/n;
}
