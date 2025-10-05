#include<iostream>
#include<stdexcept>
#include<string>

using namespace std;

class OutOfStockException: public runtime_error
{
	string msg;

	OutOfStockException(string msg):msg(msg){}

	string what()
	{
		return msg;
	}

};
