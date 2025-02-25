#include <iostream>
using namespace std;
int stepsTaken(int steps1)
{
	if (steps1 == 1)
	{
		return 1;
	}
	else if (steps1 == 2)
	{
		return 2;
	}
	int first = 1, second = 2, current;
	for (int i = 3; i <= 3; i++)
	{
		current = first + second;
		first = second;
		second = current;
	}
	return second;
	
}
int main()
{
	int steps;
	cout << "how many steps you want to climb\n";
	cin >> steps;
	cout << stepsTaken(steps);
}