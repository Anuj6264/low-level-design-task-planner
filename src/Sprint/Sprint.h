#ifndef SPRINT_H
#define SPRINT_H

#include<iostream>
#include<vector>
#include "../Task/Task.h"

using namespace std;

class Task;
class Sprint
{
public:
	Sprint(int begin, int end, string name);
	void addTask(Task&);
	void printDetails();
	bool operator==(Sprint sprint);
	const vector<Task>& getTasks() const;
	void eraseTask(int taskNumber);

private:
	int begin, end;
	string name;
	vector<Task> tasks;
};

#endif