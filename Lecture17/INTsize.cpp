#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout<<INT_MAX<<endl;
	cout<<INT_MIN<<endl;
	cout<<(int)(pow(2,31)-1)<<endl;
	int tryTostoreExceededNumber=2147483649;
	cout<<tryTostoreExceededNumber<<endl;

	cout<<(unsigned int)(pow(2,32)-1)<<endl;
	// unsigned int exceddedTounsignedLimit=4294967296;// error b/c unsigned int limit exceeded

	//we need to store in long long int (64 bit)
	long long int longNumber=4294967296;
	cout<<longNumber<<endl;

	

}