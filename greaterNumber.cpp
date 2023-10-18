#include <iostream>
using namespace std;
bool greaterNumber(int num1, int num2);
int main(){
	int num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << greaterNumber(num1,num2);
}

bool greaterNumber(int num1, int num2){
	
	if (num1 > num2){
		return true;
	}
	else {
		return false;
	}
}
