#include <stdio.h>
#include "loan_manager.h"
#include "database.h"

void register_loan(int book_id, int user_id, char* loan_date, char* return_date) {
    // Implementación para registrar un préstamo
}

void register_return(int book_id, int user_id, char* return_date) {
    // Implementación para registrar una devolución
}

void display_loan_history(int user_id) {
    // Implementación para mostrar el historial de préstamos de un usuario
}

void manage_loans() {
    int option, book_id, user_id;
    char loan_date[20], return_date[20];

    printf("1. Registrar Préstamo\n");
    printf("2. Registrar Devolución\n");
    printf("3. Ver Historial de Préstamos\n");
    printf("Selecciona una opción: ");
    scanf("%d", &option);

    switch(option) {
        case 1:
            printf("ID del Libro: ");
            scanf("%d", &book_id);
            printf("ID del Usuario: ");
            scanf("%d", &user_id);
            printf("Fecha de Préstamo: ");
            scanf("%s", loan_date);
            printf("Fecha de Devolución: ");
            scanf("%s", return_date);
            register_loan(book_id, user_id, loan_date, return_date);
            break;
        case 2:
            printf("ID del Libro: ");
            scanf("%d", &book_id);
            printf("ID del Usuario: ");
            scanf("%d", &user_id);
            printf("Fecha de Devolución: ");
            scanf("%s", return_date);
            register_return(book_id, user_id, return_date);
            break;
        case 3:
            printf("ID del Usuario: ");
            scanf("%d", &user_id);
            display_loan_history(user_id);
            break;
        default:
            printf("Opción no válida.\n");
    }
}
