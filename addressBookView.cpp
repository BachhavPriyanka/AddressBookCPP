#include <iostream>
using namespace std;
#include <vector>
#include "addressBookModel.cpp"

class AddressBookView
{
public:
    Person getUserData();
    void display(vector<Person>);
    void editData(vector<Person> &vecList);
    void deleteData(vector<Person> &vecList);
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

void AddressBookView ::display(vector<Person> vecList)
{
    if (vecList.size() != 0)
    {
        for (Person i : vecList)
        {
            i.display();
        }
    }
    else
    {
        cout << "List is empty";
    }
}

void AddressBookView ::editData(vector<Person> &vecList)
{
    string fName, lName, address, city, state, email, tempName;
    long phoneNum, zipCode;
    int option;
    int flag = 1;
    Person p;
    cout << "Enter Name which you want to edit : ";
    cin >> tempName;
    int choice;
    for (int i = 0; i <= vecList.size(); i++)
    {
        if (tempName == vecList[i].getFName())
        {
            cout << "\n1. To Update Address \n2. To Update City \n3. To Update State \n4. To Update Email-ID \n5. To Update Phone Number";
            cin >> choice;
            switch (choice)
            {
            case 1:
            {
                cout << "Enter Your Address: " << endl;
                cin >> address;
                vecList[i].setAddress(address);
                break;
            }
            case 2:
            {
                cout << "Enter Your City: " << endl;
                cin >> city;
                vecList[i].setCity(city);
                break;
            }
            case 3:
            {
                 cout << "Enter Your State: " << endl;
                cin >> state;
                vecList[i].setState(state);
                break;
            }
            case 4:
            {
                cout << "Enter Your Email ID: " << endl;
                cin >> email;
                vecList[i].setEmail(email);
                break;
            }
            case 5:
            {
                cout << "Enter Your Phone No: " << endl;
                cin >> phoneNum;
                vecList[i].setPhoneNum(phoneNum);
                break;
            }
            default:
                cout << "You entered invalid choice";
            }
            for (auto i = vecList.begin(); i != vecList.end(); ++i)
            {
                i->display();
            }
        }
    }
}

void AddressBookView ::deleteData(vector<Person> &vecList)
{

    string fname, lname;
    bool deleted = false;
    cout << "Enter First Name :";
    cin >> fname;
    cout << "Enter last Name :";
    cin >> lname;

    auto person = vecList.begin();
    while (person != vecList.end())
    {
        auto count = person++;
        if (fname == count->getFName() && lname == count->getLName())
        {
            vecList.erase(count);
            deleted = true;
            break;
        }
    }
    if(deleted == true) {
        cout << " Record Deleted " << endl;
    } 
    else {
        cout << " Match Not Found" << endl;
    }

     for(auto i=vecList.begin(); i != vecList.end(); ++i)
     {
        i->display();
     }
}
    
