#include <iostream>

using namespace std;

int main() {
	int grade, gradeTotal, numGrade;
	double average;
	numGrade = gradeTotal = 0;
	cout << "Enter a grade: ";
	cin >> grade;

	while (grade != -1) {
		gradeTotal += grade;
		++numGrade;
		cout << "Enter a grade: ";
		cin >> grade;
	}
	
	average = gradeTotal / numGrade;
	cout << "The average grade is " << average << endl;
	return 0;
}