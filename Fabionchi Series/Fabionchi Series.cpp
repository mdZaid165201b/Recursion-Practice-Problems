/* 
0 1 1 2 3 5 8 13 21 34
print fabionchiSeries using recursion.
*/


#include <iostream>

using namespace std;

int fabionchiSeries(int num){
    if(num == 0 || num == 1)
        return num;
        
    else{
        return fabionchiSeries(num - 2) + fabionchiSeries(num - 1);
    }    
}   


int main()
{
    for(int i = 0; i < 10; i++){
        cout<<fabionchiSeries(i)<<" ";
    }

    return 0;
}
