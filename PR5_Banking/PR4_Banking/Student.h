#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include "Customer.h"

class Student : public Customer {
public:
	//constructor
	Student(std::string name, std::string address, int age, std::string tel_number, int customer_id : Customer name, address, age, tel_number, customer_id) {
		checking_int_rate = 0.45;
		saving_int_rate = 0.7;
	}
	~Student() {}
};
#endif // !STUDENT_H

