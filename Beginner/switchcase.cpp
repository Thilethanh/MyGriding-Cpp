#include<iostream>
using namespace std;

int main (){

	char cal;
	int value1, value2;

	cout << "Enter 2 intergers: " << endl;
	cin >> value1;
	cin >> value2;
	cout << "Enter operator: "<<endl;
	cin >> cal;

	switch(cal) {
		case '*':
			cout <<value1 * value2 << endl;
			break;
		case '/':
			cout << value1 / value2 << endl;
			break;
		case '+':
			cout << value1 + value2 << endl;
			break;
		case '-':
			cout << value1 - value2 << endl;
			break;
		default:
			cout << "Unknown operator." << endl;
		}

return 0;
}
