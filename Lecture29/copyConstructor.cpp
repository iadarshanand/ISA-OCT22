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
	//if copy constructor is not defined by us then compiler called inbuilt copy constructor
	// defined default copy constructor by us
	user(user &obj)
	{
		this->id=obj.id;
		this->age=obj.age;
		this->password=obj.password;

		cout<<"use defined copy constructor by us instead of inbuilt"<<endl;
	}

	void display()
	{
		cout<<this->id<<" "<<this->age<<" "<<this->password<<endl;
	}
};

int main()
{
	user u0(111,20,"abc");
	u0.display();
	user u1(u0); //inbuilt copy constructor
	u1.display();
	user u2; //call 2nd constructor
	u2.age=u0.age;
	u2.id=u0.id;
	u2.password=u0.password; //this is hectic,so we prefer copy constructor
	u2.display();

	user *u3=new user(u0);
	u3->display();

	//new user object u5 dynamically
	user *u5=new user(1,10,"pas");
	u5->display();
	//create statically object u4 by copying u5 by copy constructor
	user u4(*u5);
	u4.display();
}