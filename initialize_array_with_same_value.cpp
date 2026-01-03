#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    //declare and array
    int number[15];
    // if we want to initialize an entire array with the same value then we can use for loop
    for(int i=0;i<15;i++){
        number[i]=12;
    }
    
    //accessing an array
     cout<<"value at index o : "<<number[0]<<endl;
     cout<<"value at index 9 : "<<number[9]<<endl;
     cout<<"value at index 11 : "<<number[11]<<endl;
     // now at every index value will be set to 12 
    return 0;
}
