#ifndef LOAN_MANAGER_H
#define LOAN_MANAGER_H

void register_loan(int book_id, int user_id, char* loan_date, char* return_date);
void register_return(int book_id, int user_id, char* return_date);
void display_loan_history(int user_id);
void manage_loans();

#endif
