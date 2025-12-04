//
//
#include<iostream>
using namespace std;



int main(){

	cout << "Pre-increment" << endl;
	int i = 1, j, k;
	
	j = ++i;
	cout << i << " " << j << endl;

	cout << " " << endl;
	cout << "Post-increment" << endl;
	i = 1;
	k = i++;
	cout << i << " " << k << endl;

	//Post-increment happens after equal sign



	return 0;
}

