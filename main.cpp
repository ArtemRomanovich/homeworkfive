//https://github.com/ArtemRomanovich/homeworkfour/blob/main/main.cpp
#include <iostream>
#include<stdlib.h>
#include <cmath>
using namespace std;

int main() {
    int numDay;
    cout<<"Введите день рождения: ";
    cin>>numDay;
    int numMonth;
    cout<<"Введите месяц рождения: ";
    cin>>numMonth;
    int numYear;
    cout<<"Введите год рождения: ";
    cin>>numYear;
    bool leapYear = (numYear % 4) == 0;
    if (leapYear) {
        printf("Год рождения: високосный.");
    } else {
        printf("Год рождения: не високосный.");
    }
    int theOrientalBeast = numYear % 12;
    switch (theOrientalBeast) {
        case 0: {
            printf("Ты обезьяна по восточному календарю.");
            break;
        }
        case 1: {
            printf("Ты петух по восточному календарю.");
            break;
        }
        case 2: {
            printf("Ты собака по восточному календарю.");
            break;
        }
        case 3: {
            printf("Ты свинья по восточному календарю.");
            break;
        }
        case 4: {
            printf("Ты крыса по восточному календарю.");
            break;
        }
        case 5: {
            printf("Ты бык по восточному календарю.");
            break;
        }
        case 6: {
            printf("Ты тигр по восточному календарю.");
            break;
        }
        case 7: {
            printf("Ты кролик по восточному календарю.");
            break;
        }
        case 8: {
            printf("Ты дракон по восточному календарю.");
            break;
        }
        case 9: {
            printf("Ты змея по восточному календарю.");
            break;
        }
        case 10: {
            printf("Ты лошадь по восточному календарю.");
            break;
        }
        case 11: {
            printf("Ты овца по восточному календарю.");
            break;
        }
        default: {
            printf("Ты никто по восточному календарю.");
            break;
        }
    }
    int twentyOne = 21;
    switch (numMonth) {
        case 1: {
            if (numDay < twentyOne) {
                printf("Ты козерог по знаку зодиака.");
            } else {
                printf("Ты водолей по знаку зодиака.");
            }
            break;
        }
        case 2: {
            if (numDay < twentyOne) {
                printf("Ты водолей по знаку зодиака.");
            } else {
                printf("Ты рыбы по знаку зодиака.");
            }
            break;
        }
        case 3: {
            if (numDay < twentyOne) {
                printf("Ты рыбы по знаку зодиака.");
            } else {
                printf("Ты овен по знаку зодиака.");
            }
            break;
        }
        case 4: {
            if (numDay < twentyOne) {
                printf("Ты овен по знаку зодиака.");
            } else {
                printf("Ты телец по знаку зодиака.");
            }
            break;
        }
        case 5: {
            if (numDay < twentyOne) {
                printf("Ты телец по знаку зодиака.");
            } else {
                printf("Ты близнецы по знаку зодиака.");
            }
            break;
        }
        case 6: {
            if (numDay < twentyOne) {
                printf("Ты близнецы по знаку зодиака.");
            } else {
                printf("Ты рак по знаку зодиака.");
            }
            break;
        }
        case 7: {
            if (numDay < twentyOne) {
                printf("Ты рак по знаку зодиака.");
            } else {
                printf("Ты лев по знаку зодиака.");
            }
            break;
        }
        case 8: {
            if (numDay < twentyOne) {
                printf("Ты лев по знаку зодиака.");
            } else {
                printf("Ты дева по знаку зодиака.");
            }
            break;
        }
        case 9: {
            if (numDay < twentyOne) {
                printf("Ты дева по знаку зодиака.");
            } else {
                printf("Ты весы по знаку зодиака.");
            }
            break;
        }
        case 10: {
            if (numDay < twentyOne) {
                printf("Ты весы по знаку зодиака.");
            } else {
                printf("Ты скорпион по знаку зодиака.");
            }
            break;
        }
        case 11: {
            if (numDay < twentyOne) {
                printf("Ты скорпион по знаку зодиака.");
            } else {
                printf("Ты стрелец по знаку зодиака.");
            }
            break;
        }
        case 12: {
            if (numDay < twentyOne) {
                printf("Ты стрелец по знаку зодиака.");
            } else {
                printf("Ты козерог по знаку зодиака.");
            }
            break;
        }
        default: {
            printf("Ты никто по знаку зодиака.");
            break;
        }
    }
}