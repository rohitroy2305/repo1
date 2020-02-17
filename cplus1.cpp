#include<iostream>
#include<algorithm>
using namespace std;

int main (void)
{
  int n,i;
  cout<<"Enter an integer:"<<endl;
  cin>>n;
  int arr [n];
  cout<<"Enter the numbers"<<endl;
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(0,n);
  cout<<"Arranged array:"<<endl;
  for(i=0;i<n;i++){
    cout<<arr[i];
  }
  return 0;
}
