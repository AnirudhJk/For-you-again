
//include library
#include <iostream>
using namespace std;
//include main function
int main() {
	int i, j ,n; //defining variable
		cout << "Enter the size of the square" <<endl; //Asking user
		cin >> n ; //assigning value to n
//printing n stars in 1st and last line
	for (i=0;i<n;i++) {
		if (i==0 || i==n-1) {
			for (j=0;j<n;j++) {
				cout << "* " ;
					}
				}
//printing * in the 1st column n-2 spaces
		else { cout << "* " ;
			for (j=0;j<n-2;j++) {
				cout << "  " ;
					}
//printing * in the last column
			cout << "* ";
			}
//next line
		cout << endl;
			}

return 0;
}
