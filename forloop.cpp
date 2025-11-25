//
//
#include<iostream>
using namespace std;



int main(){

	int num;
	cout << "Please enter in a number: " << endl;
	cin >> num;


	for(int i=1; i <= num; i++){
		cout << i << " ";

	}
	cout << " "<< endl;


	int sum = 0;
	for (int i = 0; i<= num; i++){
		sum += i;
	}
	cout << sum << endl;

	return 0;
}

