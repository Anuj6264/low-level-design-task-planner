#include<iostream>
using namespace std;
#include "User.h"

Task User::createTask(TaskType taskType)
{
	if(taskType == TaskType::STORY)
	{
		cout << "Warning! Task of type STORY is being created with no subtract." << endl;
	}
	Task task;
	task.setTaskType(taskType);
	task.setUser(this);
	taskList.push_back(task);

	return task;
}

Task User::createTask(string subtract)
{

	Task task;
	task.setTaskType(TaskType::STORY);
	task.setSubtract(subtract);
	task.setUser(this);
	taskList.push_back(task);

	return task;
}

Sprint User::createSprint(int begin, int end, string name)
{
	Sprint sprint(begin, end, name);
	sprintList.push_back(sprint);

	return sprint;
}

bool User::addToSprint(Sprint& sprint, Task& task)
{
	for(Sprint spr: sprintList)
	{
		if(spr == sprint)
		{
			sprint.addTask(task);
			return true;
		}
	}
	return false;
}

bool User::removeFromSprint(Sprint& sprint, Task& task)
{
	vector<Task> taskList;
	for(Sprint spr: sprintList)
	{
		if(spr == sprint)
		{
			taskList = sprint.getTasks();
			break;
		}
    }
	for(Task t: taskList)
	{
		if(t.getId() == task.getId())  
		{
            sprint.eraseTask(task.getId());
			return true;
		}
	}
	return false;
}

void User::printAllTasks()
{
	for(Task task: taskList)
	{
		cout << task.getId() << " ";
	}
	cout << endl;
}

bool User::changeStatus(Task& task, TaskStatus status)
{
	for(Task &t: taskList)
	{
		if(t.getId() == task.getId())
		{
			t.setTaskStatus(status);
			return true;
		}
	}
	return false;
}