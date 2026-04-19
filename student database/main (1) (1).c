#include <stdio.h>

typedef struct  {
    char university[50];
    char firstName[30];
    char surname[30];
    char address[100];
    int year;
} Student ;

void gather() {
    FILE *fp = fopen("students.dat", "ab");
     Student students;

    getchar();
    printf("University: ");
    fgets(students.university, 50, stdin);

    printf("First name: ");
    fgets(students.firstName, 30, stdin);

    printf("Surname: ");
    fgets(students.surname, 30, stdin);

    printf("Address: ");
    fgets(students.address, 100, stdin);

    printf("Year of study: ");
    scanf("%d", &students.year);

    fwrite(&students, sizeof(Student), 1, fp);
    fclose(fp);
}

void display() {
    FILE *fp = fopen("students.dat", "rb");
     Student students;

    if (fp == NULL) {
        printf("No data found.\n");
        return;
    }

    while (fread(&students, sizeof(Student), 1, fp)) {
        printf("\nUniversity: %s", students.university);
        printf("Name: %s %s", students.firstName, students.surname);
        printf("Address: %s", students.address);
        printf("Year: %d\n", students.year);
    }

    fclose(fp);
}

void deleteLast() {
    FILE *fp = fopen("students.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
     Student students;
    int count = 0, i = 0;

    while (fread(&students, sizeof(Student), 1, fp))
        count++;

    rewind(fp);

    while (fread(&students, sizeof(Student), 1, fp)) {
        i++;
        if (i < count)
            fwrite(&students, sizeof(Student), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("students.dat");
    rename("temp.dat", "students.dat");

    printf("Last student deleted.\n");
}

int main() {
    int choice;

    do {
        printf("_____________________Student Database___________________________");
        printf("\n");
        printf("\n1. Gather data\n2. Display data\n3. Delete last\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) gather();
        else if (choice == 2) display();
        else if (choice == 3) deleteLast();

    } while (choice != 4);

    return 0;
}
