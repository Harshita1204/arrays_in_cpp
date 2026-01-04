#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;

int getMax(int num[], int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
       // if(num[i]>max){
         //   max=num[i];
        //}
        //  In-built functions for maximum
        maxi=max(maxi,num[i]);
    }
    return maxi;
}
int getMin(int num[], int n){
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        //if(num[i]<min){
          //  min=num[i];
        //}
        // In-built function for minimum
        mini=min(mini,num[i]);
    }
    return mini;
}
   int main(){
       int size;
       cout<<"Enter the size: "<<endl;
       cin>>size;
       int num[100];
       for(int i=0;i<size;i++){
           cin>>num[i];
       }
       cout<<"Maximum value is: "<<getMax(num,size)<<endl;
       cout<<"Minimum value is: "<<getMin(num,size)<<endl;
    return 0;
}
