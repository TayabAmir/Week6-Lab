#include <iostream>
using namespace std;
string personalTitle(float age, char gender);
int main(){
	float age;
	string result;
	char gender;
	cout << "Enter your age: ";
	cin >> age;
	cout << "Enter your gender (m/f): ";
	cin >> gender;
	result = personalTitle(age,gender);
	cout << "Your personal title is: " << result;
}

string personalTitle(float age, char gender){	
	if (age < 16 && gender == 'm'){
		return "Master";
	}
	if (age >= 16 && gender == 'm'){
		return "Mr.";
	}
	if (age < 16 && gender == 'f'){
		return "Miss";
	}
	if (age >= 16 && gender == 'f'){
		return "Ms.";
	}
}
