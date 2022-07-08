#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	// perform calculations
	int totalStudents = 45;
	int boys = 25;
	int girls = totalStudents - boys;
	int passedStudents = totalStudents * 80 / 100;
	int failedStudents = totalStudents - passedStudents;
	int failedGirls = 2;
	int passedGirls = girls - failedGirls;
	int passedBoys = passedStudents - passedGirls;
	int failedBoys = boys - passedBoys;

	// print results
	cout << "Total Students : " << totalStudents << "\n"
		 << "\t> passed : " << passedStudents << "\n"
		 << "\t> failed : " << failedStudents << "\n"
		 << "Total Boys : " << boys << "\n"
		 << "\t> passed : " << passedBoys << "\n"
		 << "\t> failed : " << failedBoys << "\n"
		 << "Total Girls : " << girls << "\n"
		 << "\t> passed : " << passedGirls << "\n"
		 << "\t> failed : " << failedGirls << "\n";
}