//
//
#include<iostream>
using namespace std;

// scope is defined inside the curly bracket { }
// ther is different scope and level
//
// Global scope
int num = 3;

int main(){
	

	// Local scope
	int num = 1;

	if (true){
		int num = 2;
		cout << ::num << endl;
		// :: tell the program to print the gobal scope
		// output = 3
	}


	return 0;
}

