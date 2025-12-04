//
//
#include<iostream>
using namespace std;

struct location {
	string city;
	string state;
	string province;
	string country;
	int zip_code;
	int latitude;
	int longtitude;
	
	void printloc(){
		cout << city << endl
		<< state << endl
		<< province << endl
		<< country << endl
		<< zip_code << endl
		<< latitude << endl
		<< longtitude << endl << endl;

	}
} loc[10];  //replace location loc[10] in main()

int main(){

	//location loc[10];
	
	for (int i = 0; i<10;i++  ){
		loc[i].city = "New York";
		loc[i].state = "New York";
		loc[i].province = "n/a!";
		loc[i].country = "USA";
		loc[i].zip_code = 555;
		loc[i].latitude = i;
		loc[i].longtitude = i+1;
	}

	for (int i=0; i<10; i++){
		loc[i].printloc();
	}
	



	return 0;
}

