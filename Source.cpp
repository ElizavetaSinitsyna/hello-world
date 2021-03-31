#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

void massive(int matrix[][10], int m)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		cout << "\n";
		for (j = 0; j < m; j++)
		{
			cout << matrix[i][j] << "     ";
		}
	}
	cout << "\n";
}

int main()
{
	int i, j;
	int matrix[10][10];
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			matrix[i][j] = rand() % 100;
		}
	}
	cout << "matrix: " << endl;
	massive(matrix, 10);
	return 0;

}

