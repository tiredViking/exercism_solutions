#include "dnd_character.h"

int ability(void){
    srand(time(NULL));
    int a = rand() % 6 + 1;
    int b = rand() % 6 + 1;
    int c = rand() % 6 + 1;
    int d = rand() % 6 + 1;
    int m1 = (a < b) ? a : b;
    int m2 = (c < d) ? c : d;
    int min = (m1 < m2) ? m1 : m2;
    return a+b+c+d-min;
}

int modifier(int score){
    return (int) floor(((double)score - 10)/2);    
}

dnd_character_t make_dnd_character(void){
    dnd_character_t character;
    character.strength = ability();
    character.dexterity = ability();
    character.constitution = ability();
    character.intelligence = ability();
    character.wisdom = ability();
    character.charisma = ability();
    character.hitpoints = character.constitution - modifier(character.constitution);
    return character;
}
