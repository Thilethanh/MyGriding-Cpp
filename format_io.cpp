//
//
#include<iostream>
using namespace std;



int main(){
	
	//print out heximal value 
	//cout.flags allow to put multiple flags
	cout.flags( ios:: hex | ios::showbase );
	
	int value1, value2;

	cout << "Please putt in 2 values" << endl;

	cin >> value1;
	cin >> value2;

	cout << value1 + value2 << endl;



	return 0;
}

