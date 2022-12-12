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
                cout << "\n1.Add New Contact \n2.Edit Contact \n3.Display\n4.Exit" << endl;
                std::cin>>choice;
                switch(choice)
                {
                    case 1:{
                        Person details = addressBookView.getUserData();
                        vecList.push_back(details);
                        break;                    
                    }   
                    case 2: addressBookView.editData(vecList);
                        break;
                    case 3: addressBookView.display(vecList);
                        break;
                    case 4: flag = 0;
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