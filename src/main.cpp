#include<iostream>
#include "User/User.h"

using namespace std;

int main() {
	User user1, user2;
	Task task1 = user1.createTask(TaskType::FEATURE);
	Task task11 = user1.createTask(TaskType::BUG);
	Task task2 = user2.createTask(TaskType::BUG);
	Task task22 = user2.createTask("This is a subtract");
    Task task3 = user1.createTask(TaskType::STORY);

	Sprint sprint1 = user1.createSprint(22, 33, "Sprint 1");
	Sprint sprint2 = user2.createSprint(44, 55, "Sprint 2");
    Sprint sprint3 = user1.createSprint(55, 66, "Sprint 3");

	cout << user1.changeStatus(task11, TaskStatus::IN_PROGRESS) << endl ;//1

	cout << user1.addToSprint(sprint1, task1) << endl; //1
	cout << user1.addToSprint(sprint1, task11) << endl; //1
	cout << user1.addToSprint(sprint2, task1) << endl; //0
	cout << user1.removeFromSprint(sprint1, task11) << endl; //1
	cout << user2.addToSprint(sprint1, task1) << endl; //0
	cout << user2.removeFromSprint(sprint1, task2) << endl; //0
	cout << user2.addToSprint(sprint2, task1) << endl; //1
	cout << user2.addToSprint(sprint2, task2) << endl; //1
    cout << user1.addToSprint(sprint3, task3) << endl; //1
    cout << user2.addToSprint(sprint3, task3) << endl; //0


	sprint1.printDetails();
	cout << endl;
	user1.printAllTasks();
	user2.printAllTasks();
	return 0;
}