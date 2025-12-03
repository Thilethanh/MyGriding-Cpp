//
//
#include<iostream>
#include<limits>
using namespace std;



int main(){


	cout << "Character: " << sizeof(char) << "byte" << endl;
	cout << "Char Min value: " << numeric_limits <char>:: min() << endl;
	cout << "Char Max value: " << numeric_limits <char>:: max() << endl;

	cout << endl;
	cout << "Integer " << sizeof(int) << "byte"<< endl;
	cout << "Integer Min value: " << numeric_limits <int>:: min() << endl;
	cout << "Integer Max value: " << numeric_limits <int>:: max() << endl;
	
	cout << endl;
	cout << "Float " << sizeof(float) << "byte" << endl;
	cout << "Float Min value: " << numeric_limits <float>:: min() << endl;
	cout << "Float Max value: " << numeric_limits <float>:: max() << endl;

	cout << endl;
	cout << "Double " << sizeof(double)<< "byte" << endl;
	cout << "Double Min value: " << numeric_limits <double>:: min() << endl;
	cout << "Double Max value: " << numeric_limits <double>:: max() << endl;




	return 0;
}

