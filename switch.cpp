#include<iostream>
using namespace std;

int main(){

int a , b;
cout<< "Enter the value of a"<< endl;


cin>> a;

cout << "Enter the value of b" <<endl;
cin>>b;

char op;
cout<< "Enter the value of operation"<<endl;


cin >> op;


switch( op ){

case '+': cout << (a+b) << endl;
break;

case '-' : cout << (a-b) << endl;
break;
case '*' :  cout << (a*b) << endl;
break;
case '/' : cout << (a/b) << endl;
break;
case '%' : cout<< (a%b) << endl;
break;
default : cout<< "Please enter a valid operation" << endl;

}















return 0;


}
// int paise;
//     cout << "Bol kitne paise: ";
//     cin >> paise;

//     int x, y, z, a;

//     // Use a fixed case selector to enter at case 1
//     int step = 1;

//     switch (step) {
//         case 1:
//             x = paise / 100;
//             cout << "100 Rs notes: " << x << endl;
//             paise = paise % 100;
//         case 2:
//             y = paise / 50;
//             cout << "50 Rs notes: " << y << endl;
//             paise = paise % 50;
//         case 3:
//             z = paise / 20;
//             cout << "20 Rs notes: " << z << endl;
//             paise = paise % 20;
//         case 4:
//             a = paise / 1;
//             cout << "1 Rs coins: " << a << endl;
//             break;
//         default:
//             cout << "Invalid input." << endl;

//     }

// int a , b ;
// cin >> a >> b ;

// int ans = 1;

// for( int i = 1; i<=b ; i++){

// ans = ans * a ;

// }
// cout<< "answer is :" << ans<< endl;



// int c , d ;
// cin >> c >> d;

// int answ = 1;

// for( int i = 1; i<=d ; i++){

// answ = answ * c ;

// }
// cout<< "answer is :" << answ<< endl;


















// }
