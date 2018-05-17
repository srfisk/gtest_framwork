/*
 * testrunner.cpp
 *
 *  Created on: May 17, 2018
 *      Author: srfisk
 */

#include "gtest/gtest.h"

int main(int argc, char **argv)
{

	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

