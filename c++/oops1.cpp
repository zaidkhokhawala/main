//o.o.p.s
//1 class = class is collation of data member and menber functions

//2 object = object is intance of class thtough the object we can aecess all the propatys of class 

//aecess specifoers
//1 = public
//2 = private
//3 = protected




#include <iostream>
using namespace std;

class myclass {
    public: 
    
    
   // int a, b; isko bhar likhne se sab function me nhi likhna hogha ye public h
    
    
     fun1() {
        int a, b;
        cout << "enter a: ";
        cin >> a;
        cout << "enter b: ";
        cin >> b;
        cout << "sum: " << a + b << endl;
    }
         fun2() {
        int a, b;
        cout << "enter a: ";
        cin >> a;
        cout << "enter b: ";
        cin >> b;
        cout << "sum: " << a - b << endl;
    }  
	
	   fun3() {
        int a, b;
        cout << "enter a: ";
        cin >> a;
        cout << "enter b: ";
        cin >> b;
        cout << "sum: " << a * b << endl;
    }
    
    
    
    
};

 main() {
    myclass myobj;
    myobj.fun1();
   myobj.fun2();
   myobj.fun3();
}

