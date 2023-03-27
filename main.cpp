#include <iostream>

using namespace std;

int tambah (int a, int b) {
    int hasil = a + b;
    return hasil;
}

int main()
{


//panggil function
/* int a;
int b;
cin >> a;
cin >> b;
cout << tambah(a, b) << endl;
**/

//perulangan
/**
int b [] = {19,20,31};
cout << b[2];
*/

/**
int a;
cin >> a;
for(a; a < 5;a++){
    cout << "Halllo "<< endl;
}
*/


/**
int a = 0;

for( a; a<10; a++){
    cout <<  a << endl;
}

*/

/**
while(a < 10){
    cout <<  a << endl;
    a++;
}
*/


/**

do{
    cout <<  a << endl;
    a++;
}while(a < 10 );

*/



//latihan switch

/**
int makanan;
cout << "Pilih menu makanan : " << endl;
cin >> makanan;
switch(makanan){
    case 1:
        cout << "Bakso" << endl;
        break;
    case 2:
        cout << "Nasi Goreng" << endl;
        break;
    case 3:
        cout << "Sate" << endl;
        break;
    case 4:
        cout << "Ayam Geprek" << endl;
        break;
}

*/

//Swicth
/**
int a = 1;

switch(a){
case 0:
   cout << "Lampu mati" << endl;
   break;
case 1:
    cout << "Lampu hidup" << endl;
    break;
}

*/

//if else
/**
int a;

cout << "Apakah malam ini hujan ? " <<endl;
cin >> a;
if(a==1){
    cout << "Iya, malam ini hujan kak.. :(" << endl;
}else{
    cout << "Tidak, malam ini tidak hujan kak... :)" << endl;
}


*/

/**

int a = 3;
int b = 3;

if(a==0){
    cout << "Halo" << endl;
}else if(b==0){
    cout << "Hore" << endl;
}else{
    cout << "oke" << endl;
}

*/

//Latihan Operator Logika
/**

int a;
int b;

cout << "Silahkan inputkan nilai a :" << endl;
cin >> a;
cout << "Silakan inputkan nilai b :" << endl;
cin >> b;
int hasil = (a==b);
cout << "Apakah nilai a dan b sama ? " << endl;
cout << "Jawaban : ";
cout << hasil;

*/

/**
 int a = 9;
 int b = 8;
 int c = !(a!=b);

 cout << c << endl;
*/



//Komparasi
/**
    int a = 8;
    int b = 7;

    cout << (a>=b) << endl;
*/

//Soal Latihan
/**
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Silahkan inputkan nilai a : " << endl;
    cin >> a;
    cout << "Silahkan inputkan nilai b : " << endl;
    cin >> b;
     cout << "Silahkan inputkan nilai c : " << endl;
    cin >> c;
    int hasila = a + b;
    int hasilb = hasila * c;
    cout << "Hasil penjumlahan a + b x c adalah : ";
    cout << hasilb <<endl;

*/

//Latihan Aritmatika 2

/**
    int a = 8;
    int b = 12;
    int c = 0;

    a = c;
    b = a;
    int penjumlahan = a + b;
    cout << penjumlahan << endl;
*/



//Latihan operator aritmatika

/**

    int a = 16;
    int b = 7;
    int penjumlahan = a + b;
    int pengurangan = a - b;
    int perkalian = a * b;
    int pembagian = a - b;
    int modulo = a % 2;

    cout << "a + b = "; cout << penjumlahan << endl;
    cout << "a - b = "; cout << pengurangan << endl;
    cout << "a x b = "; cout << perkalian<< endl;
    cout << "a : b = "; cout << pembagian<< endl;
    cout << "a % 2 ="; cout << modulo << endl;
*/

//Latihan String//
   /**
    string namadepan;
    string namabelakang;
   cout << "Nama depan : " << endl;
   cin >> namadepan ;
   cout << "Nama belakang : " << endl;
   cin >> namabelakang;
   // cout << namadepan +" "+ namabelakang;
    */

    //Solusi sederehana
    long  long N;
    cin  >> N;
    int  divisorCount = 0;
    for (long  long i = 1; i  <= N; i++)
    {
        if (N % i == 0)
        {
            divisorCount ++;
        }
    }
    if (divisorCount % 2 == 0)
    {
        cout  << "lampu mati" << endl;
    }
    else
    {
        cout  << "lampu menyala" << endl;
    }

}
