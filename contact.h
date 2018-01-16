
#ifndef CONTACT_H
#define CONTACT_H

#include "config.h"

class Contact {
protected:
    char Type[DEFAULT_SIZE];
	
public:
    virtual void print()=0;
    virtual bool set_contact()=0;
};

class Email: public Contact{
private:
	char email_addr[DEFAULT_SIZE];
public:
	bool set_contact();
	char* get_email();
	void print();
};

class Phone: public Contact{
private:
    long int phoneNum;
public:
    bool set_contact();
    long int get_phone(); 
    char* getType();
    void print();
};


#endif
