#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int opc, A, B, C;
    cout << "---Teroema de Pitagoras ^^---\n";
    cout << "Seleccione incognita: A/B/C: ";
    cin >> opc;
    if(opc == 1){
        cout << "Ecuacion Inicial: " << "C^2 = A^2 + B^2\n";
        cout << "Despejar para A:\nA^2 = C^2 - B^2\n";
        cout << "Ingrese valor para C: ";
        cin >> C;
        cout << "Ingrese valor para B: ";
        cin >> B;
        while(C < 4 && C >= 16){
            cout << "\nEl limite es de 4 a 15 >:v...\n";
            cin >> C;
        }
        while(B < 4 && B >= 16){
            cout << "\nEl limite es de 4 a 15 >:v...\n";
            cin >> B;
        }
        while(C <= B){
            cout << "\nPor favor, el valor de C debe de ser mayor que el de B...\n";
            cin >> C;
        }
        cout << "Ecuacion: A^2 = " << C << "^2 - " << B << "^2\n";
        int s = pow(C, 2);
        int s2 = pow(B, 2); 
        cout << "A^2 = " << s << " - " << s2 << endl;
        cout << "A^2 = " << s - s2 << endl;
        A = sqrt(s - s2);
        cout << "A = " << A;
    }
    if(opc == 2){
        cout << "Ecuacion Inicial: " << "C^2 = A^2 + B^2\n";
        cout << "Despejar para B:\nB^2 = C^2 - A^2\n";
        cout << "Ingrese valor para C: ";
        cin >> C;
        cout << "Ingrese valor para A: ";
        cin >> A;
        while(C < 4 && C >= 16){
            cout << "\nEl limite es de 4 a 15 >:v...\n";
            cin >> C;
        }
        while(A < 4 && A >= 16){
            cout << "\nEl limite es de 4 a 15 >:v...\n";
            cin >> A;
        }
        while(C <= A){
            cout << "\nPor favor, el valor de C debe de ser mayor que el de A...\n";
            cin >> C;
        }
        cout << "Ecuacion: B^2 = " << C << "^2 - " << A << "^2\n";
        int s = pow(C, 2);
        int s2 = pow(A, 2); 
        cout << "B^2 = " << s << " - " << s2 << endl;
        cout << "B^2 = " << s - s2 << endl;
        B = sqrt(s - s2);
        cout << "B = " << B;
    }
    if(opc == 3){
        cout << "Ecuacion Inicial: " << "C^2 = A^2 + B^2\n";
        cout << "Ya esta desejado.\n";
        cout << "Ingrese valor para A: ";
        cin >> A;
        cout << "Ingrese valor para B: ";
        cin >> B;
        while(A < 4 && A >= 16){
            cout << "\nEl limite es de 4 a 15 >:v...\n";
            cin >> A;
        }
        while(B < 4 && B >= 16){
            cout << "\nEl limite es de 4 a 15 >:v...\n";
            cin >> B;
        }
        while(A <= B){
            cout << "\nPor favor, el valor de C debe de ser mayor que el de A...\n";
            cin >> A;
        }
        cout << "Ecuacion: C^2 = " << A << "^2 + " << B << "^2\n";
        int s = pow(A, 2);
        int s2 = pow(B, 2); 
        cout << "C^2 = " << s << " - " << s2 << endl;
        cout << "C^2 = " << s + s2 << endl;
        C = sqrt(s + s2);
        cout << "C = " << C;
    }

    cout << "\nListo, Bye ^^\n";
}