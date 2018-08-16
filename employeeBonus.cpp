#include <iostream>

using namespace std;

int main()
{
	for (int i= 0; i < 5; i++)
	{
		// INPUT
		double salary;
		cout << "Enter salary: ";
		cin >> salary;

		int years;
		cout << "Enter years worked: ";
		cin >> years;

		// PROCESSING
		double bonus = 0;
	
		// by default make the bonus 10%
		bonus = salary * 0.1;

		// check if employee has been around for over 20 years
		if (years >= 20 && salary < 80000) 
		{
			// if so, overwrite the bonus with 20%
			bonus = salary * 0.2;
		}
	
		// OUTPUT
		cout << "Congrats! You receive $" << bonus << " bonus." << endl;

	}

	system("PAUSE");
	return 0;
}

//
//
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	// INPUT
//	double salary;
//	cout << "Enter salary: ";
//	cin >> salary;
//
//	while (salary != 0)
//	{
//		int years;
//		cout << "Enter years worked: ";
//		cin >> years;
//
//		// PROCESSING
//		double bonus = 0;
//	
//		// by default make the bonus 10%
//		bonus = salary * 0.1;
//
//		// check if employee has been around for over 20 years
//		if (years >= 20 && salary < 80000) 
//		{
//			// if so, overwrite the bonus with 20%
//			bonus = salary * 0.2;
//		}
//	
//		// OUTPUT
//		cout << "Congrats! You receive $" << bonus << " bonus." << endl;
//
//		// ask for salary again for the next guy
//		cout << "Enter salary: ";
//		cin >> salary;
//	}
//
//	system("PAUSE");
//	return 0;
//}