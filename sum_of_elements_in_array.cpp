#include <iostream>
using namespace std;

int getSum(int arr[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[100];
    cout<<"Enter array elements:  "<<endl;
    for(int i=0;i<n;i++){
       // cout<<"Enter array elements:  "<<endl;
        cin>>arr[i];
    }
    int total=getSum(arr,n);
    cout<<"sum of the array elements: "<<total<<endl;
    return 0;
}
