// 03 นักโทษที่หายไป

#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        arr[i] = temp;
    }

    int max = -69;
    for (int i = 0; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }

    vector<int> odd, even;

    for (int i = 1; i <= max; i++){
        bool flag = false;
        int j;
        for (j = 0; j < n; j++){
            if (arr[j] == i){
                flag = true;
            }
        }

        if(!flag){
            if (i % 2 != 0){
                odd.push_back(i);
            } else {
                even.push_back(i);
            }
        }
    }

    for (int i = 0; i < odd.size(); i++){
        cout << odd[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < even.size(); i++){
        cout << even[i] << " ";
    }
}