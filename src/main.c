#include <stdio.h>

int main(){
    int input_num;
    scanf("%d", &input_num);
    printf("You entered:  %d \n\n",input_num);

    
    while(input_num != 1){
        if((input_num % 2) == 0){
            input_num = input_num / 2;
            printf("%d \n", input_num);
        } else {
            input_num = (input_num * 3) + 1;
            printf("%d \n", input_num);
        }
    }
    
    return 0;
}