#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    const int capacity=6;
    int error, slot_select, position;
    char bullet_select, cylinder_select, trigger_select;

    printf("Do you want to insert the bullet? [Y/n]\n");
    scanf(" %c", &bullet_select);
    if(bullet_select=='y'||bullet_select=='Y'){
        do{
            error=0;
            printf("In which slot?\n");
            scanf("%d", &slot_select);
            if(slot_select>capacity||slot_select<1){
                printf("ERROR: The gun has six slots... Enter a valid value.\n");
                error=1;
            }
        }while(error!=0);

        printf("Do you want to spin the cylinder? [Y/n]\n");
        scanf(" %c", &cylinder_select);

        if(cylinder_select=='y'||cylinder_select=='Y'){
            position=(rand()%capacity)+1;

            printf("Do you want to pull the trigger? [Y/n]\n");
            scanf(" %c", &trigger_select);

            if(trigger_select=='y'||trigger_select=='Y'){
                if(position==slot_select){
                    printf("\nSilence.\n");
                    printf("A life ended, but not because it had no value.\n");
                    printf("Even in the darkest moment, there were paths unseen, people who could have cared, and a future still unwritten.\n");
                    printf("No pain is permanent enough to justify ending something as infinite as a human life.\n");
                }else{
                    printf("\nYou are still here.\n");
                    printf("Not by chance alone, but as a reminder: your life is not meant to end like this.\n");
                    printf("Pain can pass, situations can change, and meaning can be rebuilt.\n");
                    printf("Choosing to live, even after facing the void, is the strongest act a person can make.\n");
                }
            }
        }else{
            printf("\nYou choose to live...\n");
        }
    }else{
        printf("\nYou choose to live...\n");
    }
}