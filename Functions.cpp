#include<iostream>
using namespace std;
int power( ){
int x ,y ;
cin >> x >> y;
int ans =1;
 for(int i = 1; i<=y; i ++){
ans = ans* x;
 }
 return ans;
// ans = ans *x x jo hum denge just 6 

}

int main()
{

// int a , b ;
//  cin >> a >> b;

//  int answer = power(a ,b);

// cout<< " Value :"<<answer<< endl;


cout<< "Power is:"<<power() << endl;
















  return 0;
}




























