// 02 เงินได้รายบุคคล

#include <iostream>
using namespace std;

int main(){

    char name[20];
    double income = 0;

    cin >> name;

    double temp;

    for (int i = 0; i < 13; i++){        
        cin >> temp;

        if (i == 0){
            income += temp * 12;
        } else {
            income += temp * 0.15;
        }
    
    }

    char buffer[42];
    sprintf(buffer, "%s %.2f", name, income);
    
    cout << buffer << endl;

    return 0;
}