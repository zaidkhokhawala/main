
#include <iostream>
using namespace std;


 class myclass {
		public:
		int a; 
		fun(){
       
                     cout << "Enter the number of rows: ";
                     cin >> a;
                      for (int i = 1; i <= a; i++) {
                      for (int j = 1; j <= i; j++) {
                      cout << "*";
                 }
                      cout << endl;
	         	}
	}
};



main()
{
	myclass obj;
	obj.fun();
	
}
