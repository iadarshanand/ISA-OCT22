#include<bits/stdc++.h>
// #include<cstring>
// #include<iostream>
using namespace std;

// int len(char *ch)
// {
	// cout<<sizeof(ch)<<endl;

	// int size=0;
	// int i=0;
	// while(ch[i]!='\0')
	// {
	// 	size++;
	// 	i++;
	// }
	// return size;

	// int size=strlen(ch);
	// return size;
// }

int main()
{
	// char ch[]={'a','b','c'};
	// cout<<ch<<endl; //abc&^%$&*9)(0)

	// char ch1[10]={'a','b','c'};
	// cout<<ch1<<endl;//abc
	// cout<<*(&ch1 + 1)<<endl;
	// cout<<ch1<<endl;
	// // cout<<&ch1+1<<endl;
	// char* p=ch1;
	// p++;
	// cout<<p<<endl;

	// cout<<&ch1[1]<<endl;

	//Initialisation
	// char ch[]={'a','d','a','r','s','h','\0'};
	// cout<<ch<<endl;
	// char ch[]={'a','d','a','\0','r','s','h','\0'};
	// cout<<ch<<endl;


	// char ch[]="adarsh";	
	// cout<<ch<<endl;
	// char ch[]="ada\0rsh";	
	// cout<<ch<<endl;	

	// int arr[3]={1,2,3};
	// // arr={2,3,4}; error
	// arr[0]=11;
	// for(int i=0;i<3;i++)cout<<arr[i]<<" ";
	// cout<<endl;

	// char ch[]="adarsh";
	// // ch="anand"//error
	// ch[0]='A';
	// cout<<ch<<endl;


	// cout<<len(ch)<<endl;
	// char ch[2]={'a','b'};
	// cout<<ch<<endl;



	//
	// char ch[]="Adarsh";
	// cin>>ch;
	// cout<<ch<<endl;

	// char ch[100];
	// cin>>ch;
	// cout<<ch<<endl; //first word of i/p

	// char ch[100];
	// cin.getline(ch,100); //by default delimeter is '\n'
	// cout<<ch<<endl; ////Adarsh Anand CB Delhi

	// cin.getline(ch,15); //Adarsh Anand CB Delhi
	// cout<<ch<<endl; //Adarsh Anand C

	// // cin.getline(ch,15,' ');
	// // cout<<ch<<endl;
	// cin.getline(ch,15,'$');
	// cout<<ch<<endl;	

	// cin.getline(ch,21);
	// cout<<ch<<endl;

	// char ch[]="adarsh";
	// cout<<&ch<<endl;
	// cout<<(int*)(&ch)<<endl;
	// cout<<(int*)(&ch[0])<<endl;
	// cout<<(int*)(&ch[1])<<endl;
	// cout<<(int*)(&ch[2])<<endl;


	int n;
	cin>>n;
	// cin.get();
	cin.ignore();
	char ch[100];
	for(int i=0;i<n;i++)
	{
		cin.getline(ch,100);
		cout<<ch<<endl;
	}





}