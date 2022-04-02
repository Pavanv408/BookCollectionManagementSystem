/**
 * @file book_management.h
 * @author PAVAN (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __BOOK_MANAGEMENT_H__
#define __BOOK_MANAGEMENT_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * @brief structure for book records
 * 
 */
typedef struct book_data {
    int book_id;
    char book_title[20];
    char book_author[20];
    char status[10];
    char student_first_name[10];
    char student_last_name[10];
    int student_usn;
    char date_of_issue[20];
    char due_date[20];
}book_data;

/**
 * @brief return type for funtions for unit testing
 * 
 */
typedef enum test_values {
    pass = 1,
    fail = 0
}test_values;

/**
 * @brief function to view find a book by its ID
 * 
 * @param id 
 * @return test_values 
 */
test_values view_a_record(int id);

/**
 * @brief function to add new books to the collection
 * 
 * @return test_values 
 */
test_values enter_new_record(int id, char title[], char author[]);

/**
 * @brief function to update the details and status of a book
 * 
 * @param id 
 * @return test_values 
 */
test_values update_record(int id, char new_status[], char new_date_of_issue[], char new_due_date[], char new_student_first_name[],char new_student_last_name[], int new_student_usn);

/**
 * @brief funtion to denote delete books
 * 
 * @param id 
 * @return test_values 
 */
test_values delete_record(int id);

/**
 * @brief function to view all the books
 * 
 * @return test_values 
 */
test_values view_all_records();

#endif
