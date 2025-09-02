#include<iostream>
using namespace std;
int main(){

// int var1 ;
// int var2;
// int var3;

// cout<< "Adresss of var1 :  " << &var1 << endl;

// cout << "Adress of var2 :  " <<&var2 << endl;

// cout<< "Adress of var3 :   "  <<&var3 << endl;

int n ; 
cout <<"ENter the value of table you want: "<< endl;

cin>>n;


for(int i=1 ; i<=10; i++){

    cout<<  n << " x " << i << " = " << (n * i)<< endl;
}



    return 0;
}