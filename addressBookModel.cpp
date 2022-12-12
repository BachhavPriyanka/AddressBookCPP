#include<iostream>
using namespace std;

class Person
{
    public:
        string fName, lName, address, city, state, email;
        long phoneNum, zipCode;

        Person(){}
        Person(string fName, string lName, string address, string city, string state, string email, long phoneNum, long zipCode);
        void display();
        void setFName(string fName);
        void setLName(string lName);
        void setAddress(string address);
        void setCity(string city);
        void setState(string state);
        void setEmail(string email);
        void setZipCode(long zipCode);
        void setPhoneNum(long phoneNum);

        string getFName();
        string getLName();
        string getAddress();
        string getCity();
        string getState();
        string getEmail();
        long getZipCode();
        long getPhoneNum();
};

///Person::Person();
Person :: Person(string fName, string lName, string address, string city, string state, string email, long phoneNum, long zipCode)
{
    this->fName = fName;
    this->lName = lName;
    this->address = address;
    this->city = city;
    this->state = state;
    this->email = email;
    this->phoneNum = phoneNum;
    this->zipCode = zipCode;
};

void Person ::setFName(string fName){
    this->fName = fName;
}
void Person ::setLName(string lName){
    this->lName = lName;
}
void Person ::setAddress(string address){
    this->address = address;
}
void Person ::setCity(string city){
    this->city = city;
}
void Person ::setState(string state){
    this->state = state;
}
void Person ::setEmail(string email){
    this->email = email;
}
void Person ::setZipCode(long zipCode){
    this->zipCode = zipCode;
}
void Person ::setPhoneNum(long phoneNum){
    this->phoneNum= phoneNum;
}


string Person :: getFName(){
    return fName;
}

string Person:: getLName(){
    return lName;
}
string Person::  getAddress(){
    return address;
}
string Person::  getCity(){
    return city;
}
string Person::  getState(){
    return state;
}
string Person:: getEmail(){
    return email;
}
long Person::  getZipCode(){
    return zipCode;
}
long Person:: getPhoneNum(){
    return phoneNum;
}