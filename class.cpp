#include<iostream>
using namespace std;


class Employee {
    private:
string Name;
string Company;
int Age;
string Email;
public:
void setName(string name){
    Name = name;
}
string getName(){
    return Name;
}
void setCompany(string company){
    Company = company;
}
string getCompany(){
    return Company;
}
void setAge(int age){
    if(age>=18)
Age = age;

}
int getAge(){
    return Age;
}

void IntroduceYourself() {
cout<<"Name  - " << Name << endl;
cout<<"Company  :- " << Company << endl;
cout<<"age :-" <<Age << endl;
}
// making of a constructor name of constructor is same class name

Employee(string name , string company ,int age)
{
Name = name;
Company = company;
Age = age;



}

};

int main(){

Employee employe1 = Employee("divyanshu" , "google", 20);
employe1.IntroduceYourself();

employe1.setAge(9);
cout<< employe1.getName()<< "is"<< employe1.getAge()<<"years old"<< endl;

}

//acess modifiers constructor doesn't have return type 





