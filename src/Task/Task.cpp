#include<iostream>
using namespace std;
#include "Task.h"

Task::Task()
{
	this->id = getUniqueId();
	this->taskStatus = TaskStatus::OPEN;
}

int Task::getId() const {
	return id;
}

void Task::setSubtract(const string &subtract) {
	this->subtract = subtract;
}

void Task::setTaskStatus(TaskStatus taskStatus) {
	this->taskStatus = taskStatus;
}

void Task::setTaskType(TaskType taskType) {
	this->taskType = taskType;
}

void Task::setUser(User* user) {
	this->user = user;
}
int Task::getUniqueId()
{
	static int taskId = 1;
	return taskId++;
}