#include <iostream>
#include "email.hpp"

Email::Email() : _from(""), _to(""), _content(nullptr)
{

}

Email::Email(std::string from, std::string to, EmailContent *content)
    : _from(from), _to(to), _content(content)
{

}

Email::~Email()
{

}

std::string Email::from()
{
    return _from;
}

std::string Email::to()
{
    return _to;
}

EmailContent *Email::content()
{
    return _content;
}

void Email::set_from(std::string from)
{
    _from = from;
}

void Email::set_to(std::string to)
{
    _to = to;
}

void Email::set_content(EmailContent *content)
{
    _content = content;
}

void Email::print()
{
    std::cout <<"From : "<<this->from()<<std::endl;
    std::cout <<"To : "<<this->to()<<std::endl;
    std::cout <<"Content : "<<std::endl;
    _content->print();
    std::cout <<std::endl;
}