#include<iostream>
using namespace std;

// sum of first n numbers using recursion!!
void rSum(int i , int sum){

if (i< 1){
    cout<< sum ;
return;
}
rSum(i-1 , sum+i);



}





int main (){



int  n ;
cout<<"Enter the value of n  upto which you want the sum :-";
cin>> n;
rSum(n , 0);









}