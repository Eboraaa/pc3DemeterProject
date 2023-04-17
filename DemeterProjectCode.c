#include <stdio.h>

#define MAX_APPOINTMENTS 100

    struct {
    char name[50];
    char purpose[100];
    char date[20];
    char time[20];
} Appointment;

int main() {
    int choice, num_appointments = 0;
    Appointment appointments[MAX_APPOINTMENTS];

    while (1) {
        printf("\n1. Schedule an appointment\n");
        printf("2. View scheduled appointments\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (num_appointments >= MAX_APPOINTMENTS) {
                    printf("Error: maximum number of appointments reached.\n");
                    break;
                }
                printf("Enter Last Name: ");
                scanf("%s", appointments[num_appointments].name);
                printf("Enter purpose: ");
                scanf("%s", appointments[num_appointments].purpose);
                printf("Enter date: ");
                scanf("%s", appointments[num_appointments].date);
                printf("Enter time: ");
                scanf("%s", appointments[num_appointments].time);

                
           
