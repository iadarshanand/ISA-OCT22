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



	//defined destructor
	//destructor free all ocupied memory at stack memory by current object
	~user()
	{
		cout<<"defined destructor called at time of deletion"<<endl;
	}
};

int main()
{
	user u0(111,20,"abc");
	u0.display();

	user u1(u0);
	user u2;

	user *u3=new user(222,22,"ABC");
	u3->display();

	//destructor can't free heap memory occupied by object
	// so destructor is not called for free u3, bcz u3 is pointer pointed to object at heap memory,u3 is not object
	// so we have to free heap memory manually by help of delete keyword
	delete u3;

	// delete u3;//error bcz destructor of an object called only one in a life

	//at the time exit from main function, compiler free all memory taken at stack memory by created object by help of inbuilt destructor
	//u0.~destructor();
	// u1.~destructor();
	// u2.~destructor();
}