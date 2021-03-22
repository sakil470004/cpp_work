#include "16_employee.cpp"



int main()
{
    Employee e1{"John", 12.5};
    e1.addHours(10);
    e1.addHours(8);
    e1.addHours(12);

    printEmployee(e1);
    // e1.addHours(10);
    // e1.addHours(7);

    printEmployee(e1);

    return 0;
}
