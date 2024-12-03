#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
protected:
    int userID;
    string firstName, lastName, email, password;

public:
    User(int id, string fname, string lname, string mail, string pass)
        : userID(id), firstName(fname), lastName(lname), email(mail), password(pass) {}

    virtual ~User() {}

    virtual void login() = 0;
    virtual void logout() = 0;

    string getFullName() const {
        return firstName + " " + lastName;
    }

    int getUserID() const { return userID; }
};

#endif
