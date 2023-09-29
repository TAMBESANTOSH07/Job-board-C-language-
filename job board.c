
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to store job postings
struct JobPosting {
    char title[100];
    char company[100];
    char description[255];
    int salary;
};

int main() {
    // Initialize an array to store job postings
    struct JobPosting jobBoard[10];
    int jobCount = 0;

    int choice;
    do {
        printf("Job Board\n");
        printf("1. Add Job Posting\n");
        printf("2. List Job Postings\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Add a new job posting
                if (jobCount < 10) {
                    printf("Enter job title: ");
                    scanf(" %[^\n]s", jobBoard[jobCount].title);
                    printf("Enter company: ");
                    scanf(" %[^\n]s", jobBoard[jobCount].company);
                    printf("Enter job description: ");
                    scanf(" %[^\n]s", jobBoard[jobCount].description);
                    printf("Enter salary: ");
                    scanf("%d", &jobBoard[jobCount].salary);
                    jobCount++;
                    printf("Job posting added to the board.\n");
                } else {
                    printf("Job board is full. Cannot add more job postings.\n");
                }
                break;
            case 2:
                // List all job postings
                printf("Job Postings:\n");
                for (int i = 0; i < jobCount; i++) {
                    printf("Job %d\n", i + 1);
                    printf("Title: %s\n", jobBoard[i].title);
                    printf("Company: %s\n", jobBoard[i].company);
                    printf("Description: %s\n", jobBoard[i].description);
                    printf("Salary: $%d\n", jobBoard[i].salary);
                    printf("\n");
                }
                break;
            case 3:
                // Exit the program
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
