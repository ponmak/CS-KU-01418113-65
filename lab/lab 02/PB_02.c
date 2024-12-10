// 02 โปรโมชั่นสะสมสติกเกอร์
#include <stdio.h>
#include <stdlib.h>

int main() {

    char ticket_str[10], price_str[10];
    
    // get input by using str buffer
    fgets(ticket_str, 10, stdin);
    fgets(price_str, 10, stdin);

    // convert int and float
    int ticket = atoi(ticket_str);
    float price = atof(price_str);
    int percent = 0;
    int old_ticket = ticket;

    if (ticket == 1){
        ticket -= 1;
        percent = 90;
        price = price * (percent/100.0);
    } else if (ticket == 2) {
        ticket -= 2;
        percent = 85;
        price = price * (percent/100.0);
    } else if (ticket >= 3 && ticket < 6) {
        ticket -= 3;
        percent = 80;
        price = price * (percent/100.0);
    } else if (ticket >= 6 && ticket < 9) {
        ticket -= 6;
        percent = 70;
        price = price * (percent/100.0);
    } else if (ticket >= 9) {
        ticket -= 9;
        percent = 60;
        price = price * (percent/100.0);
    }
    
    if (old_ticket == 0){
        printf("You get %d percents discount.\n", percent);
    } else {
        printf("You get %d percents discount.\n", 100 - percent);
    }
    
    printf("Total amount due is %.02f Baht.\n",price);
    printf("And you have %d stickers left.\n",ticket);
    
    return 0;
}
