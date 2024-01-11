#include <stdio.h>

//enum = a user defined type of named integer identifiers
//enums are NOT STRINGS, but they can be treated as int

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};



//or
/*typedef enum
{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7} Day;*/



int main()
{

    enum Day today = Sun;


if (today == 1 /* or today == Sun */ || today == 7 /* or today == Sat */)
{
    printf("\nIt's the weekend! Party time!");
}

else{
    printf("\nI have to work today");
}

    printf("%d", today);

    return 0;
}