#include "stdafx.h"
#include "StudentService.h"


StudentService::StudentService()
{
}

StudentService::~StudentService()
{
}

long StudentService::Add(const Student student)
{
	return 0;
}

bool StudentService::Update(const Student student)
{
	return false;
}

bool StudentService::Delete(const long id)
{
	return false;
}

const Student StudentService::Get(const long id)
{
	return Student();
}

std::vector<Student> StudentService::GetAll()
{
	return std::vector<Student>();
}
