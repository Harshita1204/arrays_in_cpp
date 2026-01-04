#include <iostream>
using namespace std;

// linear search
int search(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[10]={3,5,23,45,2,1,9,23,87,67};
    cout<<"Enter the element to search for: ";
    int key;
    cin>>key;
    int index=search(arr,10,key);
    if(index!=-1){
        cout<<"key is present"<<endl;
        cout<<"Index: "<<index<<endl;
        cout<<"value: "<<arr[index]<<endl;
    }
    else{
        cout<<"key is absent"<<endl;
    }
}
