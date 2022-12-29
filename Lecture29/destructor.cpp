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



	//Inbuilt destructor(call at the end, when we exit from the scope wher object is created)
};

int main()
{
	user u0(111,20,"abc");
	u0.display();

	user u1(u0);
	user u2;

	//at the time exit from main function, compiler free all memory taken at stack memory by created object by help of inbuilt destructor
	//u0.~destructor();
	// u1.~destructor();
	// u2.~destructor();
}