#ifndef USER_H
#define USER_H

#include<iostream>
#include <vector>
#include "../Sprint/Sprint.h"

using namespace std;

class User {
private:
	vector<Task> taskList;
	vector<Sprint> sprintList;
public:
	Task createTask(TaskType);
	Task createTask(string);
	Sprint createSprint(int, int, string);
	bool addToSprint(Sprint&, Task&);
	bool removeFromSprint(Sprint&, Task&);
	void printAllTasks();
	bool changeStatus(Task&, TaskStatus);
};

#endif 