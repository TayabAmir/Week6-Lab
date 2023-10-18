#include <iostream>
using namespace std;
float perimeter(char shape, float side);
int main(){
	char shape;
	float side, result;
	
	cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
	cin >> shape;
	cout << "Enter the value: ";
	cin >> side;
	
	result = perimeter(shape,side);
	cout << "The perimeter is: " << result;
}

float perimeter(char shape, float side){
	
	if (shape == 's'){
		return 4 * side;
	}
	if (shape == 'c'){
		return 6.28 * side;
	}
	if (shape == 't'){
		return 3 * side;
	}
	if (shape == 'h'){
		return 6 * side;
	}
}
