#include <string>
#include <iostream>
using namespace std;


class Assignment {
private:
    string assignmentName; 
    double grade;         

public:
    void setAssignmentName(string s) {
        assignmentName = s;
    }

    string getAssignmentName() {
        return assignmentName;
    }

    void setGrade(double g) {
        grade = g;
    }

    double getGrade() {
        return grade;
    }
};

int main() {
    Assignment a1;
    a1.setAssignmentName("Object Oriented Programming");
    a1.setGrade(98.6);

    Assignment a2;
    a2.setAssignmentName("Voice Lessons");
    a2.setGrade(43);

    cout << a1.getAssignmentName() << ": " << a1.getGrade() << endl;
    cout << a2.getAssignmentName() << ": " << a2.getGrade();

    return 0;
}