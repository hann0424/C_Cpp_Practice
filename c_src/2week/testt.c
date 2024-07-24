#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char name[50];
    int hp;
    int attack;
    int defense;
} Character;

void attack(Character *attacker, Character *defender) {
    int damage = attacker->attack - defender->defense;
    if (damage < 0) damage = 0;
    defender->hp -= damage;
    printf("%s가 %s를 공격하여 %d의 피해를 입혔습니다!\n", attacker->name, defender->name, damage);
}

int main() {
    Character player = {"플레이어", 100, 20, 10};
    Character monster = {"몬스터", 50, 15, 5};
    srand(time(NULL));

    printf("간단한 텍스트 기반 RPG 게임에 오신 것을 환영합니다!\n");

    while (player.hp > 0 && monster.hp > 0) {
        printf("\n플레이어 HP: %d, 몬스터 HP: %d\n", player.hp, monster.hp);
        printf("1. 공격  2. 도망가기\n");
        int choice;
        scanf("%d", &choice);

        if (choice == 1) {
            attack(&player, &monster);
            if (monster.hp > 0) {
                attack(&monster, &player);
            }
        } else if (choice == 2) {
            printf("플레이어가 도망갔습니다!\n");
            break;
        } else {
            printf("잘못된 입력입니다.\n");
        }
    }

    if (player.hp > 0 && monster.hp <= 0) {
        printf("축하합니다! 몬스터를 물리쳤습니다!\n");
    } else if (player.hp <= 0) {
        printf("플레이어가 패배했습니다. 게임 오

