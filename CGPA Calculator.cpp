
#include <iostream>
using namespace std;

int main() {
    int Courses;
    cout << "Enter the number of courses: ";
    cin >> Courses;

    double totalCredits = 0;
    double totalGradePoints = 0;

    for (int i = 0; i<Courses; i++) {
        double credits, grade;
        cout << "Enter the credits for course " << i + 1 << ": ";
        cin >> credits;
        cout << "Enter the grade for course " << i + 1 << " (between 0 and 4): ";
        cin >> grade;

        totalCredits += credits;
        totalGradePoints += credits * grade;
    }

    double cgpa = totalGradePoints / totalCredits;

    cout << "CGPA of the student is: " << cgpa << endl;

    return 0;
}
