#pragma once
#include "IStudentService.h"
#include "..\StudentManager.Infra.Data\IStudentRepository.h"

class STUDENTMANAGERAPPLICATION_API StudentService : public IStudentService
{
	const IStudentRepository & _studentRepository;
public:
	StudentService(const IStudentRepository &studentRepository);
	virtual ~StudentService();

	virtual long Add(const Student student) override;
	virtual bool Update(const Student student) override;
	virtual bool Delete(const long id) override;
	virtual const Student Get(const long id) override;
	virtual std::vector<Student> GetAll() override;
};

