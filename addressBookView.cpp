#include <iostream>
using namespace std;
#include <vector>
#include "addressBookModel.cpp"

class AddressBookView
{
public:
    Person getUserData();
};

Person AddressBookView::getUserData()
{

    string fName, lName, address, city, state, email;
    long phoneNum, zipCode;
    cout << "Enter Your First Name: " << endl;
    cin >> fName;
    cout << "Enter Your Last Name: " << endl;
    cin >> lName;
    cout << "Enter Your Address: " << endl;
    cin >> address;
    cout << "Enter Your City: " << endl;
    cin >> city;
    cout << "Enter Your State: " << endl;
    cin >> state;
    cout << "Enter Your ZipCode: " << endl;
    cin >> zipCode;
    cout << "Enter Your Phone No: " << endl;
    cin >> phoneNum;
    cout << "Enter Your Email ID: " << endl;
    cin >> email;

    Person person(fName, lName, address, city, state, email, phoneNum, zipCode);

    return person;
}



    
