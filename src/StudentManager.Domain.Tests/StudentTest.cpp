#include "pch.h"
#include "StudentTest.h"

void StudentTest::SetUp()
{
	Student = new ::Student();
}

void StudentTest::TearDown()
{
	delete Student;
}

TEST_F(StudentTest, Validate_ShouldBeOk)
{
	EXPECT_NO_THROW(Student->Validate());
}