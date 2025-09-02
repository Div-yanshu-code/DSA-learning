#include<iostream>
using namespace std;




void printArray(int arr[], int size)
{

cout<< " Printing the array" <<endl;

//print the array 
for(int i  = 0; i<size; i++){  
    cout << arr[i] << " ";
}
cout<< " Printing Done" << endl;

}









int main(){



// Declaration

//int Number[15];

//Acessing an array
//cout << "value at 0 index  : " << Number[0] << endl; // Garbage value padi ho sakti hai if koi bhi value assign na ki ho





//Intialising an arrray


//int second[3] = {5, 7 , 9};
// accesing an element 

//cout << "value of 2nd index : " << second[2] <<endl;

//cout <<endl << "Everything is Fine " <<endl;

int third[15] = { 2,7};
 int n =15;
  //printArray(third , n);


 //Intialising all locations w zero agar zero ki jagah 1 kr de toh sarey 1 nahi print honge
int fourth[10] ={0};

int x = 10;

//printArray(fourth , x);


int fifthsize = sizeof(fourth)/sizeof(int);

//cout << " Size of fourth is : " << fifthsize <<endl;


char ch[5] = { 'a', 'b', 'c','d', 'e' } ;




cout<< " Printing the array" <<endl;


for(int i =0; i<5; i++){

    cout<< ch[i] <<"  ";

}


double firstdouble[5];
float firstfloat[4];
bool firstbool[9];





    return 0;
}