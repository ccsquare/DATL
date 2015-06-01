#include "gtest/gtest.h"
#include <iostream>
#include "KDTree.h"

using namespace std;


class KDTreeTest: public ::testing::Test {

	
protected:
	KDTreeTest() {

	}


	virtual ~KDTreeTest() {

	}


	virtual void SetUp() {
		cout << "Start testing KDTree\n";
	}


	virtual void TearDown() {
		cout << "Finish testing KDTree\n";
	}


private:
	KDTree<4, size_t>* kd = NULL;
};


TEST_F(KDTreeTest, ESTABLISH) {

	KDTree<4, size_t> kd;
	ASSERT_TRUE(&kd != NULL);
}

TEST_F(KDTreeTest, EMPTY) {

	KDTree<4, size_t> kd;
	ASSERT_TRUE(kd.size() == 0);
}


int main (int argc, char **argv) {

	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
