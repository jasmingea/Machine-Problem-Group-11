//  Machine Problem 2
// This Program accepts input of the three sides of the triangle,
// then classifies whether is it scalene, isosceles, equilateral,
// and the area and perimeter, and tells if it is acute, right or obtuse.
// then lastly, computes the Apothem and circumcenter.

#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#define PI 3.14159265

using namespace std;

int main()
{
    double sideA, sideB, sideC, A, B, C, angleA, angleB, angleC, s, H, a, p, apothem, n,k;
    float Aa=0, Ab=0, Ba,Bb, Ca, Cb=0, xBA,yBA,xBC,yBC, pr1, pr2, x, y;
    
    cout << "Triangle Measurements\n"; // user inputs the measurements of the triangle
    cout << "Side A: "; cin >> sideA;
    cout << "Side B: "; cin >> sideB;
    cout << "Side C: "; cin >> sideC;
    
    A = (((sideB*sideB) + (sideC*sideC) - (sideA*sideA)) / (2*sideB*sideC));
    B = (((sideC*sideC) + (sideA*sideA) - (sideB*sideB)) / (2*sideC*sideA));
    C = (((sideA*sideA) + (sideB*sideB) - (sideC*sideC)) / (2*sideA*sideB));
    
    angleA = acos(A)*(180/M_PI); // formulas to compute for the interior angles
    angleB = acos(B)*(180/M_PI);
    angleC = acos(C)*(180/M_PI);
    
    cout << "\nInterior Angles:\n"; // solved interior angles of the triangle in absolute value
    cout << abs(angleA) << " degrees\n";
    cout << abs(angleB) << " degrees\n";
    cout << abs(angleC) << " degrees\n\n";
    
    
    // classification whether the triangle is equilateral, isosceles, or scalene
    if(sideA==sideB && sideB==sideC) // condition if triangle is an equilateral
    {
        cout << "Equilateral Triangle\n \n";
    }
    else if(sideA==sideB && sideB!=sideC) // condition if triangle is an isosceles
    {
        cout << "Isosceles Triangle\n \n";
    }
    
    else if(sideB==sideC && sideC!=sideA)
    {
        cout << "Isosceles Triangle\n \n";
    }
    else if(sideC==sideA && sideA!=sideB)
    {
        cout << "Isosceles Triangle\n \n";
    }
    else // condition if triangle is a scalene
    {
        cout << "Scalene Triangle\n \n";
    }
    
    // formulas to compute for the area and perimeter of the triangle
    s = (sideA + sideB + sideC) / 2;
    H = s * (s - sideA) * (s - sideB) * (s - sideC); // Heron's formula
    a = sqrt(H); // formula for area of the triangle using Heron's formula
    p = sideA + sideB + sideC; // formula for perimeter of the triangle
    
    cout << "AREA= \n" << a << "\n\n"; // total area
    cout << "PERIMETER= \n" << p << "\n \n"; // total perimeter
    
    cout << "Classification : \n";
    if(angleA<90 && angleB<90 && angleC<90) // condition if triangle is acute
    {
        cout << "Acute Triangle\n \n";
    }
    else if(angleA>90 && angleB>90 && angleC>90) // condition if triangle is obtuse
    {
        cout << "Obtuse Triangle\n \n";
    }
    else if(angleA==90 && angleB==90 && angleC==90) // condition if triangle is right
    {
        cout << "Right Triangle\n \n";
    }
    
    
    if(sideA == sideB && sideA == sideC) // condition if triangle has an apothem
    {
        apothem = (2 * sideA) / p;
        cout << "Length of Apothem: " << apothem << "\n";
    }
    else // condition if triangle has no apothem
    {
        cout << "Length of Apothem: \nAPOTHEM does not exist" << "\n";
    }
    // formulas to solve for the x and y coordinates of the triangle
    Ca = sideA ;
    k = cos(angleB * PI / 180);
    Ba = sideC * k;
    n = sin(angleC * PI / 180);
    Bb = sideB * n;
    
    xBA = (Ba + Aa)/2;
    yBA = (Bb + Ab)/2;
    pr1 = - 1 / ((Bb - Ab)/(Ba - Aa));
    xBC = (Ba + Ca)/2;
    yBC = (Bb + Cb)/2;
    pr2 = - 1 / ((Bb - Cb)/(Ba - Ca));
    
    // formulas to solve the coordinates for the circumcenter
    x = ((xBC * pr2) - (xBA * pr1)) / (pr2 - pr1);
    y = yBC + (pr2 * (x - xBC));
    
    
    
    cout << "\n Coordinates for the CIRCUMCENTER (" << x << "," << y << ")";
    
    return 0;
}

// end of program


