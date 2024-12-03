#ifndef ENROLLMENT_H
#define ENROLLMENT_H

#include <string>
#include <iostream>
using namespace std;

class Enrollment {
private:
    int enrollmentID;
    int studentID;
    int courseID;
    string semester;
    string grade;

public:
    Enrollment(int eId, int sId, int cId, string sem, string grd = "")
        : enrollmentID(eId), studentID(sId), courseID(cId), semester(sem), grade(grd) {}

    void getEnrollmentDetails() const {
        cout << "Enrollment ID: " << enrollmentID << ", Student ID: " << studentID
            << ", Course ID: " << courseID << ", Semester: " << semester
            << ", Grade: " << grade << endl;
    }

    void updateGrade(string newGrade) {
        grade = newGrade;
        cout << "Grade updated to " << grade << endl;
    }
};

#endif
