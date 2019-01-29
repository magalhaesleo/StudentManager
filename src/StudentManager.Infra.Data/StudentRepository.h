#pragma once
#include "IStudentRepository.h"

class STUDENTMANAGERINFRADATA_API StudentRepository : public IStudentRepository
{
public:
	StudentRepository();
	~StudentRepository();
	virtual long Add(const Student student) override;
	virtual bool Update(const Student student) override;
	virtual bool Delete(const long id) override;
	virtual const Student Get(const long id) override;
	virtual std::vector<Student> GetAll() override;
};

