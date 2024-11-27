#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct player {
    char name[20];
    char team[20];
};

struct bowl {
    char type[10];  
    char arm[5];    
    struct player ply;
};

struct bat {
    char type[10];  
    char handed[8]; 
    struct bowl ply2;
};


void createPlayer() {
    FILE *file = fopen("players.dat", "wb");
    struct bat batsman;
    
    for (int i = 0; i < 5; i++) {
        printf("\nEnter player %d details:\n", i + 1);
        
        
        printf("Name: ");
        scanf("%s", batsman.ply2.ply.name);
        printf("Team: ");
        scanf("%s", batsman.ply2.ply.team);
        
      
        if (i < 3) {
            printf("Bowler type (seamer/pacer/spinner/N/A): ");
            scanf("%s", batsman.ply2.type);
            printf("Bowler arm (left/right): ");
            scanf("%s", batsman.ply2.arm);
        } else {
            strcpy(batsman.ply2.type, "N/A");
            strcpy(batsman.ply2.arm, "N/A");
        }
        
       
        printf("Batsman type (top/middle/lower): ");
        scanf("%s", batsman.type);
        printf("Handed (lefty/righty): ");
        scanf("%s", batsman.handed);
        
        fwrite(&batsman, sizeof(struct bat), 1, file);
    }
    
    fclose(file);
}


void readPlayers() {
    FILE *file = fopen("players.dat", "rb");
    struct bat batsman;
    
    printf("\nPlayer details:\n");
    while (fread(&batsman, sizeof(struct bat), 1, file)) {
        printf("\nName: %s, Team: %s, Bowler Type: %s, Bowler Arm: %s, Batsman Type: %s, Handed: %s\n",
               batsman.ply2.ply.name, batsman.ply2.ply.team, batsman.ply2.type, batsman.ply2.arm, batsman.type, batsman.handed);
    }
    
    fclose(file);
}


void updatePlayer() {
    FILE *file = fopen("players.dat", "rb+");
    struct bat batsman;
    char name[20];
    int found = 0;
    
    printf("\nEnter the name of the player to update: ");
    scanf("%s", name);
    
    while (fread(&batsman, sizeof(struct bat), 1, file) && !found) {
        if (strcmp(batsman.ply2.ply.name, name) == 0) {
            printf("\nEnter new team: ");
            scanf("%s", batsman.ply2.ply.team);
            fseek(file, -sizeof(struct bat), SEEK_CUR);
            fwrite(&batsman, sizeof(struct bat), 1, file);
            found = 1;
        }
    }
    
    if (!found) {
        printf("Player not found!\n");
    }
    
    fclose(file);
}


void deletePlayer() {
    FILE *file = fopen("players.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
    struct bat batsman;
    char name[20];
    
    printf("\nEnter the name of the player to delete: ");
    scanf("%s", name);
    
    while (fread(&batsman, sizeof(struct bat), 1, file)) {
        if (strcmp(batsman.ply2.ply.name, name) != 0) {
            fwrite(&batsman, sizeof(struct bat), 1, temp);
        }
    }
    
    fclose(file);
    fclose(temp);
    
    remove("players.dat");
    rename("temp.dat", "players.dat");
}

int main() {
    int choice;
    do {
        printf("\n1. Create Players\n2. Read Players\n3. Update Player\n4. Delete Player\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                createPlayer();
                break;
            case 2:
                readPlayers();
                break;
            case 3:
                updatePlayer();
                break;
            case 4:
                deletePlayer();
                break;
        }
    } while (choice != 5);
    
    return 0;
}
