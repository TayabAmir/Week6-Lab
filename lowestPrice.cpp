#include <iostream>
using namespace std;
float lowestPrice(int km, string period);
int main(){
	int km;
	float result;
	string period;
	cout << "Enter the number of kilometers: ";
	cin >> km;
	cout << "Enter the period of the day (day/night): ";
	cin >> period;
	result = lowestPrice(km, period);
	cout << "Lowest price for " << km << " kilometers: " << result << " EUR";
}
float lowestPrice(int km, string period){
	
	if (km < 20 && period == "day"){
		return 0.70 + (km * 0.79);
	}
	if (km < 20 && period == "night"){
		return 0.70 + (km * 0.90);
	}
	if (km >= 20 && km < 100 ){
		return km * 0.09;
	}
    if (km >= 100 ){
		return km * 0.06;
	}	
}
