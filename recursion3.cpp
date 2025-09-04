// #include<iostream>
// using namespace std;


// int fact(int n ){

// if(n==0)return 1;
// return n* fact(n-1);




// }

// int main(){

// int n ;
// cout<<"Enter the valur of n";
// cin>>n;

// fact(n);






// }
// reversing an array using recursion



// #include<iostream>
// using namespace std;

// void f(int i , int arr[] , int n){
// if (i>=n/2) return;
// swap (arr[i] , arr[n-i-1]);
// f(i+1, arr , n);

// }



// int main(){


// int n ;
// cin >> n;
// int arr[n];
// for(int i =0; i<n; i++) cin >> arr[i];
// f(0 , arr , n);
// for (int i =0; i<n ; i++) cout<< arr[i] << " ";

// return 0;


// }

// check if given string is palindrome or not? using recursion


#include<bits/stdc++.h>
using namespace std;
bool f(int i , string &s) {
if(i >=s.size() /2 ) return true;
if(s[i] != s[s.size()- i -1] ) return false;
    return f(i+1, s);


}
int main(){


string s = "madam";
cout << f(0,s);




    return 0;
}

















