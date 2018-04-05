#include <iostream>
int main(){
	double hoursworked;
	double hourlypay;
	double netpay;
	std::cout << "Please enter your hourly pay >>" << std::endl;
	std::cin >> hourlypay;
	std::cout << "Please enter your hours worked >>" << std::endl;
	std::cin >> hoursworked;
	netpay = hoursworked * hourlypay;
	std::cout << "your total pay for " << hoursworked << " hours work is " << netpay << std::endl;
	system("Pause");
	return 0;

}