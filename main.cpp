#include <iostream>
#define PI 3.14159265

using namespace std;

int selected_option;
int menuitems();

double areaCircle(double);
double areaSquare(double);
double areaRect(double,double);
double areaTriangle(double, double);

double area;

double radius;
double length;
double len_rect;
double wid_rect;
double base;
double height;

int main()
{
    char cont;
    do
    {
        menuitems();
        system("clear");
        switch(selected_option)
        {
            case 1:
                cout << "What's the radius of the circle? ";
                cin >> radius;
                areaCircle(radius);
                break;
            case 2:
                cout << "What's the length of the square? ";
                cin >> length;
                areaSquare(length);
                break;
            case 3:
                cout << "What's the length of the rectangle? ";
                cin >> len_rect;
                cout << "What's the width of the rectangle? ";
                cin >> wid_rect;
                areaRect(len_rect,wid_rect);
                break;
            case 4:
                cout << "What's the length of the triangle's base? ";
                cin >> base;
                cout << "What's the length of the triangle's height? ";
                cin >> height;
                areaTriangle(base, height);
                break;
            default:
                cout << "Incorrect value added. Try again. Bye." << endl;
                break;
        }
        do
        {
            cout << "Continue? (Y/N): " << endl;
            cin >> cont;
        }
        while (cont != 'y' && cont != 'Y' && cont != 'N' && cont != 'n');
    }
    
    while (cont == 'y' || cont == 'Y');

    return 0;
}

int menuitems()
{
    cout << "1. Circle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Rectangle" << endl;
    cout << "4. Triangle" << endl;
    cout << "What do you want the area for? Enter an integer number corresponding to the options above: ";
    cin >> selected_option;
}

double areaCircle(double radius)
{
    area = PI*radius*radius;
    cout << area << endl;
    return area;
}

double areaSquare(double length)
{
    area = length*length;
    cout << area << endl;
    return area;
}

double areaRect(double len_rect, double wid_rect)
{
    area = len_rect*wid_rect;
    cout << area << endl;
    return area;
}

double areaTriangle(double base, double height)
{
    area = 0.5 * base * height;
    cout << area << endl;
    return area;
}
