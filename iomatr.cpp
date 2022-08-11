#include <iostream>
#include <iomanip>
#include <cassert>

using namespace std;

const int ROWS = 2;
const int COLS = 3;

void read(int matr[][COLS], int rows, int cols)
{
	assert(rows <= ROWS && cols <= COLS);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "[" << i << "][" << j << "] = ";
			cin >> matr[i][j];
		}
	}
}//read

void print(const int matr[][COLS], int rows, int cols)
{
	const int WIDTH = 4;
	assert(rows <= ROWS && cols <= COLS);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << setw(WIDTH)	<< matr[i][j] << " ";
		}
		cout << endl;
	}
}//print

int main()
{
	int matr[ROWS][COLS];
	read(matr, ROWS, COLS);
	print(matr, ROWS, COLS);

	return 0;
}//main
