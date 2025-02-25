//#include <iostream>
//using namespace std;
//void rotateLeft(int**matrix, int size)
//{
//	int** rotate = new int* [size];
//	for (int i = 0; i < size; i++)
//	{
//		rotate[i] = new int[size];
//	}
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			rotate[size - j - 1][i] = matrix[i][j];
//		}
//	}
//	matrix = rotate;
//}
//void rotateright(int** matrix, int size)
//{
//	int** rotate = new int* [size];
//	for (int i = 0; i < size; i++)
//	{
//		rotate[i] = new int[size];
//	}
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			rotate[j][size - i - 1] = matrix[i][j];
//		}
//	}
//	matrix = rotate;
//}
//bool countRandL(string st)
//{
//	int Lcount = 0;
//	int Rcount = 0;
//	for (int i = 0; i < st.length(); i++)
//	{
//		if (st[i] == 'R')
//		{
//			Rcount++;
//		}
//		else if (st[i] == 'L')
//		{
//			Lcount++;
//		}
//	}
//	if (Lcount == Rcount)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//int main()
//{
//	int size;
//	cout << "give the size of matrix\n";
//	cin >> size;
//	int** matrix = new int*[size];
//	for (int i = 0; i < size; i++)
//	{
//		matrix[i] = new int[size];
//	}
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			cin >> matrix[i][j];
//		}
//	}
//	string st = "RLR";
//	if (countRandL(st) == true)
//	{
//		for (int i = 0; i < size; i++)
//		{
//			for (int j = 0; j < size; j++)
//			{
//				cout <<  matrix[i][j];
//			}
//		}
//	}
//	for (int i = 0; i < st.length(); i++)
//	{
//		if (st[i] == 'R')
//		{
//			rotateright(matrix, size);
//		}
//		else if (st[i] == 'L')
//		{
//			rotateLeft(matrix, size);
//		}
//	}
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			cout << matrix[i][j];
//		}
//	}
//}