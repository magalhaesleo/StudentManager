#pragma once
#include "Entity.h"

class STUDENTMANAGERDOMAIN_API Student : public Entity
{
public:
	Student();
	~Student();

	void Validate();
};

