#ifndef DATABASE_H
#define DATABASE_H

void initialize_database();
void save_database();
void load_database();

typedef struct {
    int id;
    char title[100];
    char author[100];
    char genre[50];
    int quantity;
} Book;

typedef struct {
    int id;
    char name[100];
    char address[100];
    char contact_details[100];
} User;

typedef struct {
    int book_id;
    int user_id;
    char loan_date[20];
    char return_date[20];
} Loan;

#endif
