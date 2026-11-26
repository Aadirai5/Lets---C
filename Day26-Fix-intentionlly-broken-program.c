/*
// Wrong
int a = 10

// Correct
int a = 10;

// Wrong
float a = 5.5;
printf("%d", a);

// Correct
printf("%f", a);

// Wrong
int a;
printf("%d", a);

// Correct
int a = 10;
printf("%d", a);

// Wrong
if (a = 10)

// Correct
if (a == 10)


// Wrong
for (int i = 0; i <= 5; i++)
    printf("%d", a[i]); // if array has 5 elements

// Correct
for (int i = 0; i < 5; i++)
    printf("%d", a[i]);


// Wrong
int *p;
*p = 10;

// Correct
int a;
int *p = &a;
*p = 10;

*/
