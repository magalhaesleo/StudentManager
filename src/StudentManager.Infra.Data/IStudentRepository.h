#pragma once
#include "Export.h"
#include "..\StudentManager.Domain\Student.h"
#include <vector>

struct STUDENTMANAGERINFRADATA_API IStudentRepository
{
	virtual ~IStudentRepository() = default;
	virtual long Add(const Student student) = 0;
	virtual bool Update(const Student student) = 0;
	virtual bool Delete(const long id) = 0;
	virtual const Student Get(const long id) = 0;
	virtual std::vector<Student> GetAll() = 0;
};