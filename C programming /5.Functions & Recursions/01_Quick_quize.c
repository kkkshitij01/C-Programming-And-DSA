/*write a program with 3 funciton 
1. goodMorning function prints good morning;
2. goodAfternoon function prints good afternoon;
3. goodNight function prints good night;
*/

#include<stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();

int main()
{
    printf("This function calling\n");
    goodMorning();
    goodAfternoon();
    goodNight();
    printf("End of the program\n");

}

void goodMorning(){
    printf("Good Morning\n");
}
void goodAfternoon(){
    printf("Good Afternoon\n");
}
void goodNight(){
    printf("Good Night\n");
}