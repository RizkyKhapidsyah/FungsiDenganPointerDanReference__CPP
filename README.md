# FungsiDenganPointerDanReference__CPP
Bahan Ajar Fundamental Pemrograman C++. Membuat Fungsi Dengan Menggunakan Pointer Dan Reference di Pemrograman C++<br><br>
<img src="https://github.com/RizkyKhapidsyah/FungsiDenganPointerDanReference__CPP/blob/master/Results/001.PNG"><br>
<img src="https://github.com/RizkyKhapidsyah/FungsiDenganPointerDanReference__CPP/blob/master/Results/002.PNG"><br>
<img src="https://github.com/RizkyKhapidsyah/FungsiDenganPointerDanReference__CPP/blob/master/Results/003.PNG"><br><br>
# Lihat <a href="https://github.com/RizkyKhapidsyah/FungsiDenganPointerDanReference__CPP/blob/master/Source.cpp">Source Code.</a><br><br>

# Alamat Dari Variabel
Misalkan kamu memiliki variabel x dan terletak di memori 0x000001. Jika kamu ingin memasukkan nilai 100 kedalam variabel x, maka processor harus membawa nilai 100 tersebut kedalam variabel x yang terletak di alamat memori 0x000001. Hal yang perlu kamu ketahui adalah, setiap variabel ternyata memiliki ukuran byte yang berbeda-beda dalam memori. Sebagai contoh suatu variabel bertipe int memiliki ukuran 4 byte dalam memori. Maka variabel tersebut akan menempati 4 kapling lokasi dalam memori, misalkan 0x000001, 0x000002, 0x000003, dan 0x000004. Jika terdapat dua buah variabel bertipe int yang bersebelahan, maka alamat variabel pertama terletak di 0x000001 dan variabel kedua terletak dialamat 0x000005.

Memori menggunakan bilangan heksadesimal yang ditandai dengan awalan ‘0x’, sehingga jika suatu variabel menempati blok kesepuluh dalam memori, maka alamatnya adalah 0x00000a


# Deference (&)

Deference (&) merupakan suatu operator yang berfungsi untuk menanyakan alamat dari suatu variabel. Apabila kamu memberikan simbol & pada awal variabel dan mencetak hasilnya pada jendela CLI, maka yang akan tercetak adalah alamat dari variabel tersebut bukan nilai yang ditampung oleh variabel tersebut. Berikut contoh programnya:

      #include <iostream>
      using namespace std;

      int main(){
      int a = 5;
        
        cout<<"Alamat Variabel a adalah :"<<&a<<endl;
        cout<<"Nilai Variabel a adalah :"<<a<<endl;
        
        return 0;
      }


Alamat variabel ‘a’ pada setiap komputer akan berbeda-beda tergantung kompiler dalam mengalokasikan memori untuk suatu variabel.

# Reference (*)

Reference (*) merupakan suatu operator yang berfungsi menyatakan suatu variabel adalah variabel pointer. Sama halnya dengan operator deference, peletakan simbol operator reference diletakan diawal variabel. Operator reference ini akan membuat suatu variabel pointer untuk menampung alamat. Nah untuk lebih mudahnya perhatikan contoh berikut:

      #include <iostream>
      using namespace std;

      int main()
      {
        int a=5; //Memberikan nilai 5 pada variabel a
        int *b; //Mendeklarasikan variabel b sebagai pointer
        b = &a; //Mengkopikan alamat variabel a kedalam variabel pointer b

          cout<<"Nilai variabel a adalah "<<a<<endl;
          cout<<"Alamat variabel a adalah "<<&a<<endl;
          cout<<"Isi dari variabel b adalah "<<b<<endl;
          cout<<"Nilai yang tertampung dalam variabel b adalah "<<*b<<endl;

        return 0;
      }

Dari hasil output program di atas dapat dipahami bahwa, nilai variabel b sama dengan variabel a, walaupun variabel b tidak diberikan nilai yang sama dengan variabel a. Hal ini terjadi karena variabel pointer b menunjuk alamat variabel a dan variabel pointer b dapat mengakses nilai yang terkandung dalam alamat yang ditunjuknya.

# Pointer Sebagai Parameter Suatu Fungsi

Seperti halnya dengan array, pointer dapat digunakan sebagai parameter suatu fungsi. Karena sifat pointer yang hanya sebagai penunjuk, maka setiap perubahan yang terjadi pada parameter, sebenarnya terjadi pada variabel yang ditunjuk bukan pada variabel pointer. Berikut contoh program sederhananya:

      #include <iostream>
      using namespace std;

      void tambah(int *angka)
      {
        *angka +=20;
      }

      int main()
      {
        int nilai = 10;
        
        cout<<"Nilai variabel nilai adalah = "<<nilai<<endl;
        
        tambah(&nilai); //Memasukkan alamat variabel nilai pada fungsi tambah
        
        cout<<"Nilai variabel nilai adalah = "<<nilai<<endl;
        
        return 0;
      }

Pada program diatas, membuat fungsi tambah, dimana ketika alama suatu variabel diberikan sebagai parameter fungsi, nilai 20 akan ditambahkan pada alamat tersebut. Perbedaan parameter berupa pointer dan non-pointer adalah, pada variabel non-pointer, ketika kamu ingin memasukkan nilai pada sebuah variabel kedalam parameter, kamu harus memasukkan nilai dari variabel tersebut. Untuk parameter berupa pointer, kamu cukup memasukkan alamat variabel yang menampung nilai dengan operator (&) kedalam parameter fungsi Yang menarik adalah pada fungsi tambah di atas, walaupun fungsi tersebut merupakan fungsi void tanpa nilai kembalian alias return, namun nilai variabel parameter berubah.

# Cara Mendirikan dan Menggunakan Pointer pada Object

Object memiliki persamaan seperti deklarasi variabel biasa. Saat kita membuat object disaat itu juga kita sedang memesan memori kepada komputer sebesar total memori pada class yang digunakan. Object juga dimungkinkan untuk menggunakan pointer saat mendirikanya. Object dengan pointer memiliki dua macam yaitu reference dan dereference, dibawah ini adalah bentuk penulisan dan penjelasan dari object pointer reference dan dereference.

#Pointer Reference Pada Object

Bentuk umum penulisan :

      nama_class &nama_object = alias_object;

Contoh penulisan :
      
      siswa &refBudi = budi;

Di atas adalah bentuk umum penulisan dan contoh penulisan dari penggunaan pointer reference pada object. pointer reference berfungsi untuk membuat alias atau identitas lain untuk object yang di tunjuk. Dengan arti lain adalah satu alamat memori direpresentasikan menjadi 2 object. Untuk mengakses member dari object dengan pointer reference kita membutuhkan Member Access Operator . , dengan menaruh tanda . di antara nama object dan nama member. Tidak memiliki perbedaan seperti kita melakukanya pada object biasa.

# Pointer Dereference

Bentuk umum penulisan :

      nama_class *nama_object = &object_lain;
      
Contoh penulisan :

      siswa *pBudi = &budi;

pointer dereference digunakan untuk mengubah fungsi dari object yang dapat memiliki kemampuan untuk menunjuk ke alamat object lain. Yang memberikan kemungkinan kepada kita untuk mengakses data dari object yang di tunjuk. Pada contoh penulisan pBudi menunjuk ke pointer object budi memiliki arti bahwa object pointer dapat mengakses memori yang dimiliki oleh object budi. Bukan hanya berfungsi untuk menunjuk ke memori yang dimiliki object lain, tapi kita juga dapat memesan atau alokasi memori pada memori heap sebesar total memori class yang digunakan dengan menggunakan keyword new.

# Cara Mengakses Member Melalui Pointer

Jika menggunakan pointer, untuk mengakses member pada object kita membutuhkan tanda Arrow Operator -> di antara nama object dan nama member.

Bentuk umum penulisan :

      nama_object -> nama_member;

Contoh penulisan :

      pbudi -> noinduk = 123;

Contoh program :

      #include <iostream>
      using namespace std;

      class siswa{
          public:
          int noInduk;
          void showInduk(){
              cout<<"No Induk = "<<noInduk<<endl;
          }
      };

      int main (){
          siswa budi{1}; // Object Budi
          budi.showInduk(); //Member Access Operator

          siswa &refBudi = budi; //Pointer Reference refBudi
          refBudi.noInduk = 2; //Member Access Operator
          budi.showInduk();

          siswa *pBudi = &budi; //pointer Dereference pBudi
          pBudi->noInduk = 3;//Arrow Operator
          budi.showInduk();
          return 0;
      }

Contoh program 2 :

      #include <iostream>
      using namespace std;

      class siswa{
          public:
          int noInduk;
          void showInduk(){
              cout<<"No Induk = "<<noInduk<<endl;
          }
      };

      int main (){
          siswa *budi = new siswa{1};
          budi->noInduk = 2;
          budi->showInduk();
          delete budi;
          return 0;
      }
      
Pada contoh program ke 1, dicontoh cara penggunaan dari object pointer yang menunjuk ke object lainnya dengan class yang sama, dan contoh program kedua dicontohkan dari penggunaan alokasi pointer pada object.


Referensi Artikel: <br>
- <a href="https://www.sinauarduino.com">SinauArduino.</a><br>
- <a href="https://www.belajarcpp.com">BelajarCPP</a><br><br>
Referensi Source Code: <br>
<a href="https://www.youtube.com/user/faqihzamukhlish"> Kelas Terbuka </a> dan <a href="https://github.com/kelasterbuka"> Kelas Terbuka (Repository)</a>. Created by <a href="https://github.com/faqihza">Faqihza Mukhlish.</a> Thanks To: <a href="https://www.youtube.com/channel/UCRGHjysoCemh4y7tCJQs30w/about">Faqihza Mukhlish.</a><br>

-----
All Source Code is Modified.

