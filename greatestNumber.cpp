#include <iostream>
using namespace std;
int greatestNumber(int num1, int num2, int num3);
int main(){
	int num1, num2, num3, greatest;
	
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "Enter the third number: ";
	cin >> num3;
	
	greatest = greatestNumber(num1,num2,num3);
	cout << "The greatest number among " << num1 << ", " << num2 << ", and " << num3 << " is: " << greatest;
	
}
int greatestNumber(int num1, int num2, int num3){
	
	if (num1 > num2 && num1 > num3){
		return num1;
	}
	if (num1 > num2 && num1 < num3){
		return num3;
	}
	if (num1 < num2 && num2 > num3){
		return num2;
	}
	
}
