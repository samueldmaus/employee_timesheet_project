﻿#include "Employee.h"
#include "TestHarness.h"

TEST(setter, Employee)
{
	Employee sam(1, "Sam", "sam@email.com", "password");
	CHECK_EQUAL("Sam", sam.getName());
	
	sam.setName("Samuel");
	CHECK_EQUAL("Samuel", sam.getName());
}

TEST(checkAdmin, Employee)
{
	const Employee sam(1, "Sam", "sam@email.com", "password");
	CHECK(!sam.getAdmin());
}