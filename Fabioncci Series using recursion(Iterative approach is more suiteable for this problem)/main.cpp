
#include <iostream>

using namespace std;

int fabioncci(int n){
    if(n == 0 || n == 1){
        return n;
    }
    else{
        return fabioncci(n-1) + fabioncci(n-2);
    }
}
// iterative approach is more suiteable for this problem.
int main()
{
    int i = 0;
    while(i<10){
        cout<<fabioncci(i)<<" ";
        i++;
    }

    return 0;
}
