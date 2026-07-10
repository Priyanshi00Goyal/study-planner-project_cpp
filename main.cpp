#include <iostream>
using namespace std;
int addTask(){}
int viewTasks(){}
int completeTask(){}
int deleteTask(){}
int main()
{
    int choice = 0;

    while (choice != 5)
    {
        // Display Menu
        cout << "\n=================================\n";
        cout << "      STUDENT STUDY PLANNER\n";
        cout << "=================================\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Complete Task\n";
        cout << "4. Delete Task\n";
        cout << "5. Exit\n";

        // Take User Input
        cout << "\nEnter your choice: ";
        cin >> choice;

        // Perform Action
        switch (choice){
        case 1:
            addTask();
            break;

        case 2:
            viewTasks();
            break;

        case 3:
            completeTask();
            break;

        case 4:
            deleteTask();
            break;

        case 5:
            cout << "Goodbye!\n";
            break;


        default:
            cout << "\nInvalid Choice! Please try again.\n";
        }

        // Pause before showing the menu again
        if (choice != 5)
        {
            cout << "\nPress Enter to continue...";
            cin.ignore();      // Clears the leftover '\n'
            cin.get();         // Waits for Enter key
        }
    }

    return 0;
} 
