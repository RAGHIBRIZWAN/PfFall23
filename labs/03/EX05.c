#include <stdio.h>

int main() {
    int south,west,north;
    south = 0;
    scanf("%d",&south);
    west = 0;
    scanf("%d",&west);
    north = 0;
    scanf("%d",&north);
    int fuelcons = 2;
    int total_kms;
    total_kms = south + west + north;
    int total_fuel;
    total_fuel = total_kms * fuelcons;
    printf(" %d",total_kms);
    printf(" %d",total_fuel);
}
