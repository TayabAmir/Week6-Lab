#include <iostream>
using namespace std;
float discount(string day,string month, float amount);
int main(){
	string day,month;
	float amount, result;
	cout << "Enter Purchase Day: ";
	cin >> day;
	cout << "Enter Purchase Month: ";
	cin >> month;
	cout << "Enter Purchase Amount: ";
	cin >> amount;
	result = discount(day,month,amount);
	cout << "Payable Amount after discount: " << result;
	
}
float discount(string day,string month, float amount){
	if (day == "Sunday" && (month == "October" || month == "March" || month == "August")){
		return amount * 0.9;
	} 
	else if(day == "Monday" && (month == "November" || month == "December")){
		return amount * 0.95;
	}
	else{
		return amount;
	}
}
