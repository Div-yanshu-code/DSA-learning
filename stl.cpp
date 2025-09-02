#include<bits/stdc++.h>
using namespace std;

// void is a function and it doesn't return anything
void printname(){
cout<< "Divyanshu sharma ";
}
int sum(int a , int b){
return a + b ;
}
// Pairs 

void ExplainPair(){

pair<int , int> p = {1, 3};

cout<< p.first << " " << p.second;
 
pair<int, pair<int ,int>> p2 = { 1, {3, 5}};

cout<< p2.first << " " << p2.second.second << p2.second.first;

pair<int ,  int> arr[] = { {1,2}, {2,3},{3,4}};

cout<< arr[1].second;



}

void explainVector(){

    vector<int> v;

v.push_back(1);// increase the size of an array and get inserted in the array
v.emplace_back(2);// it has the similar function 2 will be inserted in the array but it has a quite change in its syntax

vector<pair<int , int>>vec;


// v.push_back({1,2});
v.emplace_back(1,2);

vector<int> v(5,100);// it creates a array having 100 5 times

vector<int> v(5); //similarly it also creates a array of 5 elements  and assign it some garbage value

vector<int> v1(5,20);//same as 100 one
vector<int> v2(v1); //it will create an another vector which will same values as v1 vector


 vector<int> :: iterator itr = v.begin();

 itr++;
cout<<*(itr) << " ";
itr = itr +2;
cout<< *(itr) << " ";

vector<int> ::iterator itr = v.end(); // it access the value after the last element of the array/vector

// vector<int> ::iterator itr = v.rend();

// vector<int> ::iterator itr = v.rbegin();

cout<< v[0] << "  "<< v.at(0);

cout<< v.back() << " ";
// how to acess the the whole vector
for( vector<int> :: iterator itr = v.begin(); itr!= v.end();  itr++)
{


    cout<< *(itr)<< " ";
}
//some other simpler ways to print a vector
for(auto itr =v.begin(); itr !=v.end(); itr++){
    cout<< *(itr) << " ";
}

for(auto itr : v) {
    cout<< itr << " ";
}

//{10, 20 , 30 , 40 }
v.erase(v.begin()+1);

//{10, 20 , 12 , 23, 35}

v.erase(v.begin()+2 ,v.begin()+ 4);// {10, 20, 35} [start ,end)

//Insert function 

vector<int>v(2,100); //{100,100}

v.insert(v.begin(),300); //{300, 100 ,100}
v.insert(v.begin() +1 , 2 , 10); // {300 , 10 , 10 , 100, 100}

vector<int>copy(2,50); //{50,50}
v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300 , 10 ,10, 100,100}

//{10,20}
cout<< v.size();// 2
// {10 ,20}
v.pop_back(); //Removes last element {10}
 
v.clear();
//clears each element in  the vector
}

//LIST it is exaactly same as vector :
void ExpalinList(){
list<int> ls;
ls.push_back(2);// {2}
ls.emplace_back(4); //{2,4}
ls.push_front(5); // {5,2 ,4 }

ls.emplace_front() ;// {2,4}

// REst functions are same as vectors
// begin ,end , rbegin, rend, clear, insert, size , swap

}
// Deque
void ExpalinDeque()  {
deque<int>dq;

dq.push_back(1); // {1}
dq.emplace_back(2); // {1 , 2}
dq.push_front(4); // {4 , 1 , 2}
dq.emplace_front(3); // {3, 4 , 1, 2}
  

dq.pop_back(); // {3, 4 , 1}// removes  element from back
dq.pop_front() ;// {4 , 1}// removes element from front
dq.back();
dq.front();
// REst functions are same as vectors
// begin ,end , rbegin, rend, clear, insert, size , swap








}

void ExplainStack(){
//LIFO -LAST IN FIRST OUT
stack<int> st;
st.push(1); // {1}
st.push(2); // {2,1}
st.push(3); // {3,2,1}
st.push(3); // {3,3, 2,1}
st.emplace(5); // {5, 3, 3, 2, 1}// emplace is same as push

cout<< st.top(); //Prints 5 " ** st[2] is invalid here"

st.pop();// st looks like {3, 3 , 2 , 1} // it removes the last element
 
cout<< st.top();  // 3 will get print cause now it is the last element 

cout<< st.size(); //4 

cout<< st.empty(); // returns true if the stack is empty but in this case it will return false


stack<int> st1,  st2;
st1.swap(st2);
}


void ExplainQueue()  {
queue<int> q;
q.push(1); //{1}
q.push(2); // {1, 2}
q.emplace(4);  //{1,2 ,4}

q.back() += 5;

cout<< q.back(); // Prints 9

//Q is {1, 2, 9 }
cout<< q.front(); // Prints 1

q.pop (); //{2,9}

cout<< q.front(); //prints 2

//Size swap empty same as stack

}

void ExplainPriorityQueue() {

priority_queue<int>pq;
pq.push(5);// {5}
pq.push(2); //{5,2}
pq.push(8); // {8,5 , 2}
pq.emplace(10);// {10, 8 , 5 , 2}

cout<<pq.top(); // prints 10

pq.pop(); // {8 , 5 , 2}

cout<< pq.top(); // Prints 8
  

//Size swap empty function same as others 

// Push log(1)
//pop log(1) // 
//Minimum heap
 priority_queue<int , vector<int> , greater<int>> pq;

pq.push(5); //{5}
pq.push(2); //{2,5}
pq.push(8); // {2, 5 , 8}

pq.emplace(10); // {2, 5 , 8 , 10}


cout<< pq.top(); // prints 2


}

void explainSet()// SORTED AND UNIQUE
{
set<int> st;
st.insert(1);// {1}
st.emplace(2); // {1,2}
st.insert(2); // {1, 2} // it will not insert 2 again cause set is sorted and unique
st.insert(4); // {1, 2, 4}
st.insert(3); // {1, 2, 3, 4} //sorted manner

//Functionality of insert in vecctor
// can be used also , that only increases
// efficiency

// begin() , end() , rbegin() , rend() , size() , 
// Empty() and swap() are same as those of above

// {1, 2, 3, 4, 5}
    auto it = st.find(3);

// {1, 2,3,4,5}
auto it = st.find(6) ; //so 6 is not in thee set so it will point the adress right after the last element of the set 

// {1, 4 , 5}

st.erase(5) ; // erases 5 // takes logarithmic time 

int cnt = st.count(1) ;


auto it = st.find(3);
st.erase(it); // it takes constant time`

auto it1 = st.find(2);
auto it2 = st.find(4);

st.erase(it1 , it2) ; // after erase {1, 4, 5} {first , last}

// lower bound and upper bound function works in same way
// as in vector it does. 


//This is syntax


// WAtch a video on lower bound and upper bound 
auto it = st.lower_bound(2);
auto it = st.upper_bound(3);

}

void explainMultiset() {
// Every thing is same as set
// only stores duplicate elements also

multiset<int> ms;

ms.insert(1); //{1}
ms.insert(1); // {1, 1 }
ms.insert(1); //[  1, 1 , 1]
 

ms.erase(1) ; // all 1's are erased 

int cnt = ms.count(1) ;

 // only a single one will be erased
ms.erase(ms.find(1)) ; 

// ms.erase(ms.find(1) , ms.find(1)+2);

 //rest all functions are same as set
}

void explainuset() {
unordered_set<int> st;

//lower bound and upper bound function 
// doesn't works , rest all finctions are same 
// as above , it does not stores in any
// particular order it has a better complexity 
// than set in most cases , except some when collision occurs

}

void ExplainMap() {

map<int , int > mpp ;

mpp[1] = 2;

// mpp.emplace({3, 1});
// mpp.insert({2,4})
// mpp[{2,3}] =10;

for(auto it :mpp){

// cout << it.first << " " it.second << endl;
}
  cout<< mpp[1];
cout<< mpp[5] ;  

auto it = mpp.find(5);// it will point to mpp.end() cause 5 doesn;t exist

// this is the syntax
auto it = mpp.find(3);

// cout<< *(it).second;
// this is the syntax

auto it = mpp.lower_bound(2);
auto it = mpp.upper_bound(3);

// erase , swap , size , empty , are same as above 
}


void explainmultimap() {
// everything same as amp , only it can store multiple keys
// only mpp[key] cannot be used here 
}

void explainUnordered() {
// same as set and unordered set difference
}

// IMPORTANT ALGORITHMS :-











int main(){



printname();
int s = sum(2 , 7);
cout<< s;

}
