#ifndef SAVING_ACCOUNT_H
#define SAVING_ACCOUNT_H

#include <iostream>
#include <string>
#include "Account.h"

class Saving_Account : public Account {
private:
	double interest = 3.2;
public:
	//constructor
	Saving_Account(Customer*  c, int id : Account(c, id) {}

	//destructor
	~Saving_Account(){}

	//add interest using acc type interest rate
	void  add_interest() {
		Account::add_interest(interest);
	}

	//account description
	std::string to_string() {
		std::string s = Account::to_string();

		std::stringstream ss;
		ss << "Account type: Saving" << std::endl;
		return s + ss.str();
	}
};
#endif // !SAVING_ACCOUNT_H
