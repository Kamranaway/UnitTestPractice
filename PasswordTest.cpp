/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

void test1(PasswordTest, single_letter_password) {
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

void test2(PasswordTest, single_letter_password) {
	Password my_password;
	int actual = my_password.has_mixed_case("Z");
	ASSERT_EQ(false, actual);
}

void test3(PasswordTest, single_letter_password) {
	Password my_password;
	int actual = my_password.has_mixed_case("aSDIJjshadyhASKDUH721gh7gd&WGHAY");
	ASSERT_EQ(true, actual);
}

void test4(PasswordTest, single_letter_password) {
	Password my_password;
	int actual = my_password.has_mixed_case("sadUIJJH&@Iyt34178gh78dgb*YH&@&HNDQ<D>DSAP{P}@{QEI()}");
	ASSERT_EQ(true, actual);
}

TEST(PasswordTest, single_letter_password)
{
	test1();
	test2();
	test3();
	test4();
}