/**
 * @file test_reg.c
 * @author Savitha
 * @brief 
 * @version 0.1
 * @date 2022-02-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "unity.h"
#include "new.h"

#define PROJECT_NAME    "VaccineRegistrationSystem"

// Prototypes 
void test_reg_status(void);
void test_vaccine_status(void);

void setUp(){}

void tearDown(){}

int main()
{
  UNITY_BEGIN();

// Run Test functions for registration and vaccine status
  RUN_TEST(test_reg_status);
  RUN_TEST(test_vaccine_status);
  
  return UNITY_END();
}

// Test functions
void test_reg_status(void) {
  TEST_ASSERT_EQUAL(-1, reg_status(123));
  
  TEST_ASSERT_EQUAL(-1, reg_status(150)); // Fail condition
}

void test_vaccine_status(void) {
  TEST_ASSERT_EQUAL(1, vaccine_status(1));
  
  TEST_ASSERT_EQUAL(2, vaccine_status(1)); // Fail condition
}