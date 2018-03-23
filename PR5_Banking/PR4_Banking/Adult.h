#ifndef ADULT_H
#define ADULT_H
#include <iostream>
#include <string>
#include "Customer.h"

class Adult : public Customer {
public:
	//constructor
	Adult(std::string name, std::string address, int age, std::string tel_number, int customer_id : Customer (name, address, age, tel_number, customer_id){
		checking_int_rate = 0.67;
		saving_int_rate = 0.88;
	}
	~Adult()  {}
};

#endif // !ADULT_H
