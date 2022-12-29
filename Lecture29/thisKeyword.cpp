#include<iostream>
using namespace std;

class user
{
public:
	int id,age;
	string password;

	//constructor
	// user(int id, int age, string password)
	// {
	// 	//didn't update due to shadowing
	// 	id=id;
	// 	age=age;
	// 	password=password;
	// }

	//one Way to overcome with shadowing
	// user(int id, int age, string password)
	// {
	// 	user::id=id;
	// 	user::age=age;
	// 	user::password=password;
	// }

	//using this keyword
	user(int id, int age, string password)
	{
		(*this).id=id; //less preferable
		this->age=age; //more preferable bcz of synatactical sugar
		this->password=password;
	}


	void display()
	{
		cout<<this->id<<" "<<this->age<<" "<<this->password<<endl;
	}
};

int main()
{
	user u0(111,21,"abc");
	u0.display();
	//dynamically obj creation
	user *u1=new user(222,22,"ABC");
	u1->display();
}