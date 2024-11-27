#include <stdio.h>
#include <string.h>

#define MAX_TRIPS 50

struct TravelPackage {
    char packageName[100];
    char destination[100];
    int durationDays;
    float price;
    int availableSeats;
};

struct TravelPackage trips[MAX_TRIPS];
int tripCount = 0;

void createPackage() {
    if (tripCount >= MAX_TRIPS) {
        printf("No space for more packages!\n");
        return;
    }
    printf("Enter package name: ");
    scanf("%s", trips[tripCount].packageName);
    printf("Enter destination: ");
    scanf("%s", trips[tripCount].destination);
    printf("Enter duration (in days): ");
    scanf("%d", &trips[tripCount].durationDays);
    printf("Enter cost: ");
    scanf("%f", &trips[tripCount].price);
    printf("Enter available seats: ");
    scanf("%d", &trips[tripCount].availableSeats);
    tripCount++;
}

void listPackages() {
    for (int i = 0; i < tripCount; i++) {
        printf("Package %d: %s - %s, %d days, $%.2f, %d seats left\n",
                i + 1, trips[i].packageName, trips[i].destination, trips[i].durationDays, trips[i].price, trips[i].availableSeats);
    }
}

void reservePackage() {
    int choice;
    printf("Select a package number to book: ");
    scanf("%d", &choice);

    if (choice > 0 && choice <= tripCount && trips[choice - 1].availableSeats > 0) {
        trips[choice - 1].availableSeats--;
        printf("Successfully booked the package!\n");
    } else {
        printf("Invalid selection or no seats available.\n");
    }
}

int main() {
    int option;
    do {
        printf("\n1. Create Package\n2. View Packages\n3. Reserve Package\n4. Exit\nSelect: ");
        scanf("%d", &option);

        switch (option) {
            case 1: createPackage(); break;
            case 2: listPackages(); break;
            case 3: reservePackage(); break;
        }
    } while (option != 4);
    return 0;
}
