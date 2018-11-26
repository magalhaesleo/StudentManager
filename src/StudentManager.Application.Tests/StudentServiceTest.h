#pragma once

#include "gtest\gtest.h"
#include "../StudentManager.Application/StudentService.h"

class StudentServiceTest : public ::testing::Test
{
protected:
	IStudentService * _studentService;
	void SetUp() override;
	void TearDown() override;

public:
	virtual ~StudentServiceTest() = default;
};

