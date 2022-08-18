
#include <iostream>

using namespace std;


void printRecursively(int arr[],int index,int len){
    if(index ==len){
        return;
    }
    else {
        printRecursively(arr,index+1,len);
        cout<<arr[index]<<endl;
    }
}

int main()
{
    int arr[5] = {2,4,5,6,7};
    printRecursively(arr,0,5);
    return 0;
}
