
/*#include <iostream>
using namespace std;

class complex {
private:
    int reel;
    int img;

public:
    complex();
    complex(int, int);
    complex(const complex&);
    void affiche() const;
    friend complex somme(const complex&, const complex&);
    friend complex mult(const complex&, const complex&);
    friend complex divi(const complex&, const complex&);
    friend complex sous(const complex&, const complex());
};

complex::complex() {
    reel = 0;
    img = 0;
}

complex::complex(int a, int b) {
    reel = a;
    img = b;
}

complex::complex(const complex& m) {
    reel = m.reel;
    img = m.img;
}

void complex::affiche() const {
    cout << reel << " + " << img << "i";
}

complex somme(const complex& a, const complex& b) {
    complex m(a.reel + b.reel, a.img + b.img);
    return m;
}

complex mult(const complex& a, const complex& b) {
    complex m(a.reel * b.reel - a.img * b.img, a.reel * b.img + a.img * b.reel);
    return m;
}

complex divi(const complex& a, const complex& b) {
    complex m((a.reel * b.reel + a.img * b.img) / (b.reel * b.reel + b.img * b.img),
              (a.img * b.reel - a.reel * b.img) / (b.reel * b.reel + b.img * b.img));
    return m;
}

complex sous(const complex& a, const complex& b) {
    complex m(a.reel - b.reel, a.img - b.img);
    return m;
}

int main() {
    complex c1(6, 9), c2(3, 7);
    mult(c1, c2).affiche();
    sous(c1, c2).affiche();
    divi(c1, c2).affiche();

    return 0;
}*/
/*mm**********************************************************************************8m*/
#include <iostream>
using namespace std;

class Test {
public:
    static int tableau[];
public:
    static int division(int indice, int diviseur) {
        if (diviseur == 0) {
            throw "Division par zéro !"; 
        }
        if (indice < 0 || indice >= 10) {
            throw "Indice hors de la plage !"; 
        }
        return tableau[indice] / diviseur;
    }
};

int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5};

int main() {
    int x, y;
    cout << "Entrez  indice de entier à diviser: " << endl;
    cin >> x;
    cout << "Entrez le diviseur: " << endl;
    cin >> y;

    try {
        int resultat = Test::division(x, y);
        cout << "Le résultat de la division est: " << resultat << endl;
    } catch (const char* message) {
        cerr << "Erreur : " << message << endl;
        return 1; 
    }

    return 0;
}




