#include <iostream>
#include "email.hpp"

Email::Email() : _from(""), _to(""), _content("")
{

}

Email::Email(std::string from, std::string to, std::string content)
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

std::string Email::content()
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

void Email::set_content(std::string content)
{
    _content = content;
}

void Email::print()
{
    std::cout <<"From : "<<this->from()<<std::endl;
    std::cout <<"To : "<<this->to()<<std::endl;
    std::cout <<"Content : "<<this->content()<<std::endl;
}