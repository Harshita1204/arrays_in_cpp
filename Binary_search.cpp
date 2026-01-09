#include <iostream>
using namespace std;
// Function to perform Binary Search
// Returns index of key if found, else returns -1
int binarySearch(int arr[],int size, int key){
 // Start index of array
    int start=0;
  // end index of an array
    int end=size-1;
    // find middle index
    int mid = (start+end)/2;
  // loop until start crosses end
    while(start<=end){
        if(arr[mid]==key){ // if key is found at mid then return the mid index
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;  //  // If key is greater than middle element, search in right half
        }
        else{
            end=mid-1;  // Else search in left half
        }
        mid=(start+end)/2;
    }
    return -1;  // If key is not found, return -1
}
int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    
    int evenIndex = binarySearch(even,6,12);
    cout<<"Index of 12 is: "<<evenIndex<<endl;
    
    cout<<endl;
    
    int oddIndex = binarySearch(odd,5,8);
    cout<<"Index of 8 is: "<<oddIndex<<endl;
    cout<<endl;
 }
