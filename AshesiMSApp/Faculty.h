#ifndef FACULTY_H
#define FACULTY_H

#include "User.h"
#include <vector>
#include <iostream>

class Faculty : public User {
private:
    int facultyID;
    string dateOfAppointment, department;
    vector<int> teachingCourses;

public:
    Faculty(int userId, string fname, string lname, string mail, string pass, int fId, string doa, string dept)
        : User(userId, fname, lname, mail, pass), facultyID(fId), dateOfAppointment(doa), department(dept) {}

    void enterGrades(int courseID, int studentID, string grade) {
        cout << "Grade " << grade << " entered for student " << studentID << " in course " << courseID << endl;
    }

    void viewRoster(int courseID) {
        cout << "Viewing roster for course " << courseID << endl;
    }

    void assignCourse(int courseID) {
        teachingCourses.push_back(courseID);
        cout << "Course " << courseID << " assigned to faculty " << getFullName() << endl;
    }

    int getFacultyID() const { return facultyID; }
};

#endif
