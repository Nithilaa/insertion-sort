#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int n;
    cout<<"Enter Array size : ";
    cin>>n;
    int arr[] = new int[n];
    int countarr[50]={0};
    cout<<"Enter the elements (0-49): ";
    for(int i=0;i<n;i++){
        cin>>arr[i]
        countarr[arr[i]]+=1;
    }
    for(int i=0;i<50;i++){
        if(countarr[i]!=0){
            while(countarr[i]!=0){
                cout<<i;
                countarr[i]--;
            }
        }
    }
    cout<<"Sorted array: \n";
    printArray(arr, n);
    return 0;
}
