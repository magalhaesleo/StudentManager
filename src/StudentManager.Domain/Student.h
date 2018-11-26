#pragma once
#include "Entity.h"

class STUDENTMANAGERDOMAIN_API Student : public Entity
{
public:
	Student();
	virtual ~Student();

	void Validate();

	virtual bool Process();
};

