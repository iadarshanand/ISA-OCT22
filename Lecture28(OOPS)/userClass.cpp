#include<iostream>
using namespace std;

class user
{
private:
	string password;
public:
	int userId;
	string name;
	int age;

	//functions
	void setAge(int val)
	{
		age=val;
	}
};