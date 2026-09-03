#include <stdio.h>
int main() {
    int i=0;
    printf("\n-------MENU-------\n");
    printf("Choose one:\n");
    scanf("%d",&i);
    printf("1-Use health potion(+25 health)\n");
    printf("2- Cast spell(-15 mana)\n");
    printf("3-Show status\n");
    printf("4- Exit\n");
    int health, mana;
    health=100;
    mana=50;
    if (i<=0)
        while (i<=0) {
          i++;
        }
    }
    else if (i=1){
        health-= 25;}
    else if (i=2) {
        if (mana>=15) {
            mana-=15;
        }
        else {
            printf("insufficient mana.");
        }
    }
    else if (i=3) {
        printf("health:%d\n", health);
        printf("mana;%d\n", mana);
    }
    else(i=4);
    return 0;
}