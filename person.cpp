#include "person.h"
//Sets the person's name, birthday, address, phone number, and email
bool Person::set_person(){
	cin.ignore();
    cout<< "First Name: ";
    cin >> firstName;
    cout << "Last Name: ";
    cin >> lastName;
    phoneNum.set_contact();
}
//Prints the person's name, birthday, address, phone number, and email
void Person::print_person(){
    cout << firstName << " " << lastName << endl;
    phoneNum.print();
}

void Person::print_person(ofstream& stream)
{
    stream << firstName << " " ;
    stream << lastName << " " ;
    stream << phoneNum.getType() << " ";
    stream << phoneNum.get_phone()<<endl;
}
