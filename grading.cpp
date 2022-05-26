// grading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

int main(){

	int marks, result;

	cout << "Please enter your marks" << endl;
	cin >> marks;
	switch (marks) {

	case 1: (marks >= 80); {
		cout << "Distinction";
	}

	case 2: (marks >= 60 && marks < 80); {
		cout << "Credit";
		

	}

	case 3:(marks >= 50 && marks < 60); {
		cout << "pass";
		
	}

	case 4: (marks >= 40 && marks < 50); {
		cout << "supplemeteray";
		
	}


	case 5: (marks >= 30 && 40); {
		cout << "Fail";
		

	}

	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
