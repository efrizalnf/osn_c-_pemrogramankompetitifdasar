#include <iostream>

using namespace std;

int tambah(int a, int b) {
    int hasil = a + b;
    return hasil;
}

int main()
{
  //Fungsi
  //cout << tambah(2,3);
  //panggil function
/*
  int a = 9;
  int b = 4;
  int c = 6;
  b = c; // b=6
  a = b; // a=6
  //cin >> a;
  //cin >> b;
  cout << a << endl;
  cout << b << endl;
**/

  //Latihan Operator Logika

  /*
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
**/

/*
   int a = 9;
   int b = 9;
   int c = !(a!=b);

   cout << c << endl;
**/

  //Komparasi
/*
  int a = 8;
  int b = 7;

  cout << (a==b) << endl;
**/

  //Soal Latihan
/*
      int a; // a = null = 0 = ""
      int b = 0;
      int c = 0;

      cout << "silahkan inputkan nilai a : " << endl;
      cin >> a; // a = 9
      cout << "silahkan inputkan nilai b : " << endl;
      cin >> b; // b = 5
      cout << "silahkan inputkan nilai c : " << endl;
      cin >> c; // c = 3
      int hasila = a + b; // hasila = 14
      int hasilb = hasila * c; //hasilb = 14 * 3 --> 42
      cout << "hasil penjumlahan a + b x c adalah : ";
      cout << hasilb <<endl;
**/
      //Latihan Aritmatika 2

     /*
          int a = 8;
          int b = 12;
          int c = 0;
          a = c;
          b = a;
          int penjumlahan = a + b;
          cout << penjumlahan << endl;
   **/

      //Latihan operator aritmatika

            /*
          int a = 17;
          int b = 7;
          int penjumlahan = a + b;
          int pengurangan = a - b;
          int perkalian = a * b;
          int pembagian = a / b;
          int modulo = a % 3;

          cout << "a + b = "; cout << penjumlahan << endl;
          cout << "a - b = "; cout << pengurangan << endl;
          cout << "a x b = "; cout << perkalian<< endl;
          cout << "a : b = "; cout << pembagian<< endl;
          cout << "a % 3 ="; cout << modulo << endl;
        **/

      //Latihan String//
/*
      string namadepan;
      string namabelakang;

         cout << "Nama depan : " << endl;
         cin >> namadepan ;
         cout << "Nama belakang : " << endl;
         cin >> namabelakang;
         cout << namadepan +" "+ namabelakang;
**/

      //Solusi sederehana
      /*
      long long N;
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
    **/

  //Array
  //int nilai = [12, 13, 34, 56];
  //string nama = ["Asep", "Ade", "Dodi"];
  //double nilai1 = [30.0, 65.5, 70.0];
  /*int b [] = {19,20,31};
  cout << b[2];**/
    //string nama [] = {"Asep", "Ade", "Dodi", "Gunawan"};
   // cout << nama[2];

  //perulangan
/*
  int a = 1;
  cin >> a;
  for(a ; a<5; a++){
      cout << "Halllo "<< endl;
  }
**/


  /*
  int a = 0;

  for( a; a<10; a++){
      cout <<  a << endl;
  }

  **/

  /*
  while(a < 10){
      cout <<  a << endl;
      a++;
  }
  **/


  /*

  do{
      cout <<  a << endl;
      a++;
  }while(a < 10 );

  **/

  //Swicth
/*
 int a;
cin >> a;
 switch(a){
 case 0:
    cout << "Lampu mati" << endl;
    break;
 case 1:
     cout << "Lampu hidup" << endl;
     break;
 }
**/


 //latihan switch

 /*
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

 **/


 //if else
 /*
 int a; // 3

 cout << "Apakah malam ini hujan ? " <<endl;
 cin >> a;
 if(a==2){
     cout << "Iya, malam ini hujan kak.. :(" << endl;
 }else if(a<2){
     cout << "Tidak, malam ini tidak hujan kak... :)" << endl;
 }else{
     cout << "Tidak" << endl;
 }
**/





 /*int a = 3;
 int b = 3;

 if(a==0){
     cout << "Halo" << endl;
 }else if(b==0){
     cout << "Hore" << endl;
 }else{
     cout << "oke" << endl;
 }*/


 //soal no.26
/*
 int A, B, C;
 cin >> A >> B >> C;
 B = A - B; C = A - C; A = B + C;
 cout << (A+B)*C <<endl;
 return 0;
**/
 //Soal no. 27
/*
int A, B, C, D;
cin >> A >> B >> C >> D;
if (89 >= 78) {
    if (89 >= 100) {
        if (A >= D) {
            cout << D << endl;
        }
        else {
            cout << A << endl;
        }
    } else {
        if (100 >= 105) {
            cout << D << endl;
        }
        else {
            cout << C << endl; //Berakhir disini
        }
    }
}
else {
    if (B >= C) {
        if (B >= D) {
            cout << D << endl;
        }
        else {
            cout << B << endl;
        }
    }
    else {
        if (C >= D) {
            cout << D << endl;
        }
        else {
            cout << C << endl;
        }
    }
}
return 0;
**/

  //Soal No.28
/*
 int A[5]={1, 3, 5, 6, 18};
 int B[5]={2, 4, 7, 11, 16};
 int C[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
 int i=0, j=0, k=0;
 while (i<5 || j<5){
     if (A[i]<=B[j]){
         C[k]=A[i];
         i++;
     }else{
     C[k]=B[j];
     j++;
     }
      k++;
 }

 if (i>j){
     while (i<5){
         C[k]=A[i];
         i++; k++;
     }
 }else{
     while (j<5){
     C[k]=B[j];
     j++; k++;
     }
 }

 for (int i=0; i<10; i++) {
     cout<<C[i]<<” “; //error disini
 }

 return 0;
**/

 int A,B,C,D;
 cin >> A >> B;
 C=A;
 D=B;
 while (C!=D) {
     if (C<D) C+=A;
     if (C>D) D+=B;
 }
 while (A!=B) {
     if (A<B) B-=A;
     if (A>B) A-=B;
 }
 cout<<(C+D)/(A+B);


}
