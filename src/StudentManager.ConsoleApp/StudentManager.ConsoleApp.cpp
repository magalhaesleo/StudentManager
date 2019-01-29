// StudentManager.ConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "boost\di.hpp"
#include "..\StudentManager.Application\StudentService.h"
#include "..\StudentManager.Infra.Data\StudentRepository.h"

using namespace boost;

int main()
{
	const auto injector = di::make_injector(
		di::bind<IStudentRepository>.to<StudentRepository>()
	);
	injector.create<StudentService>();
	/*Student student;
	service.Add(student);*/
}
