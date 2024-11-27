#include <stdio.h>
#include <string.h>

#define MAX_CARS 100

struct Car {
    char make[50];
    char model[50];
    int year;
    float price;
    float mileage;
};

struct Car inventory[MAX_CARS];
int totalCars = 0;

void addNewCar() {
    if (totalCars >= MAX_CARS) {
        printf("Inventory full. Cannot add more cars.\n");
        return;
    }

    printf("Enter make: ");
    scanf("%s", inventory[totalCars].make);
    printf("Enter model: ");
    scanf("%s", inventory[totalCars].model);
    printf("Enter year: ");
    scanf("%d", &inventory[totalCars].year);
    printf("Enter price: ");
    scanf("%f", &inventory[totalCars].price);
    printf("Enter mileage: ");
    scanf("%f", &inventory[totalCars].mileage);

    totalCars++;
}

void showCars() {
    for (int i = 0; i < totalCars; i++) {
        printf("Car %d: %s %s, Year: %d, Price: %.2f, Mileage: %.2f km\n", 
                i + 1, inventory[i].make, inventory[i].model, inventory[i].year, inventory[i].price, inventory[i].mileage);
    }
}

void findCars() {
    char search[50];
    printf("Search by make or model: ");
    scanf("%s", search);

    for (int i = 0; i < totalCars; i++) {
        if (strstr(inventory[i].make, search) || strstr(inventory[i].model, search)) {
            printf("Match: %s %s, Year: %d, Price: %.2f, Mileage: %.2f km\n",
                    inventory[i].make, inventory[i].model, inventory[i].year, inventory[i].price, inventory[i].mileage);
        }
    }
}

int main() {
    int option;
    do {
        printf("\n1. Add New Car\n2. Show Cars\n3. Find Car\n4. Exit\nChoose an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1: addNewCar(); break;
            case 2: showCars(); break;
            case 3: findCars(); break;
        }
    } while (option != 4);
    return 0;
}
