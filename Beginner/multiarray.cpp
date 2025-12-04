//
//
#include<iostream>
using namespace std;



int main(){

	int arry2D[2][2] = {
		{0,1},
		{2,3}
	};
	
/*
	int array3D[2][2][2] = {
		{
			{0,1},
			{2,3}
		},
		{
			{4,5},
			{6,7}
		}
	};
*/
	int array3D[2][2][2];
	
	int value = 0;
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			for( int k=0; k<2; k++){
				array3D[i][j][k] = value;
				value++;
			}
		}
	}



	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			for( int k=0; k<2; k++){
				cout << array3D[i][j][k] << endl;
			}
		}
	}


	return 0;
}

