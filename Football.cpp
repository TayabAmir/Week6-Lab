#include <iostream>
using namespace std;
string calculateCost(float budget, string category, int numPeople);

int main(){
    float budget;
    string category;
    int People;
    cout << "Enter the budget: ";
    cin >> budget;
    cout << "Enter the category (VIP/Normal): ";
    cin >> category;
    cout << "Enter the number of people in the group: ";
    cin >> People;
    cout << calculateCost(budget, category, People);
}

string calculateCost(float budget, string category, int People){
    float ticketCost = 0;
    if (category == "VIP")
    {
        ticketCost = 499.99;
    }
    else if (category == "Normal")
    {
        ticketCost = 249.99;
    }
    float transportCost = 0;
    if (People >= 1 && People <= 4)
    {
        transportCost = budget * 0.75;
    }
    else if (People >= 5 && People <= 9)
    {
        transportCost = budget * 0.60;
    }
    else if (People >= 10 && People <= 24)
    {
        transportCost = budget * 0.50;
    }
    else if (People >= 25 && People <= 49)
    {
        transportCost = budget * 0.40;
    }
    else if (People >= 50)
    {
        transportCost = budget * 0.25;
    }
    float totalCost = ticketCost * People + transportCost;
    if (totalCost <= budget)
    {
        return "Yes! You have " + to_string(budget - totalCost) + " leva left.";
    }
    else
    {
        return "Not enough money! You need " + to_string(totalCost - budget) + " leva.";
    }
}

