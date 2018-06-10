#include <iostream>
#include <memory>

#include "email.hpp"
#include "smtp_email.hpp"

int main(int argc, char *argv[])
{
    std::make_unique<SMTP_Email>();
    std::unique_ptr<Email> email = std::make_unique<SMTP_Email>();
    email->set_from("raj@diskodev.com");
    email->set_to("john.doe@example.com");
    email->set_content("Hello World!!!");

    email->print();

    return 0;
}