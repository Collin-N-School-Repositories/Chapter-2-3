#include <iostream>
#include <string>


int main(){
	int totaleggs;
	double costperdozen = 2.00;
	double costperegg = 0.25;
	int dozens;
	int remainingEggs;
	double totalCost;
	std::cout << "Please input the amount of eggs you would like to purchase >>" << std::endl;
	std::cin >> totaleggs;
	dozens = totaleggs / 12;
	remainingEggs = totaleggs % 12;
	if (dozens < 10){
		totalCost = (dozens * costperdozen) + (remainingEggs * costperegg);
		std::cout << "your total cost is " << totalCost << " for " << dozens << " dozen and " << remainingEggs << " eggs" << std::endl;
	}
	else{
		costperdozen = 1.50;
		totalCost = (dozens * costperdozen) + (remainingEggs * costperegg);
		std::cout << "your total cost is " << totalCost << " for " << dozens << " dozen and " << remainingEggs << " eggs" << std::endl;
	}
	system("pause");
	return 0;
}