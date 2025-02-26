// 02 คำนวณวันในสัปดาห์
#include <stdio.h>

typedef enum { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY } DayOfWeek;

DayOfWeek findDayOfWeek(int day, int month) {
    int startday = 2;
	int totalday = 0;

	for (int i = 1; i < month; i++){
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
			totalday += 31;
		}
		else if (i == 4 || i == 6 || i == 9 || i == 11){
			totalday += 30;
		}
		else if (i == 2){
			totalday += 28;
		}
	}

	totalday += day - 1;
	return (DayOfWeek)((totalday + startday) % 7);
}

int main()
{
	int day, month;
	DayOfWeek dow;

	printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
	printf("Enter Day and Month: ");
	scanf("%d %d", &day, &month);
	dow = findDayOfWeek(day, month);
	printf("Day:%d Month:%d of Year 2013 is ", day, month);
	switch(dow){
		case SUNDAY : printf("Sunday.\n"); break;
		case MONDAY: printf("Monday.\n"); break;
		case TUESDAY : printf("Tuesday.\n"); break;
        case WEDNESDAY : printf("Wednesday.\n"); break; 		
        case THURSDAY : printf("Thursday.\n"); break; 		
        case FRIDAY : printf("Friday.\n"); break; 
        case SATURDAY : printf("Saturday.\n"); break;
	}
}