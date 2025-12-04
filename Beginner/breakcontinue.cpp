//
//
#include<iostream>
using namespace std;



int main(){
	
	cout << "break" << endl;

	int num = 100;
	
	for(int j = 0; j < 2; j++){
		for(int i = 0; i <= num; i++){
			if(i % 2 != 0){
				break;
			}
			cout << i << endl;
		}
	}

	cout << "continue" << endl;

	int i = 0;

	while(true) {
		cout << i++ << endl;

		if(i == 5){
			goto finished;
		}
	}

	finished:

	return 0;
}

