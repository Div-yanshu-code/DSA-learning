#include<iostream>
using namespace std;
// void print1(int n ){

//     for(int i =1; i<n; i++)
// {
// for(int j =0; j<n-i+1; j++)
//  {
//     cout<<" * ";
//  }
// cout<<endl;
// }
// }
// void print7(int n){
// for(int i =0; i<n; i++)
// {
// //space 
// for(int j =0; j<n-i-1; j++){
// cout<<" ";
// }
// //star 
// for(int j = 0; j<(2*i)+1 ; j++){}
// cout<< " * ";
// //space
// for(int j =0; j<n-i-1; j++){
//     cout<<" ";
// }
// cout << endl;
// }


// }
void print8(int n ){
for(int i = 0; i<n; i++){
for(int j=0; j<i; j++){

    cout<< " ";
}
for(int j =0; j< 2*n - (2*i+1); j++){
    cout<<"*";
}
for(int j =0; j<i; j++)
{

    cout<<" ";
}

cout<< endl;

}



}


void print9(int n ){

for(int i=0; i<n; i++){
int start = 1;
if(i % 2 ==0) start=1;
else start = 0;
for (int j = 0; j<=i ; j++){
    cout<< start;
    start = 1 - start;
}
cout<< endl;
}







}

void print10(int n ){

for(int i =1 ; i<n; i++){
for (int j = 1; j<=i; j++){
    cout<< j;
}
for(int j =1 ; j< 2*(n-i); j++ )
{
    cout<< " ";
}
for(int j=i ; j>=1; j--){

    cout<< j;
}


cout<< endl;


}



}

void print13(int n ){
    int num =1;
for(int i =0; i<n; i++){
for (int j = 0; j<=i ; j++){

    cout<< num ;
    num = num +1;
}
cout<<endl;

}








}






int main(){
   
int n ;
cin>>n;

print13(n);


}