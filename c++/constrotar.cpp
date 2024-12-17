//costructor 
//spacial method that call itself when object is created 
//3 type of costructor 
//1) default 
//2) parametrised 
//3) copy 
#include <iostream>
using namespace std;
class hello{
	public : 
	hello()//
	{
		cout<<"welcome to our website!!"<<endl;
	}
	
	myfun()
	{
		int n,i,fac=1;
		cout<<"enter number : ";
		cin>>n;
		
		for (i=1;i<=n;i++)
		{
			fac*+i;
		}
		cout<<"factorial is : "<<fac;
	}
};
main()
{
	hello obj;
	obj.myfun();
}
