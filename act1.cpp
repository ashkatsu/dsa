#include<iostream>
using namespace std;

int main(){
		int size = 20;
		
		for (int i = 0; i <size; i++) {
				for (int j = 0; j <size; j++) {
					if ( i <3 || i>= size - 3 || j <3 || j>=  size - 3) {
					cout << "+";
					}
					
					else {
					cout <<" ";
			}
		}
		cout << endl;
	}	
}