#ifndef SMTP_EMAIL_HPP
#define SMTP_EMAIL_HPP

#include "email.hpp"

class SMTP_Email: public Email {
public:
    SMTP_Email();
    SMTP_Email(std::string from, std::string to, std::string content);

    void send();
};

#endif