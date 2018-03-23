#ifndef SENIOR_H
#define SENIOR_H

#include <iostream>
#include <string>
#include "Customer.h"

class Senior : public Customer {
public:
	//constructor
	Senior(std::string name, std::string address, int age, std::string tel_number, int customer_id : Customer (name, address, age, tel_number, customer_id) {
		checking_int_rate = 0.2;
		saving_int_rate = 0.5;
	}
	~Senior() {}
};


#endif // !SENIOR_H
