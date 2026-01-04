#include <iostream>
using namespace std;

// swap alternate
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapAlternate(int arr[], int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[8]={5,6,9,4,7,6,1,0};
    int odd[5]={11,33,9,76,43};
     cout<<"Array before even alternate swapping: "<<endl;
     printArray(even,8);
    cout<<endl;
    cout<<"array after even alternate swapping: "<<endl;
     swapAlternate(even,8);
     printArray(even,8);
     
     cout<<endl;
     
     cout<<"Array before odd alternate swapping: "<<endl;
     printArray(odd,5);
     cout<<endl;
     cout<<"array afterodd alternate swapping: "<<endl;
     swapAlternate(odd,5);
     printArray(odd,5);
}
