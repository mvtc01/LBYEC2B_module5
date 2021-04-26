#include <stdio.h>
#include <math.h>

double const PI = 3.14159265358979323846f;

int main()
{
    int choice = 0;
    printf("Select your shape:\n");
    printf("1. Triangle\n");
    printf("2. Rectangle\n");
    printf("3. Square\n");
    printf("4. Ellipse\n");
    printf("5. Circle\n");
    printf("6. Exit\n");
    do
    {
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            double a, b, c;
            printf("Enter length of three sides: ");
            scanf("%lf %lf %lf", &a, &b, &c);
            Triangle triang(a, b, c);
            printf("The area of triangle is %0.3lf\n", triang.getArea());
        }
        else if (choice == 2)
        {
            double l, w;
            printf("Enter length and width: ");
            scanf("%lf %lf", &l, &w);
            Rectangle rect(l, w);
            printf("The area of rectangle is %0.3lf\n", rect.getArea());
        }
        else if (choice == 3)
        {
            double s;
            printf("Enter side length: ");
            scanf("%lf", &s);
            Rectangle square(s);
            printf("The area of square is %0.3lf\n", square.getArea());
        }
        else if (choice == 4)
        {
            double a, b;
            printf("Enter length of major and minor axis: ");
            scanf("%lf %lf", &a, &b);
            Ellipse ellip(a, b);
            printf("The area of ellipse is %0.3lf\n", ellip.getArea());
        }
        else if (choice == 5)
        {
            double d;
            printf("Enter diameter: ");
            scanf("%lf", &d);
            Ellipse circle(d);
            printf("The area of circle is %0.3lf\n", circle.getArea());
        }

    } while (choice != 6);
    return 0;
}