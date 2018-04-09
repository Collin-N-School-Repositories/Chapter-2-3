#include <iostream>
#include <string>


int main(){
	int nights;
	int minutes;
	double totalCost;
	double telePerMin = 0.25;
	double costPerNight = 100;
	int roomServiceCost = 35;
	std::string yesno;
	std::cout << "Please input number of nights >>" << std::endl;
	std::cin >> nights;
	std::cout << "did they use room service yes or no >>" << std::endl;
	std::cin >> yesno;
	if (yesno == "yes"){
		totalCost += roomServiceCost;
	}
	std::cout << "did they use the phone yes or no? >>" << std::endl;
	std::cin >> yesno;
	if (yesno == "yes"){
		std::cout << "how long in minutes did they use it for? >>" << std::endl;
		std::cin >> minutes;
		totalCost += minutes * telePerMin;
	}
	totalCost += nights * costPerNight;
	std::cout << "The total cost for " << nights << " nights is " << totalCost << std::endl;
	system("pause");
	return 0;
}