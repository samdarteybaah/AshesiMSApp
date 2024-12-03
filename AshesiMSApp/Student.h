#ifndef STUDENT_H
#define STUDENT_H

#include "User.h"
#include <vector>
#include <iostream>

class Student : public User {
private:
    int studentID;
    string dateOfBirth, major, enrollmentDate;

public:
    Student(int userId, string fname, string lname, string mail, string pass, int sId, string dob, string maj, string enrollDate)
        : User(userId, fname, lname, mail, pass), studentID(sId), dateOfBirth(dob), major(maj), enrollmentDate(enrollDate) {}

    void enrollInCourse(int courseID) {
        cout << "Student " << getFullName() << " enrolled in course " << courseID << endl;
    }

    void viewGrades() {
        cout << "Displaying grades for " << getFullName() << endl;
    }

    int getStudentID() const { return studentID; }
};

#endif
