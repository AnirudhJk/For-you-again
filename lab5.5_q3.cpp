//include library
#include<iostream>
using namespace std;

int main (){
int n;
	cout<<"Enter any odd number";
	cin>>n;
	if (n%2==1){ //to check whether the n is odd or not
  for (int i=1; i<=n; i++){
     for(int j=1; j<=n; j++){
  if (i==1||i==n||j==1||j==n||i==j||i==n-j+1){  

  cout<<"*";
     }

     else{
    cout<<" ";
     }


     }

     cout<<endl;
  }

}

return 0;


}
