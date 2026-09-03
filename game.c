#include <stdio.h>
int main()
{
    int i = 0;
    int health = 100;
    int mana = 50;
    
    printf("\n-------MENU-------\n");
    printf("1- Use health potion (+25 health)\n");
    printf("2- Cast spell (-15 mana)\n");
    printf("3- Show status\n");
    printf("4- Exit\n");
    printf("Choose one: ");

    scanf("%d", &i);
    if (i == 1) {
        health += 25; 
        printf("Potion used! Health: %d\n", health)
                }
    else if (i == 2) {
        if (mana >= 15) {
            mana -= 15;
            printf("Spell casted! Mana: %d\n", mana);
                        }
        else {
            printf("Insufficient mana.\n");
             }
                     }
    else if (i == 3) {
        printf("Health: %d\n", health);
        printf("Mana: %d\n", mana);
                     }
    else if (i == 4) {
        printf("Exiting...\n");
                     }
    else {
        printf("Invalid choice. Try again.\n");
         }

    return 0;
}
