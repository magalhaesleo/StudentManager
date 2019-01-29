#include "stdafx.h"
#include "StudentRepository.h"


StudentRepository::StudentRepository()
{
}


StudentRepository::~StudentRepository()
{
}

long StudentRepository::Add(const Student student)
{
	return 0;
}

bool StudentRepository::Update(const Student student)
{
	return false;
}

bool StudentRepository::Delete(const long id)
{
	return false;
}

const Student StudentRepository::Get(const long id)
{
	return Student();
}

std::vector<Student> StudentRepository::GetAll()
{
	return std::vector<Student>();
}
