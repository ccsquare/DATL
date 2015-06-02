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

int myop (int x, int y) {
	return x + y + 1;
}

TEST_F (numeric_test, ACCUMULATE) {
	
	int init = 100;
	int numbers[] = {10, 20, 30};
	ASSERT_EQ (DATL::accumulate(numbers, numbers + 3, init), 160);

	ASSERT_EQ(DATL::accumulate(numbers, numbers + 3, init, std::minus<int>()), 40);

	ASSERT_EQ(DATL::accumulate(numbers, numbers + 3, init, myobject), 280);

	ASSERT_EQ(DATL::accumulate(numbers, numbers + 3, init, myfunction), 220);
}


TEST_F (numeric_test, PARTIAL_SUM) {
	
	int val[] = {1, 2, 3, 4, 5};
	int result[5];

	DATL::partial_sum(val, val + 5, result);
	ASSERT_EQ(result[0], 1);
	ASSERT_EQ(result[1], 3);
	ASSERT_EQ(result[2], 6);
	ASSERT_EQ(result[3], 10);
	ASSERT_EQ(result[4], 15);

	DATL::partial_sum(val, val + 5, result, myop);

	ASSERT_EQ(result[0], 1);
	ASSERT_EQ(result[1], 4);
	ASSERT_EQ(result[2], 8);
	ASSERT_EQ(result[3], 13);
	ASSERT_EQ(result[4], 19);
}
