#include "contact.h"
//Asks user for email and stores it. Returns true if successful, 0 if not
bool Email::set_contact(){
    cout <<"Enter the type of email address: ";
    cin.getline(Type, DEFAULT_SIZE);
    cout << "Enter the email address: ";
    cin >> email_addr;
    cin.ignore();
    if(strchr(email_addr, '@')==NULL)
        return false;
    return true;
}

//Returns the email address
char* Email::get_email(){
    return email_addr;
}

//Prints out the email stored 
void Email::print(){
    cout << "Email (" << Type << "): ";
    cout << email_addr << endl;
}


// We are sure it is a number, but should be in this range 100-000-0000:999-999-9999
// Can this value be an integer? 
bool Phone::set_contact(){
    cin.ignore();
    char temp_buf[DEFAULT_SIZE];
    cout<<"Enter the type of phone number: ";
    cin.getline(Type, DEFAULT_SIZE);
    cout<< "Enter the phone number: ";
    cin.getline(temp_buf, DEFAULT_SIZE); 
    phoneNum = atol(temp_buf);
    if(phoneNum<1000000000||phoneNum>9999999999)
    {
        return false;
    }
    return true;
}

//returns the phone number of the user
long int Phone::get_phone(){
    return phoneNum;
}

//Prints out the stored phone number
void Phone::print(){
    cout << "Phone (" << Type << "): ";
    cout <<  phoneNum/10000000<<'-';
    cout << setfill('0') << setw(3) << phoneNum/10000%1000<<'-';
    cout << setfill('0') << setw(4) << phoneNum%10000<< endl;
	// print style: 310-345-6789
}
char* Phone::getType()
{
    return Type;
}
