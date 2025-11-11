#include <stdio.h>
#define MIN_NOMAL_TEMP 35.0
#define MAX_NOMAL_TEMP 37.5

int main() {
    char name[20];
    float temp;

    printf("Name: ");
    scanf("%s", name);

    printf("อุณหภูมิร่างกายของคุณ(°C): ");
    scanf("%f", &temp); 

    printf("ผลการตรวจ: ");
    printf("\nชื่อ: %s\n", name);
    printf("อุณหภูมิ: %.2f °C\n", temp);

    if (temp < MIN_NOMAL_TEMP) {
        printf("อุณหภูมิร่างกายต่ำกว่าปกติ\n");
    } else if (temp >= MIN_NOMAL_TEMP && temp <= MAX_NOMAL_TEMP) {
        printf("อุณหภูมิร่างกายปกติ\n");
    } else {
        printf("มีไข้\n");
    }
    return 0;
}