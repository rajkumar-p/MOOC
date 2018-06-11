#Makefile for building the program
CC=g++
CFLAGS=-Wall -Wextra -std=c++14

all: main

email_content.o: email_content.hpp email_content.cpp
	$(CC) $(CFLAGS) -c email_content.cpp

email.o: email_content.hpp email.hpp email.cpp
	$(CC) $(CFLAGS) -c email.cpp
	
smtp_email.o: email.hpp smtp_email.hpp smtp_email.cpp
	$(CC) $(CFLAGS) -c smtp_email.cpp

main.o: email.hpp smtp_email.hpp main.cpp
	$(CC) $(CFLAGS) -c main.cpp

main: main.o email_content.o email.o smtp_email.o
	$(CC) $(CFLAGS) -o main main.o smtp_email.o email.o email_content.o

# main.o: srp.cpp email.cpp smtp_email.cpp
# 	$(CC) $(CFLAGS) -c srp.cpp email.cpp smtp_email.cpp
# main: srp.o email.o smtp_email.o
# 	$(CC) srp.o email.o smtp_email.o -o main srp.o email.o

clean:
	rm *.o main