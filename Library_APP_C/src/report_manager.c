#include <stdio.h>
#include "report_manager.h"
#include "database.h"

void generate_monthly_loan_report() {
    // Implementación para generar un reporte mensual de préstamos
}

void generate_most_loaned_books_report() {
    // Implementación para generar un reporte de los libros más prestados
}

void generate_current_inventory_report() {
    // Implementación para generar un reporte del inventario actual
}

void manage_reports() {
    int option;

    printf("1. Reporte Mensual de Préstamos\n");
    printf("2. Reporte de Libros Más Prestados\n");
    printf("3. Reporte de Inventario Actual\n");
    printf("Selecciona una opción: ");
    scanf("%d", &option);

    switch(option) {
        case 1:
            generate_monthly_loan_report();
            break;
        case 2:
            generate_most_loaned_books_report();
            break;
        case 3:
            generate_current_inventory_report();
            break;
        default:
            printf("Opción no válida.\n");
    }
}
