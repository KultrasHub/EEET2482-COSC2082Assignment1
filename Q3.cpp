#include <iostream>
using namespace std;
// Find median
int median2(double* a, int l, int r)
{
	int n = r - l + 1;
	n = (n + 1) / 2 - 1;
	if (n % 2 == 1) {
		n = n + l - 1;
	}
	else {
		n = n + l;
	}
	return n;
}

// Function to calculate Q3
double quartile3(double* arr, int r)
{
	// Median of total data
	int mid_index = median2(arr, 0, r);
	double Q3;
	// Median of second half
	if ((r - mid_index +1 ) % 2 == 1) {
	Q3 = arr[median2(arr, mid_index + 1, r)];
	}
	else {
	Q3 = (arr[median2(arr, mid_index + 1, r)] + arr[median2(arr, mid_index + 1, r) + 1]) / 2;
	}
	return Q3;
}

double qq(double* arr, int size)
{
    if(size%4==1)
    {
        int tIndex=(size-1)*3/4;
        return arr[tIndex];
    }
    else{
        return 0;
    }

}
//Sorting array
void sortarray(double* arr, int r)
{
	int i, j, temp;
	for (i = 0; i < r; i++)
	{
		for (j = i + 1; j < r; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return;
}
// Driver Code
int main()
{
	// int i, j, temp;
	// double arr[] = { 10, 19, 1, 3, 9, 100, 0, 22, 12, 65, 44 };
	// int m = sizeof(arr) / sizeof(arr[0]);
	// sortarray(arr, m);
	// cout << "Third Quartile = " << quartile3(arr, m) << endl;
    int testingNumber=6*3/4;
    cout<<testingNumber;
	return 0;
}