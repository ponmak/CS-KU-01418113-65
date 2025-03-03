// 01 Reduce to Zero

#include <iostream>
using namespace std;

int main(){
    
    int n,i = 0;
    cin >> n;

    while (n){
        if (n % 2 == 0){
            n /= 2; 
        } else {
            n -= 1;
        }

        i++;
    }

    cout << i;

    return 0;
}