// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int n;
// //     cout << "Enter number of terms: ";
// //     cin >> n;

// //     int a = 0, b = 1;

// //     for (int i = 0; i < n; i++) {
// //         cout << a << " ";
// //         int next = a + b;
// //         a = b;
// //         b = next;
// //     }

// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // int main (){


    
    
// //     int n ;
// //     cout<<"Enter which number you want from fibbonacci series"<< endl;
// //     cin>> n;
// //     int a = 0;
// //     int b = 1;
// // int sum ;
// // for(int i = 1; i<n; i++){
// //      sum = a+b ;
// //     a=b;
// //     b= sum;


// // }

// // cout << " " << sum << endl;
// // return 0;
// #include<iostream>
// using namespace std;
// int fibbo(int x){

// int a = 0;
//    int b = 1;
// int sum ;
//  for(int i = 1; i<x; i++){
//      sum = a+b ;
//    a=b;
//     b= sum;
//  }
// return sum;
// }



// int main(){


// int n ;
// cout<< " Enter the number which you want from fibbo series"<< endl;
// cin>> n;


// cout<< "Your Number is : "<< fibbo(n) << endl;




//     return 0 ;
// }

#include<iostream>
using namespace std;
int fibo(int n ){

if(n<=1) return n;
int last = fibo(n-1);
int slast = fibo(n-2);
return last + slast ;

}


int main(){


int n ;
cout << "Enter the value of n :- " ;
cin>> n;


fibo(n);
cout << fibo(n);






}

 






































