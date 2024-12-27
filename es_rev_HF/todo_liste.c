#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100
#define MAX_TASK_LENGTH 100

typedef struct {
    char description[MAX_TASK_LENGTH];
    int completed; // 0 for not completed, 1 for completed
} Task;

Task tasks[MAX_TASKS];
int taskCount = 0;

void addTask() {
    if (taskCount < MAX_TASKS) {
        printf("Enter task description: ");
        fgets(tasks[taskCount].description, MAX_TASK_LENGTH, stdin);
        // Remove trailing newline
        tasks[taskCount].description[strcspn(tasks[taskCount].description, "\n")] = 0;
        tasks[taskCount].completed = 0;
        taskCount++;
        printf("Task added successfully.\n");
    } else {
        printf("Task list is full.\n");
    }
}

void viewTasks() {
    if (taskCount == 0) {
        printf("No tasks in the list.\n");
        return;
    }

    printf("\n--- Task List ---\n");
    for (int i = 0; i < taskCount; i++) {
        printf("%d. [%c] %s\n", i + 1, tasks[i].completed ? 'X' : ' ', tasks[i].description);
    }
    printf("------------------\n\n");
}

void markComplete() {
    viewTasks(); // Show tasks with numbers for easy selection
    if (taskCount == 0) return;

    int taskNumber;
    printf("Enter the task number to mark as complete: ");
    scanf("%d", &taskNumber);
    getchar(); // Consume the newline character

    if (taskNumber > 0 && taskNumber <= taskCount) {
        tasks[taskNumber - 1].completed = 1;
        printf("Task marked as complete.\n");
    } else {
        printf("Invalid task number.\n");
    }
}

void deleteTask() {
    viewTasks();
    if (taskCount == 0) return;

    int taskNumber;
    printf("Enter the task number to delete: ");
    scanf("%d", &taskNumber);
    getchar(); // Consume the newline character

    if (taskNumber > 0 && taskNumber <= taskCount) {
        // Shift remaining tasks to fill the gap
        for (int i = taskNumber - 1; i < taskCount - 1; i++) {
            strcpy(tasks[i].description, tasks[i + 1].description);
            tasks[i].completed = tasks[i + 1].completed;
        }
        taskCount--;
        printf("Task deleted successfully.\n");
    } else {
        printf("Invalid task number.\n");
    }
}


int main() {
    int choice;

    do {
        printf("\n--- To-Do List Menu ---\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Mark Task as Complete\n");
        printf("4. Delete Task\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                markComplete();
                break;
            case 4:
                deleteTask();
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}