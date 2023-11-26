#include <stdio.h>
#include <conio.h>

#define z 3
#define SQR(x) (x)*(x)
#define MAX(y,z) ((y)>(z))?(y):(z)
#define PRINTI(w) puts("control output"); \
 printf(#w" = %d\n",w)
#define PRINTR(w) puts ("result :"); \
 printf (#w" = %f\n",(float)w)

#if defined(_MSC_VER)
#define COMPILER "Microsoft Visual C++"
#elif defined(__GNUC__)
#define COMPILER "GNU Compiler Collection"
#else
#define COMPILER "Unknown Compiler"
#endif

#if defined(_WIN32)
#define OS "Windows"
#elif defined(__linux__)
#define OS "Linux"
#else
#define OS "Unknown OS"
#endif

void main()
{
    puts("Lab 13.2. Using macros and preprocessing directive");
    int x, y,
        x_minus_z_kvadr,
        x_minus_y,
        xy,
        yz,
        zx,
        maxim1,
        maxim2,
        max1_plus_max2;
    char ch;

#if defined(_DEBUG)
    puts("Debug Mode");
#elif defined(NDEBUG)
    puts("Release Mode");
#else
    puts("Unknown Compilation Mode");
#endif

    puts("Compiler Information:");
    puts(COMPILER);
    puts("Operating System:");
    puts(OS);

    do
    {
        puts("define the maximum of two numbers");
        puts("Input 2 integer numbers");
        scanf_s("%d", &x);
        PRINTI(x);
        scanf_s("%d", &y);
        PRINTI(y);

#if z > 3
        x_minus_z_kvadr = SQR(x - z);
        PRINTI(x_minus_z_kvadr);
        x_minus_y = (x - y);
        PRINTI(x_minus_y);
        maxim1 = MAX(x_minus_z_kvadr, x_minus_y);
        PRINTR(maxim1);
#else
        xy = (x * y);
        yz = (y * z);
        zx = (z * x);
        printf("xy = %d, yz = %d, zx = %d\n", xy, yz, zx);
        maxim1 = MAX(xy, yz);
        PRINTI(maxim1);
        maxim2 = MAX(zx, yz);
        PRINTI(maxim2);
        max1_plus_max2 = (maxim1 + maxim2);
        PRINTR(max1_plus_max2);
#endif

        puts("Repeat? y /n ");
        ch = _getch();
    } while (ch == 'y');
}
