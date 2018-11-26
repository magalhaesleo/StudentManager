#include "pch.h"
#include "StudentServiceTest.h"
#include "gmock/gmock.h"

using ::testing::Return;

void StudentServiceTest::SetUp()
{
	this->_studentService = new StudentService();
}

void StudentServiceTest::TearDown()
{
	delete this->_studentService;
}

class MockStudent : public Student
{
public:
	virtual ~MockStudent() = default;

	MOCK_METHOD0(Process, bool());
};

TEST_F(StudentServiceTest, Student_Application_Add_ShouldBeOk)
{
	MockStudent student;
	
	ON_CALL(student, Process()).WillByDefault(Return(true));
	
	this->_studentService->Add(student);
}