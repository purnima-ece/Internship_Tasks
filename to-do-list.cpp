#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Task {
public:
    Task(string name) : name(name), completed(false) {}
    
    string getName() const {
        return name;
    }
    
    bool isCompleted() const {
        return completed;
    }
    
    void markCompleted() {
        completed = true;
    }
    
private:
    string name;
    bool completed;
};

class ToDoList {
public:
    void addTask(const string &taskName) {
        tasks.emplace_back(taskName);
    }
    
    void viewTasks() const {
        if (tasks.empty()) {
            cout << "No tasks available." << endl;
        } else {
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". " << tasks[i].getName()
                          << (tasks[i].isCompleted() ? " [Completed]" : "") << endl;
            }
        }
    }
    
    void markTaskCompleted(size_t index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks[index - 1].markCompleted();
            cout << "Task " << index << " marked as completed." << endl;
        } else {
            cerr << "Invalid task number." << endl;
        }
    }
    
    void removeTask(size_t index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks.erase(tasks.begin() + index - 1);
            cout << "Task " << index << " removed." << endl;
        } else {
            cerr << "Invalid task number." << endl;
        }
    }
    
private:
    vector<Task> tasks;
};

int main() {
    ToDoList toDoList;
    int choice;
    string taskName;
    size_t taskIndex;
    
    while (true) {
        cout << "\n1. Add Task\n2. View Tasks\n3. Mark Task as Completed\n4. Remove Task\n5. Exit\nEnter your choice: ";
        cin >> choice;
        cin.ignore(); // Ignore the leftover newline character
        
        switch (choice) {
            case 1:
                cout << "Enter task name: ";
                getline(cin, taskName);
                toDoList.addTask(taskName);
                break;
                
            case 2:
                toDoList.viewTasks();
                break;
                
            case 3:
                cout << "Enter task number to mark as completed: ";
                cin >> taskIndex;
                toDoList.markTaskCompleted(taskIndex);
                break;
                
            case 4:
                cout << "Enter task number to remove: ";
                cin >> taskIndex;
                toDoList.removeTask(taskIndex);
                break;
                
            case 5:
                return 0;
                
            default:
                cerr << "Invalid choice." << endl;
        }
    }
    
    return 0;
}
