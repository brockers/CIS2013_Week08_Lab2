#include <iostream>
using namespace std;

int main(){
	
	char numbers[10][10];
	
	for(int x=0; x<10; x++){
		for( int y=0; y<10; y++){
			numbers[x][y] = '~';
		}
	}
	
	cout << endl << "       0 1 2 3 4 5 6 7 8 9" << endl;
	cout        <<  "       ____________________" << endl;
	
	for(int x=0; x<10; x++){
		cout << "    " << x << " | ";
		for( int y=0; y<10; y++){
			cout << numbers[x][y] << " ";
		}
		cout << endl;
	}
	
	return 0;
}