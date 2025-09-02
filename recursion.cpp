// #include<iostream>
// using namespace std;
// int cnt = 1;
// void printlin(){
// if (cnt== 4) return;
// cout<< cnt;
// cnt++;
// printlin();




// }




// int main(){




// printlin();



// }

// #include<iostream>
// using namespace std;




// void printlin(int i , int n){
// if (i>n) return ;
// cout<< i;
// printlin(i+1 , n);




// }
// int main (){

// int n ;
// cout<< " Enter the value of n :- ";
// cin>>  n;

// printlin(1 , n);


// }

#include<iostream>
using namespace std;


void backtrack (int i , int n){
if(i>n) return ;
backtrack(i+1, n);
cout<< i << " ";





}
int main()
{
int n ; 
cout<< "Enter the value of n :- ";
cin>> n;

backtrack(1,n);




}


















































