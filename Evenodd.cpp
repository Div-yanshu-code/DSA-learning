#include<iostream>
using namespace std;
//1 = even
//0 = odd

bool isEven( int a) {

if(a&1){
    return 0;
}

    return 1;
}


int main (){



int n ;
cout<< " Enter the number to check"<< endl;
cin>> n ;

if(isEven(n)){

    cout<<"number is even"<< endl;

}
else{
    cout<< " Number is odd"<< endl;
}




    return 0;



}