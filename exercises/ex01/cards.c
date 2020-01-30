/*
Maia Materman 
Software Systems
1/30/2020
*/

# include <stdio.h>
# include <stdlib.h>

int get_value(){
/*  This handles taking in the value from the user and processes 
    that value accordingly

    returns: card value which is an int that corresponds to the card
    that the user provided
*/
    char card_name[3] = {};
    puts("Enter the card name: ");
    scanf("%2s", card_name);
    int val = 0;
    switch(card_name[0]) {
        case 'K':
        case 'Q':
        case 'J':
            val = 10;
            break;
        case 'A':
            val = 10;
            break;
        default:
            val = atoi(card_name);
            if ((val < 1) || (val > 10)) {
                puts("I don't understand that value!");
                val = 0;
            }
    }
    return val;
}

int adjust_count(int card_val){
/*  This handles adjusting the count of cards each time a card is 
    provided from the user

    args: card_val, which is a int that corresponds to the card 
    that the user provided
    returns: either 1 or -1 depending on if the value of the card
    is over 10 (-1) or under 10 (1)
*/

 if ((card_val > 2) && (card_val < 7)){
            return 1;
        } else if (card_val == 10) {
            return -1;
        } else {
            return 0;
        }
}

int main(){
/*  This is the main class which allows users to count cards 
    successfully!
*/
int count = 0;
int value = 0;
do{
    value = get_value();
    count += adjust_count(value);
    printf("Current count: %i\n", count);

}
while(value != 0); 
return 0;
}
