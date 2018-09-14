//include library
#include <iostream>
using namespace std;
int main()
{
    int i, j, rows;
	cout << "Enter any number " << endl;
	cin >> rows;
	cout << "printing" << endl;
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++) //print spaces
        {
            cout << " ";
        }

             for(j=1; j<=rows; j++) //print stars
        {
            if(i==1 || i==rows || j==1 || j==rows)
                cout << "* ";
            else
                cout << " ";
        }

        cout << endl; // print next line
    }

    return 0;
}
