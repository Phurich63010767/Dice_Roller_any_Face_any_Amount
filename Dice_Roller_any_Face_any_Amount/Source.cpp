#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std; 

int main()

{
	START:
	int x,y ;
	cout << "Enter Dice's Face(s): ";
	cin >> x; 
	cout << endl;
	cout << "How Many Dice?: ";
	cin >> y;
	cout << endl;
	if (x < 1) 
	{
		cout << "Cannot Enter Below 1 Face or 1 Dice."<< endl;
		system("Pause");
		system("CLS");
		goto START;
	}
	if (y < 1)
	{
		cout << "Cannot Enter Below 1 Face or 1 Dice."<< endl;
		system("Pause");
		system("CLS");
		goto START;
	}
	else
	{
		 cout << "Result: ";
		 int a;
	     srand(time(0));
			for (int i = 0; i < y; i++)
			{			
				a = (rand() % x) + 1;
				cout << a << " ";	
							 
			}
			cout << endl;
			
			
	}

	system("Pause");
	return 0;
}
