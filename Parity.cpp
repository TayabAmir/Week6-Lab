#include <iostream>
using namespace std;
bool parityAnalysis(int number);
int main(){
	int num;
	
	cout << "Enter a 3-digit number: ";
	cin >> num;
	
	cout << parityAnalysis(num);
}

bool parityAnalysis(int number){
	int digit1, digit2, digit3, sum;
	
	digit1 = number / 100;
	digit2 = (number / 10) % 10;
	digit3 = number % 10;
	
	sum = digit1 + digit2 + digit3;
	
	if (number%2==0 && sum%2 == 0){
		return true;
	}
	else if(number%2==1 && sum%2==1){
		return true;
	}
	else{
		return false;
	}
}
