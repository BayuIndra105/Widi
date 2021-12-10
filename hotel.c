#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <conio.h> //! I'm using Linux, so I can't use this header:)

int menu, osCode, home(), awal(), login(), loginAll(), daftarKamar(), daftraKamarTamu(), pemesananKamar(), keluar(), tentang(), halamanTamu(), checkOs();
void tentangProgram();

//variabel admin
char id_admin[20];
char pass_admin[20];
char nama_admin[20];
char kode_admin[20];


int main (){
	awal();
	puts("Silahkan klik tombol apapun untuk melanjutkan...");
  getchar();
	return 0;
}

//AWAL
int awal(){
	printf("================================================\n");
	printf(" Selamat Datang \n");
	printf(" Entity's Hotel \n");
	printf("================================================\n\n");
	printf("1. Masuk\n");
	printf("2. Tentang\n");
	printf("3. Keluar\n");
	printf("Masukkan nomor menu yang anda inginkan : ");
	scanf("%d", &menu);

	(osCode == 1) ? system("cls") : system("clear");	//pengkondisian untuk OS tertentu

	switch (menu){
		case 1:	loginAll(); // jika user memasukkan 1, makan menjalankan fungsi loginAll()
		break;
		case 2:	tentangProgram(); // jika user memasukkan 2, makan menjalankan fungsi tentangTamu()
		break;
		case 3:	keluar(); // jika user memasukkan 3, makan menjalankan fungsi keluar()
		break; 
		default:	printf("Nomor menu yang anda masukkan tidak ada\n");
	}
	return 0;
}

//loginAll
int loginAll(){
	printf("================================================\n");
	printf(" Selamat Datang \n");
	printf(" Entity's Hotel \n");
	printf("================================================\n\n");
	printf("Login sebagai : \n");
	printf("1. Admin\n");
	printf("2. Tamu\n");
	printf("3. Halaman Depan\n");
	printf("Masukkan menu pilihan anda : ");
	scanf("%d", &menu);
	(osCode == 1) ? system("cls") : system("clear");

	switch (menu){
		case 1: login();
		break;
		default: printf("Nomor menu yang anda masukkan tidak ada\n");
	}
	return 0;
}

//login
int login(){
	printf("================================================\n");
	printf(" Selamat Datang \n");
	printf(" Entity's Hotel \n");
	printf("================================================\n\n");

	printf("Masukkan Username : ");
	scanf("%s", &id_admin);
	printf("Masukkan Password : ");
	scanf("%s", &pass_admin);

	if (strcmp(id_admin,"admin1")==0 && strcmp(pass_admin,"admin")==0){
 		strcpy(nama_admin,"widi");
 		strcpy(kode_admin,"1");
 		printf("login berhasil\n");
	}
	else if (strcmp(id_admin,"admin2")==0 && strcmp(pass_admin,"admin")==0){
 		strcpy(nama_admin,"bayu");
 		strcpy(kode_admin,"2");
 		printf("login berhasil\n");
	} else { printf("salah\n"); }
	return 0;
}

//tentang program
void tentangProgram(){
	printf("================================================\n");
	printf(" Tentang \n");
	printf("================================================\n\n");
	printf(" Aplikasi Reservasi Kamar Hotel \n\n");
	printf(" Dibuat Oleh : \n");
	printf(" Widi dan Bayu\n");
	printf(" 2105551015 dan 2105551018 \n");
	printf(" TI Udayana\n");

}
//kode program untuk keluar
int keluar(){
	printf("================================================\n");
	printf(" Terima Kasih \n");
	printf(" Sampai Jumpa \n");
	printf("================================================\n");
	return 0;

}

int checkOs() {
	#ifdef _WIN32			//Cek jika OS user adalah Windows
			osCode = 1;
	#elif __linux__		//Cek jika OS user adalah Windows
			osCode = 2;
	#elif __unix__	//Cek jika OS user adalah UNIX
			osCode = 2;
	#else
	    printf("Unidentified OS, we assume you were using Windows\n");
			osCode = 1
	#endif
	return osCode;
}
