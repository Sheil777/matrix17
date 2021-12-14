#include <iostream>

void inputMatrix( double **arr, int n, int m )
{
	for (int i = 0; i < n; i++)
		arr[i] = new double[m];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> arr[i][j];
		}
	}
}