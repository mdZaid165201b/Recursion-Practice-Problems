
#include <iostream>

using namespace std;
int sumOfNumber(int num,int sum = 0){
    if(num == 0){
        return sum;
    }
    else{
        sumOfNumber(num/10,sum+(num%10));
    }
}

int main()
{
    cout<<sumOfNumber(512);
    return 0;
}
