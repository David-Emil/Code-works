#include<iostream>
using namespace std;
void show_menu()
{
	cout << "Health club membership menu"<<endl;
	cout << "1.standard adult membership"<<endl;
	cout << "2.child membership"<<endl;
	cout << "3.senior citizen membership"<<endl;
	cout << "4.quit program";
};
int calculate(int choice, int months)
{
	int total;
	if (choice == 1)
	{
		total = months * 40;
	}
	else if (choice == 2)
	{
		total = months * 20;
	}
	else if (choice == 3)
	{
		total = months * 30;
	}
	return total;
};
void main()
{
	int choice, months, total;
	do
	{
		show_menu();
		cout << endl<<endl <<"Enter your choice: ";
		cin >> choice;
		if (choice == 1 || choice == 2 || choice == 3)
		{
			cout << endl << "Enter total months: ";
			cin >> months;
			total = calculate(choice, months);
			cout << endl << "Total charges for " << months << "-month = " << total << endl << endl;
		}
		else
			cout << "we were glad to help you";
	} while (choice == 1 || choice == 2 || choice == 3);
	system("pause");
}