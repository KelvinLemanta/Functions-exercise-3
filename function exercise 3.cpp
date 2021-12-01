

// 137533 Kelvin Lemanta

// Function called checkEven() that receives an integer as a parameter and returns TRUE if the parameter is an even number and FALSE otherwise (if the integer odd).

#include <iostream>
using namespace std;

int checkEven(int num);

int main(){
	int n;
	
	cout<< "Input any number";
	cin>>n;
	
	if (n%2==0){
		cout<<"TRUE....the number is even.";
	}
	else{
		cout<< "FALSE....the number is odd.";
	}
	return 0;
}

