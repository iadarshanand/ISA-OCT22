#include<iostream>
using namespace std;

class user
{
public:
	int id,age;
	string password;

	//constructor
	// 1.
	user(int id, int age, string password)
	{
		(*this).id=id; //less preferable
		this->age=age; //more preferable bcz of synatactical sugar
		this->password=password;
	}
	// 2.
	user()
	{

	}
	// 3.
	user(int id)
	{
		this->id=id;
	}


	void display()
	{
		cout<<this->id<<" "<<this->age<<" "<<this->password<<endl;
	}
};

int main()
{
	user u0; //call 2nd constructor
	user u1(5); //call 3rd constructor
	user *u2=new user(111,20,"abc"); // call 1st constructor

	// user u3(5,7); //compile error

	u0.display();
	u1.display();
	u2->display();
}