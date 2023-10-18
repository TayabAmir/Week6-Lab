#include <iostream>
using namespace std;
float totalIncome(string screening, int rows, int columns);
int main(){
	string screening;
	int rows, columns;
	cout << "Enter the screening type (Premiere/Normal/Discount): ";
	cin >> screening;
	cout << "Enter the number of rows: ";
	cin >> rows;
	cout << "Enter the number of columns: ";
	cin >> columns;
	cout << totalIncome(screening, rows,columns);
}

float totalIncome(string screening, int rows, int columns){
	if (screening == "Premiere"){
		return rows * columns * 12.00;
	}
	if (screening == "Normal"){
		return rows * columns * 7.50;
	}
	if (screening == "Discount"){
		return rows * columns * 5.00;
	}	
}
