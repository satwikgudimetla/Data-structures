#include <stdio.h>
struct CAT 
{
    int car_id;
    char model[50];
    float rate_per_day;
};
int main() 
{
    struct CAT cars[3];
    int days;
    int i;
    float total_cost;
    for (i = 0; i < 3; i++)
     {
        printf("Enter details for Car %d", i + 1);
        printf("Car ID: ");
        scanf("%d", &cars[i].car_id);
        printf("Model: ");
        scanf("%s", cars[i].model);
        printf("Rental Rate per Day: ");
        scanf("%f", &cars[i].rate_per_day);
    }
    printf("Enter number of rental days: ");
    scanf("%d", &days);

    printf("Rental Cost Details:");
    for (i = 0; i < 3; i++) {
        total_cost = cars[i].rate_per_day * days;
        printf("\nCar ID: %d", cars[i].car_id);
        printf("\nModel: %s", cars[i].model);
        printf("\nTotal Rental Cost for %d days: %.2f\n", days, total_cost);
    }
    return 0;
}