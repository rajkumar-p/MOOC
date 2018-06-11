#include "smtp_email.hpp"
#include <iostream>

SMTP_Email::SMTP_Email()
{

}

SMTP_Email::SMTP_Email(std::string from, std::string to, EmailContent *content)
    : Email(from, to, content)
{

}

void SMTP_Email::send()
{
    std::cout <<"Sending SMTP email."<<std::endl;
    this->print();
}
