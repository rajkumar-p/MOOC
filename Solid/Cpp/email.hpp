#ifndef EMAIL_HPP
#define EMAIL_HPP

#include <string>

class Email {
private:
    std::string _from, _to;
    std::string _content;

public:
    Email();
    Email(std::string from, std::string to, std::string content);
    virtual ~Email();

    std::string from();
    std::string to();
    std::string content();

    void set_from(std::string from);
    void set_to(std::string to);
    void set_content(std::string content);

    virtual void print();

    virtual void send() = 0;
};

#endif