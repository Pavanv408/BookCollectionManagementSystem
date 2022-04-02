#include<book_management.h>

/**
 * @brief function to remove the records of a book
 * 
 * @param id 
 * @return test_values 
 */
test_values delete_record(int id){
    FILE *fptr1;
    FILE *fptr2;
    fptr1 = fopen("book_management.txt","rb");
    fptr2 = fopen("temp_data.txt","wb");
    if(fptr1==NULL){
        printf("Unable to open the file\n");
        return fail;
    }else{
        book_data *discarded_book = (book_data*)malloc(sizeof(book_data));
        while(fread(discarded_book, sizeof(book_data), 1, fptr1)!='\0'){
            if(id==discarded_book->book_id){
               continue;
            }
            fwrite(discarded_book, sizeof(book_data), 1, fptr2);            
        }
        fclose(fptr1);
        fclose(fptr2);
        free(discarded_book);
        remove("book_management.txt");
        rename("temp_data.txt", "book_management.txt");  
        return pass;
    }   
}
