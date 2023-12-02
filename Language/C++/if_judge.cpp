#include<iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a % b == 0 || b % a == 0)
    {
        cout << "Sao Multiplos" << endl;
    }
    else 
    {
        cout << "Nao sao Multiplos" << endl; 
    }
    
    return 0;
}


#include<iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    switch (x) {
        case 1:
        printf("Total: R$ %.2lf", y * 4.0);
        break;
        case 2:
        printf("Total: R$ %.2lf", y * 4.5);
        break;
        case 3:
        printf("Total: R$ %.2lf", y * 5.0);
        break;
        case 4:
        printf("Total: R$ %.2lf", y * 2.0);
        break;
        case 5:
        printf("Total: R$ %.2lf", y * 1.5);
        break;
    }
    return 0;
}

#include<iostream>

using namespace std;

int main() {
    double n;
    cin >> n;
        if (n >= 0 && n <= 25) {
            printf("Intervalo [0,25]");
        }
        else if (25 < n && n <= 50) {
            printf("Intervalo (25,50]");
        }
        else if (50 < n && n <= 75) {
            printf("Intervalo (50,75]");
        }
        else if (75 < n && n <= 100) {
            printf("Intervalo (75,100]");
        }
        else {
            printf("Fora de intervalo");
        }
    return 0;
}

#include<cmath>
#include<iostream>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && fabs(a - b) < c)
    {
        printf("Perimetro = %.1lf", a + b + c);
    }
    else 
    {
        printf("Area = %.1lf", (a + b) * c / 2);
    }
    return 0;
}

#include<iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (b <= a)
    {
        b += 24;
    }
    int ans = b - a;
    cout << "O JOGO DUROU " << ans << " HORA(S)" << endl;
    return 0;
}

 #include<iostream>
 #include<cstdio>
 using namespace std;
 int main()
 {
     float sal;
     cin>>sal;
     if(sal>=0&&sal<=400.00){
         printf("Novo salario: %.2f\n",sal+sal*0.15);
         printf("Reajuste ganho: %.2f\n",sal*0.15);
         printf("Em percentual: 15 %%");
     }
     else if(sal>=400.01&&sal<=800.00){
         printf("Novo salario: %.2f\n",sal+sal*0.12);
         printf("Reajuste ganho: %.2f\n",sal*0.12);
         printf("Em percentual: 12 %%");
     }
     else if(sal>=800.01&&sal<=1200.00){
         printf("Novo salario: %.2f\n",sal+sal*0.10);
         printf("Reajuste ganho: %.2f\n",sal*0.10);
         printf("Em percentual: 10 %%");
     }
     else if(sal>=1200.01&&sal<=2000.00){
         printf("Novo salario: %.2f\n",sal+sal*0.07);
         printf("Reajuste ganho: %.2f\n",sal*0.07);
         printf("Em percentual: 7 %%");
     }
     else{
         printf("Novo salario: %.2f\n",sal+sal*0.04);
         printf("Reajuste ganho: %.2f\n",sal*0.04);
         printf("Em percentual: 4 %%");
     }
     return 0;
 }

#include<iostream>
using namespace std;

int main()
{
    string st1,st2,st3;
    cin>>st1>>st2>>st3;
    if(st1=="vertebrado"){
        if(st2=="ave"){
            if(st3=="carnivoro")cout<<"aguia";
            else cout<<"pomba";
        }
        else{
            if(st3=="onivoro")cout<<"homem";
            else cout<<"vaca";
        }
    }
    else {
        if(st2=="inseto"){
            if(st3=="hematofago")cout<<"pulga";
            else cout<<"lagarta";
        }
        else{
            if(st3=="hematofago")cout<<"sanguessuga";
            else cout<<"minhoca";
        }
    }
}

#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    switch(n) {
        case 61:
        cout << "Brasilia" << endl;
        break;
        case 71:
        cout << "Salvador" << endl;
        break;
        case 11:
        cout << "Sao Paulo" << endl;
        break;
        case 21:
        cout << "Rio de Janeiro" << endl;
        break;
        case 32:
        cout << "Juiz de Fora" << endl;
        break;
        case 19:
        cout << "Campinas" << endl;
        break;
        case 27:
        cout << "Vitoria" << endl;
        break;
        case 31:
        cout << "Belo Horizonte" << endl;
        break;
        default:
        cout << "DDD nao cadastrado" << endl;
    }
    return 0;
}

#include<iostream>

using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    if (x > 0 && y > 0)
        cout << "Q1" << endl;
    else if (x < 0 && y > 0)
        cout << "Q2" << endl;
    else if (x < 0 && y < 0)
        cout << "Q3" << endl;
    else if (x > 0 && y < 0)
        cout << "Q4" << endl;
    else
    {
        if (!x && !y) cout << "Origem" << endl;
        else if (!y) cout << "Eixo X" << endl;
        else cout << "Eixo Y" << endl;
    }
    return 0;
}

#include<iostream>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    if (b > a)swap(b, a);
    if (c > a)swap(c, a);
    if (c > b)swap(b, c);
    if (a >= b + c) cout << "NAO FORMA TRIANGULO";
    else
    {
        if (a * a == b * b + c * c)
    {
        cout << "TRIANGULO RETANGULO" << endl;
    }
    if (a * a > b * b + c * c)
    {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    if(a * a < b * b + c * c)
    {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if (a == b && b == c)
    {
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    else if (a == b || b == c || a == c)
    {
        cout << "TRIANGULO ISOSCELES" << endl;
    }
    }
    return 0;
}

#include<iostream>

using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int t1 = a * 60 + b;
    int t2 = c * 60 + d;
    int t = t2 - t1;
    if (t <= 0) t += 1440;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", t / 60, t % 60);
    return 0;
}

#include<iostream>
#include<cstdio>

using namespace std;

int main() {
    double salary = 0;
    cin >> salary;
    if ( 0 <= salary && salary <= 2000) {
        printf("Isento");
    }
    else if (2000.1 <= salary && salary <= 3000) {
        printf("R%.2lf", 0.08 * (salary - 2000));
    }
    else if (3000.1 <= salary && salary <= 4500) {
        printf("R %.2lf", 0.08 * (salary - 2000));
    }
    else if (3000.1 <= salary && salary <= 4500) {
        printf("R %.2lf", (salary - 3000) * 0.18 + 80);
    }
    else {
        printf("R$ %.2lf", (salary - 4500) * 0.28 + 350);
    }
    return 0;
}
#include<iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int t1 = a, t2 = b, t3 = c;
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    cout << a << endl << b << endl << c << endl;
    cout << endl;
    cout << t1 << endl << t2 << endl << t3 << endl;
    return 0;
}

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
    double a, b, c;
    double x1, x2;
    cin >> a >> b >> c;
    double d = b*b-4*a*c;
    if ((d) < 0 || a == 0) {
        cout << "Impossivel calcular";
    }   
    else {
        x1 = (-b + sqrt(d))/(2 * a);
        x2 = (-b - sqrt(d))/(2 * a);
        printf("R1 = %.5lf\nR2 = %.5lf", x1, x2);
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    double n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    double X = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;
    printf("Media: %.1lf\n", X);

    if (X >= 7)
        cout << "Aluno aprovado." << endl;
    if (X < 5)
        cout << "Aluno reprovado." << endl;
    if (5 <= X && X < 7)
    {
        cout << "Aluno em exame." << endl;
        double Y;
        cin >> Y;
        printf("Nota do exame: %.1lf\n", Y);
        double Z = (X + Y) / 2;
        if (Z >= 5)
            cout << "Aluno aprovado." << endl;
        else
            cout << "Aluno reprovado." << endl;
        printf("Media final: %.1lf", Z);
    }
    return 0;
}
