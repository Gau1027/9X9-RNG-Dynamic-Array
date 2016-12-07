//Gordon Upshaw
// 5/7/2015
//Lab 10




#include <iostream>
#include <new>
#include <cmath>
#include <ctime>
#include <iomanip>




using namespace std;




int findMax( int *vals, int numels)
	{
		int i, max = vals[0];


		for (i=1; i < numels; i++)
			if (max < vals [i])
				max =vals [i];


		return max;
	}


int argu ()
{
	const int NUMPTS =5;
	int nums [NUMPTS] ={100,500,9000,80};


	cout << "\n The Maximum value is"
	
		<<findMax (nums, NUMPTS) <<endl;


	return 0;
}


void printArray ()
{
	const int NUMROWS = 9; 
	const int NUMCOLS =9; 
	int RNGarray [NUMROWS] [NUMCOLS] = {}; 
	srand ( static_cast<unsigned int>(time(NULL)) );
	for (int i=0;  i < NUMROWS; i++)
	{
		for (int j=0; j < NUMCOLS; j++)
		{
			RNGarray [i][j] = rand() %899+100;
		}
	}
	for (int a=0;  a < 9; a++)
	{
		for (int b=0; b < 9; b++)
		{
			cout << setw(5) << *(*(RNGarray+a)+b) << " "; //Array Priniting with a pointer
		}
		cout << endl;
	}
}






int Dynamic()
{
	int elem;
	int str;
	int inc;
	cout << "How many numbers would you like to type? ";
	cin >> elem;
	int *p2 = new int[elem];
	cout << "Enter  start number: ";
	cin >> str;
	cout << "Enter inc value: ";
	cin >> inc;
	*(p2+1) = str;
	cout << *(p2+1) <<endl;
	for (int n=2; n<elem+1; n++) //Dyanmic Array looped
	{
		*(p2+n) = (*(p2+n-1)+inc);
		cout << *(p2 + n) << endl; // Displaying with pointers
	}
	return 0;
}


int main ()
{
	char yn;
do{
	
	int choice;
	




	cout << "Press 1 for RNG array" << endl;
	cout << "Press 2 for dynamic array" <<endl;
	cout << "Press 3 for function argument" << endl;
	cin >> choice;


	if (choice==1)
{


	printArray (); // Print Array Function
}


if (choice ==2)
{
	Dynamic(); //Dynamic Array
}


if (choice ==3)
{
	argu (); //Array as a function
}


cout<< "Go again? (Type Y or y)";


}while (cin >> yn && (yn == 'Y' || yn == 'y'));


system ("pause");
return 0;
}
