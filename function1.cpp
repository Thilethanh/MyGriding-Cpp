// Example of Function with Parameters
//
#include<iostream>
using namespace std;

float sum( float num1, float num2){
	float sum = num1 + num2;
	return sum;
}

int main(){
	float mainSum = sum(1.0 , 2.0);
	cout << mainSum << endl;




	return 0;
}

