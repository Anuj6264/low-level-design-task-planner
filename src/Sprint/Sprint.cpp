#include<iostream>
#include<vector>
using namespace std;

#include "Sprint.h"

Sprint::Sprint(int begin, int end, string name)
{
	this->begin = begin;
	this->end = end;
	this->name = name;
}

void Sprint::addTask(Task& task)
{
	tasks.push_back(task);
}

void Sprint::printDetails()
{
	cout << "Sprint Name: " << this->name << "\nSprint Begins: " << this->begin << "\nSprint Ends: " << this->end << endl;
}

const vector<Task>& Sprint::getTasks() const {
	return tasks;
}

bool Sprint::operator==(Sprint sprint)
{
	return (this->begin == sprint.begin) && (this->end == sprint.end) && (this->name == sprint.name);
}

void Sprint::eraseTask(int taskNumber)
{
	tasks.erase(tasks.begin() + taskNumber);
}