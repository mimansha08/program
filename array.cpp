#include <iostream>
using namespace std;

void display(int arr[], int i, int n){
    if(i==n)
    {return;}
    cout<<"vhgu";
    cout<<arr[i]<<endl;
    display(arr, i+1, n);
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
     {cin >> arr[i];
		}   
	cout<<"vhgu"<<endl;;	
    display(arr,0,n);
    cout<<"vhytgutggu";
}
