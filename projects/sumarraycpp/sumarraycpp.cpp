// Program to find Sum of Array elements.

#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int  sum;
	int  arr[5];

	cout << " Enter any five Integer Numbers ::: ";
	for( int i=0 ; i<5 ; i++ )
	{
		cin >> arr[ i ];
	}

	sum = 0;
	for( i=0 ; i<5 ; i++ )
	{
		sum = sum + arr[ i ];
	}
	cout << " The sum of the Array elements is ::: " << sum;

	getch(); return 0;
}