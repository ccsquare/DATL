#include "gtest/gtest.h"
#include "numeric.h"
#include <functional>	// for minux<int>
#include <iostream>


class numeric_test : public ::testing::Test {

protected:
	numeric_test () {

	}

	virtual ~numeric_test () {

	}

	virtual void SetUp () {
	}

	virtual void TearDown () {
	}
};

struct myclass {
	int operator() (int x, int y) {
		return x + 3 * y;
	}
} myobject;


int myfunction (int x, int y) {
	return x + 2 * y;
}

TEST_F (numeric_test, ACCUMULATE) {
	
	int init = 100;
	int numbers[] = {10, 20, 30};
	ASSERT_EQ (DATL::accumulate(numbers, numbers + 3, init), 160);

	ASSERT_EQ(DATL::accumulate(numbers, numbers + 3, init, std::minus<int>()), 40);

	ASSERT_EQ(DATL::accumulate(numbers, numbers + 3, init, myobject), 280);

	ASSERT_EQ(DATL::accumulate(numbers, numbers + 3, init, myfunction), 220);
}


