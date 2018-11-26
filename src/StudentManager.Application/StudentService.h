#pragma once
#include "IStudentService.h"

class STUDENTMANAGERAPPLICATION_API StudentService : public IStudentService
{
public:
	StudentService();
	virtual ~StudentService();

	virtual long Add(const Student student) override;
	virtual bool Update(const Student student) override;
	virtual bool Delete(const long id) override;
	virtual const Student Get(const long id) override;
	virtual std::vector<Student> GetAll() override;
};

