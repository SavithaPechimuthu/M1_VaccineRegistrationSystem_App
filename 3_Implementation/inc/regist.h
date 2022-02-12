/**
 * @file regist.h
 * @author Savitha
 * @brief 
 * @version 0.1
 * @date 2022-02-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef REGIST_C
#define REGIST_C

 // Checks for registration details of new patients
int regist_status(long pd );

// Checks details from the pre registered patients
int existregist();

// Checks how many doses should be given
int vaccine_status(int );

// Structure that stores all details of a patient
typedef struct patient{
    int age;
    long aadhar;
    int mobile_number;
    int secret_key;
    int vaccine_type;
    int vaccine_doses;
}patient_details;

// variable pd that stores details of upto 1000 patients
patient_details pd[1000];

#endif