#include<iostream>
using namespace std;
#include"addressBookView.cpp"
class Operations
{
    public:
    int choice;
    int flag = 1;
    vector<Person> vecList;
    AddressBookView addressBookView;
        void menu()
        {
            while(flag == 1)
            {
                cout << "\n1.Create Contact  \n2.Exit";
                std::cin>>choice;
                switch(choice)
                {
                    case 1:{
                        Person details = addressBookView.getUserData();
                        vecList.push_back(details);
                        break;                    
                    }   
                    case 2: flag = 0;
                        break;
                    default:
                        cout << "Enter a correct Option";
                }
            }
        }
};

int main()
{
    cout << "Welcome to Address Book" ;
    Operations o;
    o.menu();   
    return 0;
}