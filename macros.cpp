#include <iostream>
using namespace std;

#define PI 3.14  //macro is pre-compiler, use as global constant/ simple function
#define CIRC(d) (PI*d)


//another way to use macro
/*
#ifdef

#endif


#ifndef 

#endif

*/

int main(){

	cout << "Enter a diameter: " << endl;

	int d;
	cin >> d;

	float circumference = CIRC(d);
	cout << circumference << endl;


return 0;
}
