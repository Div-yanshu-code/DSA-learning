#include<iostream>
using namespace std;

bool isprime(int n ){

    for (int i=2; i<n; i++){

//divisible hogya hai , not a prime number

if(n%i == 0){
    return 0;
}

    }

    return 1;
}

int main()
// 1 -> prime number
//0 -> not a prime number
{





int n ;
cin>> n;


if (isprime(n)){
    cout<< "Is a prime number"<< endl;
}

else{
    cout<< "Not a prime number"<< endl;
}















    return 0;
}