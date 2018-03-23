#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

#include <iostream>
#include <string>
#include "Account.h"

class Checking_Account : public Account {
private:
	double interest = 2.7;
public:
	//constructor
	Checking_Account(Customer*  c, int id : Account(c, id) {}

	//destructor
	~Checking_Account() {}

	//add interest using acc type interest rate
	void  add_interest() {
		Account::add_interest(interest);
	}

	//account description
	std::string to_string() {
		std::string s = Account::to_string();

		std::stringstream ss;
		ss << "Account type: Checking" << std::endl;
		return s + ss.str();
	}
};
#endif // !SAVING_ACCOUNT_H
