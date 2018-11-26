#pragma once
#include "gtest/gtest.h"
#include "..\StudentManager.Domain\Student.h"

class StudentTest : public ::testing::Test
{
protected:
	void SetUp() override;
	void TearDown() override;

	Student * Student;
public:
	virtual ~StudentTest() = default;
};

