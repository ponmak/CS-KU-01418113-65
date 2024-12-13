// 02 GCD and LCM
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    char m_str[42], n_str[45];
    fgets(m_str, 42,stdin);
    fgets(n_str, 42,stdin);
    long long int m_og = atoll(m_str);
    long long int n_og = atoll(n_str);
    long long int m = atoll(m_str);
    long long int n = atoll(n_str);
    long long int temp;

    // GCD result
    long long int GCD_result;

    if (n > m){
        temp = m;
        m = n;
        n = temp;
    }

    while (m % n != 0) {
        GCD_result = m % n;
        m = n; 
        n = GCD_result;
        GCD_result = n;
    }
    
    printf("GCD: %d\n",GCD_result);

    // LCM result
    long long int LCM_result = m_og * n_og / GCD_result;
    printf("LCM: %d\n", LCM_result);

    return 0;
}
