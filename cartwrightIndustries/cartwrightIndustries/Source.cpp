#include <iostream>
#include <string>

int main(){
	double weeklygross;
	double netpay;
	int hoursworked;
	double fwt = .2;
	double fica = .08;
	double state = .04;
	std::cout << "Please enter your weekly gross pay >>" << std::endl;
	std::cin >> weeklygross;
	std::cout << "please enter amount of hours worked >>" << std::endl;
	std::cin >> hoursworked;
	fwt = weeklygross * fwt;
	fica = weeklygross * fica;
	state = weeklygross * state;
	if (hoursworked > 40){
		weeklygross = weeklygross * 1.5;
		netpay = (weeklygross)-(fwt)-(fica)-(state);
		std::cout << "your net pay is " << netpay << std::endl;
	}
	if (hoursworked <= 40){
		netpay = (weeklygross)-(fwt)-(fica)-(state);
		std::cout << "your net pay is " << netpay << std::endl;
	}
	system("pause");
	return 0;
}