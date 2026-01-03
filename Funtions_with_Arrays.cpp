#include <iostream>
#include<algorithm>
using namespace std;
 void printArray(int arr[],int size){
     cout<<"Printing an array"<<endl;
     //print the array
     for(int i=0;i<size;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
     cout<<"Printing done"<<endl;
     cout<<endl;
 }
int main() {
   int third[15]={2,7,6};
   int n=15;
   printArray(third,15);
   
   int fourth[12]={0};
   int m=12;
   printArray(fourth,12);
   
   int fifth[10]={1,2,3,4,5,6,7,8,9,10};
   int p=10;
   printArray(fifth,10);
   
    return 0;
}
