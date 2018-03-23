#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <string>

/**
The Bank has Customers.  Each Customer has a name, address, age, and telephone number.
Additionally, there are specialized types of Customers: Adult, Senior, and Student.
Each type of Customer has its own checking and savings interest rates, 
as well as its own checking and overdraft fees.

@author: Ed Walker
*/
class Customer // FIXME: Complete the implementation!
{
private:
	std::string name;
	std::string address;
	int age;
	std::string tel_number;
	int customer_id;
protected:
	double checking_int_rate;
	double saving_int_rate;
	int checking_fee;
	int overdraft_fee;
public:
	//constructor
	Customer(std::string new_name, std::string new_address, int new_age, std::string new_tel_number, int new_cust_id) {
		this->name = new_name;
		this->address = new_address;
		this->age = new_age;
		this->tel_number = new_tel_number;
		this->customer_id = new_cust_id;
	}

	//accessor and mutator functions
	std::string get_name() { return name;}
	std::string get_address() { return address;}
	int get_age() { return age;}
	std::string get_tel_number() { return tel_number;}
	int get_cust_id() { return customer_id;}

	double get_checking_int_rate() { return checking_int_rate; }
	double get_saving_int_rate() { return saving_int_rate; }
	int get_checking_fee() { return checking_fee; }
	int get_overdraft_fee() { return overdraft_fee; }

	void set_name(std::string new_name) {
		this->name = new_name;
	}
	void set_address(std::string new_address) {
		this->address = new_address;
	}
	void set_age(int new_age) {
		this->age = new_age;
	}
	void set_name(std::string new_tel_number) {
		this->tel_number = new_tel_number;
	}
	void set_cust_id(int new_cust_id) {
		this->customer_id = new_cust_id;
	}
};


#endif