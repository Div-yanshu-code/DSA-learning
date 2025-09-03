// #include<iostream>
// using namespace std;

// // sum of first n numbers using recursion!!
// void rSum(int i , int sum){

// if (i< 1){
//     cout<< sum ;
// return;
// }
// rSum(i-1 , sum+i);



// }





// int main (){



// int  n ;
// cout<<"Enter the value of n  upto which you want the sum :-";
// cin>> n;
// rSum(n , 0);









// }
// sum using functional recursion:-
#include<iostream>
using namespace std;

int sum (int n) { 
if(n==0) return 0 ;
else{
cout<<  n + sum (n-1);
}



}




int main() {


    int n;
    cout<< "Enter the value of n : -";
    cin>> n;
    
    sum (n);
}