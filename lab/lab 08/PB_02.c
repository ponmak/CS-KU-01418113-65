// 02 ค้นหาและใส่คะแนน

#include <stdio.h>
#include <string.h>

typedef struct {
    char id[15];
    int score;
} studentRecord;

void init(studentRecord list[], int size) {
    for (int i = 0; i < size; i++){
        char __id[12];  
        sprintf(__id, "5510000%d", i+1);  
        strcpy(list[i].id, __id);
        list[i].score = 0 ;
    }
}

void enterScore(studentRecord list[], int size){
    char input_id[15];
    int input_score;

    scanf("%s %d", input_id, &input_score);

    for (int i = 0; i < size; i++) {
        if (strstr(list[i].id, input_id) ) {  
            list[i].score = input_score;  
            break;
        }
    }
}

void printRecords(studentRecord list[], int size) {
	int i;

    printf("   ID        Score\n");
    for (i = 0; i < size; i++) {
	    printf("%s       %d\n", list[i].id, list[i].score);
	}
}




int main() {
	int enter;
	studentRecord list[3];

	init(list, 3);
        enterScore(list, 3);
	printRecords(list, 3);
	return 0;
}
