#include <iostream>
#include "phonebook.h"
using namespace std;

//You can declare any temporary variables you need here.

PhoneBook::PhoneBook(){
    HEAD = NULL;
    TAIL = NULL;
   //Write your code here
}

void PhoneBook::add(){
    Person* newP = new Person();
    newP->set_person();
    if(HEAD == NULL)
    {
        HEAD = newP; 
        TAIL = newP;
    }
    else
    {
        Person* currNode = HEAD;
        while(strcmp(currNode->getfName(), newP->getfName())<0)
        {
            currNode = currNode->getNext();
            if(currNode == NULL){
                break;
            }
        } 
        if(currNode == NULL)
        {
            TAIL->setNext(newP);
            newP->setPrev(TAIL);
            TAIL = newP; 
        }
        else if (currNode == HEAD)
        {
            currNode->setPrev(newP);
            newP->setNext(currNode);
            HEAD = newP;
        }
        else
        {
            newP->setNext(currNode);
            newP->setPrev(currNode->getPrev());
            currNode->getPrev()->setNext(newP);
            currNode->setPrev(newP);
        }
        
    }

  //Write your code here
}

void PhoneBook::display(){
    Person* currNode = HEAD;
    while(currNode != NULL)
    {
        currNode->print_person();
        currNode = currNode->getNext();
    }
    //Write your code here
}
void PhoneBook::fPrint(){
    Person* currNode= HEAD;
    ofstream oFile;
    oFile.open("PhoneBook.txt");
    while(currNode != NULL)
    {
        currNode->print_person(oFile);
        currNode = currNode->getNext();
    }
}

void PhoneBook::remove(char *fn){
    Person* currNode = HEAD;
    while(currNode != NULL)
    {
        if(strcmp(currNode->getfName(), fn)==0)
        {
            if(currNode == HEAD)
            {
                HEAD = HEAD->getNext();
                HEAD->setPrev(NULL);
            }
            else if (currNode == TAIL)
            {
                TAIL = TAIL->getPrev();
                TAIL->setNext(NULL);
            }
            else
            {
                Person* temp =currNode->getPrev();
                currNode->getPrev()->setNext(currNode->getNext());
                currNode->getNext()->setPrev(temp);
                cout<<"Contact removed" << endl;
            }
            return;
        }
        currNode = currNode->getNext();
    }
    cout << "Contact not found" <<endl;
}

void PhoneBook::search(char *fn){
    Person* currNode = HEAD;
    while(currNode != NULL)
    {
        if(strcmp(currNode->getfName(), fn)==0)
        {
            currNode->print_person();
            return;
        }
        currNode = currNode->getNext();
    }
    cout << "Contact not found" <<endl;
}

