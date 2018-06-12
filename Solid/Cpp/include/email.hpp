#ifndef EMAIL_HPP
#define EMAIL_HPP

#include <string>
#include "email_content.hpp"

class Email {
private:
    std::string _from, _to;
    EmailContent *_content;

public:
    Email();
    Email(std::string from, std::string to, EmailContent *content);
    virtual ~Email();

    std::string from();
    std::string to();
    EmailContent *content();

    void set_from(std::string from);
    void set_to(std::string to);
    void set_content(EmailContent *content);

    virtual void print();

    virtual void send() = 0;
};

#endif