//
//
#include<iostream>
using namespace std;



int main(){

	//General format
	//<datatype> <array_name> [size_of_array] = { <initialize elements>}
	int array[] = {1, 2, 3, 4 ,5, 6, 7, 8, 9, 10};

	//sizeof() return size in byte => calculate the size of array by divide by the size of 1 element.
	for ( int i = 0; i < sizeof(array)/sizeof(array[0]); i++ )
	{
		cout << array[i] << endl;	
	}

	cout << endl;
	cout << " Modern syntax" << endl;

	for (int x : array)
		cout << x << endl;

	return 0;
}

