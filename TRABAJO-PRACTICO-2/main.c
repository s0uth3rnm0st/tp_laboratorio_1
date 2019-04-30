#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "employees.h"

int main()
{
    Employee listing[3];
    buildEmployeeArray(listing, 3);
    initEmployees(listing, 3);
    printEmployeesArray(listing, 3);

    return 0;
}
