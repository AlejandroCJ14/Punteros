
#include<iostream>
#include<vector>


using namespace std;

//e39
void cambiar(int* p) { *p += 5; }

//e40
int sumarFila(int (*m)[3], int fila) {
return m[fila][0]+m[fila][1]+m[fila][2];
}

int main()
{
    //e1
    int x = 8;
    int* p = &x;
    cout << *p << endl;
    // A) 8

    //e2
    x = 5;
    *p = 12;
    cout << x << endl;
    //A) 12

    //e3
    int a = 7;
    p = &a;
    cout << a + *p << endl;
    //D) 14

    //e4
    x = 3;
    p = &x;
    x++;
    cout << *p << endl;
    //D) 4

    //e5
    a = 10;
    int b = 20;
    p = &a;
    p = &b;
    cout << *p << endl;
    //C) 20

    //e6
    int n = 9;
    p = &n;
    cout << (&n == p) << endl;
    //C) 1

    //e7
    x = 6;
    p = &x;
    cout << *p << " " << x << endl;
    //C) 6 6    

    //e8
    a = 4;
    p = &a;
    *p += 3;
    cout << a * 2 << endl;
    //D) 14

    //e9
    x = 11;
    p = &x;
    int** pp = &p;
    cout << **pp << endl;
    //C) 11 

    //e10
    x = 2;
    p = &x;
    pp = &p;
    **pp = 15;
    cout << x << endl;
    //C) 15 

    //e11
    int* a1 = new int[4] {2,4,6,8}; // si lo hago con memoria dinamica no tengo que comentar todo ni crear nuevas variables
    p = a1;
    cout << *p << endl;
    delete[] a1;
    //A) 2  

    //e12
    a1 = new int[3] {3,5,7};
    p = a1;
    cout << *(p + 1) << endl;
    delete[] a1;
    //A) 5

    //e13
    a1 = new int[4] {1,2,3,4};
    p = a1;
    cout << p[2] << endl;
    delete[] a1;
    //B) 3 
    
    //e14
    a1 = new int[3] {8,6,4};
    p = a1;
    cout << *(p + 2) + *p << endl;
    delete[] a1;
    //C) 12

    //e15
    a1 = new int[3] {10,20,30};
    p = a1;
    p++;
    cout << *p << endl;
    delete[] a1;
    //C) 20

    //e16
    a1 = new int[4] {2,4,6,8};
    p = a1;
    *(p + 1) = 9;
    cout << *p << endl;
    delete[] a1;
    //A) 2

    //e17
    a1 = new int[4] {1,2,3,4};
    p = a1;
    int suma = 0;
    for (int i=0; i<4; i++) suma += *(p+i);
    cout << suma << endl;
    delete[] a1;
    //C 10

    //e18
    a1 = new int[4] {5,9,2,7};
    p = a1;
    cout << *(p + 3) - *(p + 1) << endl;
    delete[] a1;
    //A) -2

    //e19
    a1 = new int[5] {1,3,5,7,9};
    p = &a1[4];
    cout << *(p-2) << endl;
    delete[] a1;
    //C) 5  

    // e20
    a1 = new int[4] {2,4,6,8};
    p = a1;
    cout << (p + 3) - p << endl;
    delete[] a1;
    //D) 3

    //e21
    a1 = new int[3] {4,7,1};
    p = a1;
    *p = *(p+1) + *(p+2);
    cout << a1[0] << endl;
    delete[] a1;
    //D) 8

    //e22
    a1 = new int[3] {1,2,3};
    p = a1;
    for(int i=0;i<3;i++) *(p+i) *= 2;
    cout << a1[0] << " " << a1[2] << endl;
    delete[] a1;
    //C) 2 6

    //e23
    int** m = new int*[2];
    m[0] = new int[3]{1, 2, 3};
    m[1] = new int[3]{4, 5, 6};
    int** p1 = m;
    cout << p1[1][2] << endl;
    delete[] m[0];
    delete[] m[1];
    delete[] m;
    //A) 6

    //e24
    m = new int*[2];
    m[0] = new int[2]{2, 4};
    m[1] = new int[2]{6, 8};
    p1 = m;
    cout << p1[1][0] << endl;
    delete[] m[0];
    delete[] m[1];
    delete[] m;
    //B) 6

    //e25
     m = new int*[2];
     m[0] = new int[3]{1,2,3};
     m[1] = new int[3]{4,5,6};
    p1 = m;
    cout << *(*(p1+1)+1) << endl;
    delete[] m[0];
    delete[] m[1];
    delete[] m;
    //D) 5

    //e26
    m = new int*[2];
    m[0] = new int[2]{1,3};
    m[1] = new int[2]{5,7};
    p1= m;
    cout << *(*(p1)+1) + *(*(p1+1)) << endl;
    delete[] m[0];
    delete[] m[1];
    delete[] m;
    //B) 8

    //e27
    m = new int*[3];
    m[0] = new int[2]{1,2};
    m[1] = new int[2]{3,4};
    m[2] = new int[2]{5,6};
    p1 = m;
    cout << (p1+2)[0][1] << endl;
    delete[] m[0];
    delete[] m[1];
    delete[] m[2];
    delete[] m;
    //B) 6

    //e28
    m = new int*[2];
    m[0] = new int[3]{1,2,3};
    m[1] = new int[3]{4,5,6};
    p1 = m;
    p1[0][2] = p1[1][0] + p1[1][1];
    cout << m[0][2] << endl;
    delete[] m[0];
    delete[] m[1];
    delete[] m;
    //C) 9

    //e29
    m = new int*[2];
    m[0] = new int[2]{2,3};
    m[1] = new int[2]{4,5};
    p1 = m;
    int s=0;
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            s += p1[i][j];
    cout << s << endl;
    delete[] m[0];
    delete[] m[1];
    delete[] m;
    //D) 14

    //e30
    m = new int *[3];
    m[0] = new int[3]{1,2,3};
    m[1] = new int[3]{4,5,6};
    m[2] = new int[3]{7,8,9};
    p1 = m;
    cout << p1[0][0]+p1[1][1]+p1[2][2] << endl;
    delete[] m[0];
    delete[] m[1];
    delete[] m[2];
    delete[] m;
    //A) 15

    //e31
    m = new int*[2];
    m[0] = new int[3]{1,2,3};
    m[1] = new int[3]{4,5,6};
    p1 = m;
    cout << p1[0][2]+p1[1][2] << endl;
    delete[] m[0];
    delete[] m[1];
    delete[] m;
    //D) 9

    //e32
    m = new int*[2];
    m[0] = new int[2]{1,2};
    m[1] = new int[2]{3,4};
    p1 = m;
    for(int i=0;i<2;i++) p1[i][i] *= 3;
    cout << m[0][0] << " " << m[1][1] << endl;
    delete[] m[0];
    delete[] m[1];
    delete[] m;
    //B) 3 12

    //e33
    int* pd = new int(25);
    cout << *pd << endl;
    delete pd;
    //D) 25

    //e34
    int* ad = new int[3]{3,6,9};
    cout << ad[1] << endl;
    delete[] ad;
    //D) 6

    //e35
    ad = new int[4]{1,2,3,4};
    pd = ad;
    cout << *(pd+3) << endl;
    delete[] ad;
    //A) 4

    //e36
    n = 3;
    ad = new int[n]{2,4,6};
    s=0;
    for(int i=0;i<n;i++) s+=ad[i];
    cout << s << endl;
    delete[] ad;
    //D) 12

    //e37
    m = new int*[2];
    m[0] = new int[2]{1,2};
    m[1] = new int[2]{3,4};
    cout << m[1][0] << endl;
    delete[] m[0];
    delete[] m[1];
    delete[] m;
    //A) 3

    //e38
    m = new int*[2];
    m[0] = new int [3]{2,4,6};
    m[1] = new int [3]{1,3,5};
    cout << *(*(m+1)+2) << endl;
    delete[] m[0];
    delete[] m[1];
    delete[] m;
    //B) 5
    
    //e39
    x = 7;
    cambiar(&x);
    cout << x << endl;
    //A) 12

    //e40
    int mf [2][3]{ {1,2,3}, {4,5,6} };
    cout << sumarFila(mf, 0) << endl;
    //D) 6


    


    return 0;
}
