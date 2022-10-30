/* C++ PROGRAM TO FIND INTERSECTION OF 2 SETS*/

#include <iostream>

using namespace std;

void intersectionset(int a[], int b[], int n, int m);

int main()
{
	int x[10000], y[10000];

	int n, m;

	cout << "ENTER NUMBER OF ELEMENTS IN A AND B RESPECTIVELY" << endl;
	cin >> n >> m;
	if (n == 0 || m == 0)
	{
		cout << "Intersection is NULL set" << endl;
		exit(1);
	}

	cout << "Enter Elements of set A" << endl;

	// TAKING INPUT OF ELEMENTS PRESENT IN SET A AND B RESPECTIVELY

	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}

	cout << "Enter Elements of set B" << endl;

	for (int i = 0; i < m; i++)
	{
		cin >> y[i];
	}

	cout << "Intersection of 2 sets is" << endl;
	intersectionset(x, y, n, m);

	return 0;
}

void intersectionset(int a[], int b[], int n, int m)
{
	int c[100000], x = 0, temp;

	for (int i = 0; i < n; i++) // SORTING OF SET A IN DESCENDING ORDER
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{

				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for (int i = 0; i < m; i++) // SORTING OF SET B IN DESCENDING ORDER
	{
		for (int j = i + 1; j < m; j++)
		{
			if (b[i] < b[j])
			{
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) // COMPARING EACH ELEMENT OF  SET A WITH ELEMENTS IN SET B , IF MATCH IS FOUND THEN STORING THAT ELEMENT IN ANOTHER SET W
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i] == b[j])
			{
				c[x] = a[i];
				x++;
			}
		}
	}

	for (int i = 0; i < x; i++)
	{
		if (c[i] != c[i + 1]) // THIS CONDITION REMOVES THE DUPLICATE ELEMENT PRESENT IN SET W AND PRINTS THE INTERSECTION OF 2 SETS A AND B
			cout << c[i] << endl;
	}
}
