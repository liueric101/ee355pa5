#include <iostream>
#include "phonebook.h"
using namespace std;

int main(){
   PhoneBook book;

    while(true)
    {
        char option;
        cout << endl << "Menu: " << endl;
    	cout << "\t 1: Add New Contact" << endl;
    	cout << "\t 2: Remove Contact" << endl;      //"Enter First Name of contact : "
    	cout << "\t 3: Display Contacts" << endl;    //"Contacts\n\n"
        cout << "\t 4: Search Contacts" << endl;     //"Enter First Name of contact : "
        cout << "\t Press any other key to save and exit" << endl; //Save and exit
        cin >>  option;
        if(option=='1')
        {
            book.add();
        }
        else if(option=='2')
        {
            char fn[DEFAULT_SIZE];
            cout<< "Enter first Name of contact : " << endl;
            cin >> fn;
            book.remove(fn);
        }
        else if(option=='3')
        {
            book.display();
        }
        else if(option=='4')
        {
            char fn[DEFAULT_SIZE];
            cout << "Enter first name of contact: " <<endl;
            cin >> fn;
            book.search(fn);
        }
        else
        {
            book.fPrint();
            break;
        }
    }

    return 0;
}
