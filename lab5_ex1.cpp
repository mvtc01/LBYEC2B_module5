#include <stdio.h>
#include <math.h>

double const PI = 3.14159265358979323846f;

class Triangle
{
	private:
		double side_a;	//private attributes
		double side_b;
		double side_c;
		double p;
		double triang_area;	
		
		
	public:
		//Setter
		Triangle(double a, double b, double c)	//constructor made public
		{
			side_a = a;     //private attributes can be used since both within the same class
			side_b = b;
			side_c = c;
			p = (side_a + side_b + side_c)/2;   //solving for the parameter of the triangle, p
			triang_area = sqrt(p*(p - side_a)*(p - side_b)*(p - side_c));
			
		}
		//Getter
		double getArea()	//method or function with no arguments
		{
			return triang_area;
		}
};

class Rectangle
{
	private:
		double length;
		double width;
		double side;
		double rect_area;
		
	public:
		Rectangle(double l, double w)   //there can be multiple constructors in one class given different arguments
		{
			length = l;
			width = w;
			rect_area = length*width;
		}

		Rectangle(double s)
		{
			side = s;
			rect_area = side*side;
		}
		
		double getArea()
		{
			return rect_area;
		}
		
};

class Ellipse
{
	private:
		double maj_ax;
		double min_ax;
		double diameter;
		double ellipse_area;
	
	public:
		Ellipse(double a, double b)
		{
			maj_ax = a;
			min_ax = b;
			ellipse_area = (PI*maj_ax*min_ax)/4;
		}
		
		Ellipse(double d)
		{
			diameter = d;
			ellipse_area = (PI*diameter*diameter)/4;
		}
		
		double getArea()
		{
			return ellipse_area;
		}
};

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
