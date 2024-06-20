#ifndef TASK_H
#define TASK_H

#include<iostream>
using namespace std;

class User;
enum TaskType {STORY, FEATURE, BUG};
enum TaskStatus {OPEN, IN_PROGRESS, RESOLVED, DELAYED, COMPLETED };

class Task
{
public:
	Task();
	int getId() const;
	void setSubtract(const string &subtract);
	void setTaskStatus(TaskStatus taskStatus);
	void setTaskType(TaskType taskType);
	void setUser(User* user);

private:
	int id;
	string subtract;
	User* user;
	TaskType taskType;
	TaskStatus taskStatus;
	int getUniqueId();
};

#endif 