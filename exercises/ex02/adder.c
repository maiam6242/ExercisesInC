#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 9000

int array[SIZE];
int count = 0;

void clear_array(){
    for (int i = 0; i < SIZE; i++){
        array[i] = 0;
    }
}

void add_number_to_array(char num[]){
    int new_num = atoi(num);
    if(new_num == 0 && num[0] != '0'){
        perror("THE STRING COULD NOT BE CONVERTED TO AN INTEGER");
    }
    count ++;
    array[count] = new_num;
    printf("%d\n", array[count]);
}

int sum_array(){
    int sum = 0;
    for (int i = 0; i < SIZE; i++){
        sum += array[i];
    }
    if (sum < -100000000000){
        perror("SUM IS TOO LARGE");
    }
    else{
        return sum;
    }

}

int main(){

    int true = 1;
    char number[32];
    clear_array();
    
    while (true == 1){
    printf("Please enter a number. If you would like to exit the program, please type Ctrl+D \n");

    if (fgets(number, 33, stdin) == NULL){
        printf("%i\n", sum_array());
        perror("PROGRAM ENDED");
        true = -1;
    }
    else
    {
        printf("%s\n", number);
        if(strlen(number) >= 32){
            perror("ERROR: INPUT TOO LONG");
            true = -1;
        }
        add_number_to_array(number);        
    }
    }


}