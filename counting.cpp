#include<iostream>
using namespace std;

//Function signature
void printCounting(int num){
    // function body
for(int i =1; i<=num; i++)
{
    cout<< i << endl;
}
}
int main(){


int n ;
cout<< "Enter the value of n:"<< endl;
cin>> n;
//functin call
printCounting(n);



    return 0;
}