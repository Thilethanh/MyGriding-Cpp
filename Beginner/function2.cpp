//
//
#include<iostream>
using namespace std;
// Functions Prototypes / Declarations
// Put them infront of the main() to tell compiler its existance

void func1();
int func2();
float sum(float, float);

int main(){

	func1();
	func2();
	float mainSum = sum(1.0 , 2.0);
	cout << mainSum << endl;


	return 0;
}

void func1(){
	cout << "Hello world" << endl;

}

int func2(){
	cout << "func2" << endl;
	return 10;
}

float sum(float num1, float num2){
	float sum = num1 + num2;
	return sum;
}
