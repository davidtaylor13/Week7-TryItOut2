#include <iostream>
#include <cmath> // for abs()
using namespace std;

class Polynomial
{
    private:
        double a;
        double b;
        double c;

    public:
        Polynomial(): a(0), b(0), c(0) {}


        friend istream& operator>>(istream& is, Polynomial poly)
        {
            cout << "a(x^2): ";
            is >> poly.a;
            cout << "b(x): ";
            is >> poly.b;
            cout << "c: ";
            is >> poly.c;

            return is;
        }

        Polynomial operator+(const Polynomial otherPoly)
        {
            Polynomial sum;
            sum.a = a + otherPoly.a;
            sum.b = b + otherPoly.b;
            sum.c = c + otherPoly.c;

            return sum;
        }

        Polynomial operator-(const Polynomial otherPoly)
        {
            Polynomial diff;
            diff.a = a + otherPoly.a;
            diff.b = b + otherPoly.b;
            diff.c = c + otherPoly.c;

            return diff;
        }

        friend ostream& operator<<(ostream& os, Polynomial poly)
        {
            string eqn = "";
            if (poly.a == 0)
            {
                if(poly.b > 0)
            }
            else
            {
                eqn += poly.a + " ";
            }

            if (poly.b == 0)
            {
                if(poly.c > 0)
            }
            else
            {

            }

            if (poly.c == 0)
            {

            }
            else
            {

            }
        }
};

int main() 
{
    Polynomial p1, p2;

    cout << "Polynomial 1:\n";
    cin >> p1;

    cout << "\nPolynomial 2:\n";
    cin >> p2;

    Polynomial sum = p1 + p2;
    Polynomial diff = p1 - p2;

    cout << "\nP1 = " << p1 << endl;
    cout << "P2 = " << p2 << endl;

    cout << "\nP1 + P2 = " << sum << endl;
    cout << "P1 - P2 = " << diff << endl;

    return 0;
}
