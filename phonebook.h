#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "config.h"
#include "person.h"

class PhoneBook{
   private:
   Person* HEAD;
   Person* TAIL;

   public:
   PhoneBook();           //set initial values for head and tail
   void add();            //add contact to phonebook
   void remove(char *);   //delete contact from phonebook
   void display();        //display all contacts info
   void search(char *);   //display info of contact
    void fPrint();
};
#endif

//Please do not make any changes here.
