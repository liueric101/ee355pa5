
#ifndef PERSON_H
#define PERSON_H

#include "contact.h"

class Person{
private:
    char firstName[DEFAULT_SIZE];
    char lastName[DEFAULT_SIZE];
    Phone phoneNum;
    Person* next = NULL;
    Person* prev = NULL;
public:
    void print_person();
    void print_person(ofstream& stream);
    bool set_person();
    Person* getNext()
    {
        return next;
    }
    Person* getPrev()
    {
        return prev;
    }  
    void setNext(Person* n)
    {
        next = n;
    }
    void setPrev(Person* p)
    {
        prev = p;
    }
    char* getfName()
    {
        return firstName;
    }
    char* getlName()
    {
        return lastName;
    }
    
};
#endif
