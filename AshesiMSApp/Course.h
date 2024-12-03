#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Course {
private:
    int courseID;
    string courseName;
    int credits;
    string schedule;
    int assignedFaculty;
    vector<int> enrolledStudents;

public:
    Course(int id, string name, int creds, string sched)
        : courseID(id), courseName(name), credits(creds), schedule(sched), assignedFaculty(-1) {}

    void assignFaculty(int facultyID) {
        assignedFaculty = facultyID;
        cout << "Faculty " << facultyID << " assigned to course " << courseName << endl;
    }

    void registerStudent(int studentID) {
        enrolledStudents.push_back(studentID);
        cout << "Student " << studentID << " registered for course " << courseName << endl;
    }

    void printCourseDetails() const {
        cout << "Course ID: " << courseID << ", Name: " << courseName << ", Credits: " << credits << endl;
    }
};

#endif
