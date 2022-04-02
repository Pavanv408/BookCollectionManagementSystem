#include<book_management.h>

/**
 * @brief function to add new books to library
 * 
 * @return test_values 
 */
test_values enter_new_record(int id, char title[], char author[]){
    FILE *fptr;
    fptr = fopen("book_management.txt","ab");
    if(fptr==NULL){
        printf("Unable to open the file\n");
        return fail;
    }else{
        book_data *new_book = (book_data*)malloc(sizeof(book_data));
        new_book->book_id = id;
        strcpy(new_book->book_title, title);
        strcpy(new_book->book_author, author);
        strcpy(new_book->status, "Available");
        strcpy(new_book->student_first_name, "N/A");
        strcpy(new_book->student_last_name, ".");
        new_book->student_usn=0;
/**
 * @brief the values for the student can be update in update_book
 * 
 */
        strcpy(new_book->date_of_issue,"N/A");
        strcpy(new_book->due_date,"N/A");
        fwrite(new_book, sizeof(book_data), 1, fptr);
        fclose(fptr);
        free(new_book);
        return pass;
    }
}
