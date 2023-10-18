#include <iostream>
using namespace std;
bool sameNumbers(int num1,int num2,int num3);
int main(){
	int num1, num2, num3, greatest;
	
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "Enter the third number: ";
	cin >> num3;
	cout << sameNumbers(num1,num2,num3);
}
bool sameNumbers(int num1,int num2,int num3){
	if ((num1 == num2) && (num2 == num3) && (num1 == num3)){
		return true;
	}
	else{
		return false;
	}
}
