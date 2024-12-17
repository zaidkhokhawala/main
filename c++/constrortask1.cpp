#include<iostream>
using namespace std;

			class Hello {
		public:
			
			Hello()//constuctor-------------------
			{
				cout<<"Wecome to my menudriven!!"<<endl;
				
			}
			 jiya() {  
       		 int i, j;
             int num;
    		cout << "\nEnter the number of rows: ";
  	 		 cin >> num;
      		  for (i = 1; i <=5; i++) {
           			 for (j = 1; j <= i; j++) {
                cout << "*";
            }	
            cout << endl;
        }
    }
			myfun()
			{
				int n,i,fac=1;
				cout<<"Enter Number : ";
				cin>>n;
				for(i=1;i<=n;i++){
						fac*=i;
				}
					
					cout<<"Factorial is : "<<fac;
				
			}
			
			 void primeCheck() {  // Function to check if a number is prime
        int num;
        bool isPrime = true;
        cout << "Enter a Number to check if Prime: ";
        cin >> num;

        if (num <= 1) {
            isPrime = false;
        } else {
            for (int i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
            cout << num << " is a Prime Number." << endl;
        else
            cout << num << " is not a Prime Number." << endl;
    }

			
			~Hello()//destuctor
			{
				cout<<"\nThank you for using....!!";
			}
	};

main()
{
	Hello obj;
	obj.myfun();
	obj.jiya();
	obj.primeCheck();
}

