#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid= start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid; // store mid vaue in ans
            end=mid-1; 
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start+(end- start)/2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid= start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid; // store mid vaue in ans
            start=mid+1; 
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start+(end- start)/2;
    }
    return ans;
}
int main(){
    int even[16]={1,2,3,3,3,3,3,3,3,3,4,5,6,7,7,8};
    int odd[15]={1,1,1,2,2,2,3,3,3,3,4,4,5,6,7};
    
    cout<<"First occurrence of 3 is at index: "<<firstOcc(even,16,3)<<endl;
     cout<<"last occurrence of 3 is at index: "<<lastOcc(even,16,3)<<endl;
      cout<<"First occurrence of 3 is at index: "<<firstOcc(odd,15,3)<<endl;
       cout<<"last occurrence of 3 is at index: "<<lastOcc(odd,15,3)<<endl;

    return 0;
}
