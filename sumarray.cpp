#include<iostream>
using namespace std;




int main(){

int myArr[10];

for(int i =0; i<10; i++){


    cin>> myArr[i];


}
int sum = 0;
for(int i = 0 ; i<10; i++){


     sum = myArr[i]+sum;

}
    cout<<" sum of all elements in an array : "<< sum<<endl;










    return 0 ;
}