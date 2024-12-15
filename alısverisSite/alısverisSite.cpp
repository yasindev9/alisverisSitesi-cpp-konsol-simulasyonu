#include <iostream>
#include <math.h>
#include <iomanip>
#include <locale.h>
#include <vector>
#include <fstream>
using namespace std;
bool firstRun = true;
void ciz(char karakter, int sayi);
void firmaHakkinda();
void urunlerVeAlısveris();
void odemeVeFatura();
enum secenekler { x, a, b, c };
enum calisanListe{ z, d, e, f, g, h, i};
enum urunListe {q, j, k, l, m, n, o, p};
int menuSecim;
int calisanSecim;
int urunSecim;
string secilenUrun[6]{"hata", "VersaBook", "Tab9+", "Ziphone", "Lotus Fare", "Creme Klavye"};
int urunFiyatlar[6]{0, 48999, 8499, 33499, 799, 1499};
int secilenAdet[5000];
char sepetSecim;
int toplamTutar;
int taksit;

int main()
{
	setlocale(LC_ALL, "Turkish");
	enum secenekler secilen;
	if (firstRun == true)
	{
		ciz('*', 100);
		cout << "*" << setw(50) << "0CHATGPT.COM" << setw(49) << "*" << endl;
		cout << "*" << setw(50) << "HOŞGELDİNİZ!" << setw(49) << "*" << endl;
		ciz('*', 100);
	}
	cout << "Menü:" << endl;
	cout << "1. Firma hakkında" << endl << "2. Ürün inceleme ve Alışveriş" << endl << "3. Çıkış" << endl;
	cin >> menuSecim;
	secilen = static_cast<secenekler>(menuSecim);
	switch (secilen)
	{
	case a:
		firmaHakkinda();
		break;
	case b:
		urunlerVeAlısveris();
		break;
	case c:
		exit;
	    break;

	default:
	cout << "hata";
	break;
	}
	
}

void ciz(char karakter, int sayi) 
{
	for (int i = 0; i < sayi; i++)
	{
		cout << karakter;
	}

	cout << endl;
}

void firmaHakkinda()
{
	enum calisanListe bilgi;
	firstRun = false;
	ciz('-', 100);
	cout << "0CHATGPT.COM teknolojik ürünlerin satıldığı bir online alışveriş uygulamasıdır." << endl;
	cout << "Kadromuz:"<<endl;
	cout << "1.Yasin Durak - Proje Yöneticisi" << endl;
	cout << "2.Yaren Elif Demir - Proje Yöneticisi Yardımcısı"<<endl;
	cout << "3.Enes Yel - Pazarlama Uzmanı" << endl;
	cout << "4.Nazlı Aykaç - İnsan Kaynakları" << endl;
	cout << "5.Gülçe Aslan - Destek Ekibi" << endl;
	cout << "6.Kadir Yiğit Hızarcıoğlu - Destek Ekibi" << endl;
	ciz('-', 100);
	cout << "Seçiminizi yapınız. (0 ile menüye dönebilirsiniz.) : ";
	cin >> calisanSecim;
	bilgi = static_cast<calisanListe>(calisanSecim);
	switch (calisanSecim)
	{
	case z:
		main();
		break;
	case d:
		cout << "Calışan: Yasin Durak - Proje Yöneticisi" << endl;
		cout << "E-posta: ydinfo@gmail.com" << endl;
		cout << "Telefon: +90 5510213369" << endl;
		break;
	case e:
		cout << "Calışan: Yaren Elif Demir - Proje Yöneticisi Yardımcısı" << endl;
		cout << "E-posta: yedinfo@gmail.com" << endl;
		cout << "Telefon: +90 5551118899" << endl;
		break;
	case f:
		cout << "Calışan: Enes Yel - Pazarlama Uzmanı" << endl;
		cout << "E-posta: eyinfo@gmail.com" << endl;
		cout << "Telefon: +90 5556661122" << endl;
		break;
	case g:
		cout << "Calışan: Nazlı Aykaç - İnsan Kaynakları" << endl;
		cout << "E-posta: nainfo@gmail.com" << endl;
		cout << "Telefon: +90 5554442233" << endl;
		break;
	case h:
		cout << "Calışan: Gülçe Aslan - Destek Ekibi" << endl;
		cout << "E-posta: gainfo@gmail.com" << endl;
		cout << "Telefon: +90 5557773366" << endl;
		break;
	case i:
		cout << "Calışan: Kadir Yiğit Hızarcıoğlu - Destek Ekibi" << endl;
		cout << "E-posta: kyhinfo@gmail.com" << endl;
		cout << "Telefon: +90 5510213369" << endl;
		break;
	default:
		break;
	}
	firmaHakkinda();

}

void urunlerVeAlısveris()
{
	enum urunListe urunSec;
	firstRun = false;
	cout << "Ürün listemiz:" << endl;
	cout << "1. 0CHATGPT VersaBook   : 32GB RAM, RTX4060, İntel i7 13700H, 144Hz RGB özellikli ekran. :FİYAT:48.999TL" << endl;
	cout << "2. 0CHATGPT - Tab 9+      : 11'' ekran, 128GB depolama, 8GB RAM, Kalem hediyeli.           :FİYAT:8.499TL" << endl;
	cout << "3. 0CHATGPT - Ziphone     : Siyah renk, 256GB depolama, 8GB RAM, 50MP ön ve arka kamera.   :FİYAT:33.499TL" << endl;
	cout << "4. 0CHATGPT - Lotus Fare  : 18000 DPI, RGB özellikli, 9 tuşlu, sarmal kablolu fare.        :FİYAT:799TL" << endl;
	cout << "5. 0CHATGPT - Creme Klavye: Türkçe Q klavyeli, mekanik tuşlu ve RGB özellikli klavye.      :FİYAT:1499TL" << endl;
	cin >> urunSecim;
	urunSec = static_cast<urunListe>(urunSecim);
	switch (urunSec)
	{
	case q:
		break;
	case j:
		cout << secilenUrun[urunSecim] << " Ürününden kaç tane eklemek istersiniz? : ";
		cin >> secilenAdet[1];
		toplamTutar += secilenAdet[1] * urunFiyatlar[1];
		cout << "Toplam :" << toplamTutar << endl;
		cout << "Alışverişe devam etmek istiyor musunuz? (e/h) : ";
		cin >> sepetSecim;
		if (sepetSecim == 'e')
		{
			urunlerVeAlısveris();
		}
		else
		{
			odemeVeFatura();
		}
		break;
	case k:
		cout << secilenUrun[urunSecim] << " Ürününden kaç tane eklemek istersiniz? : ";
		cin >> secilenAdet[2];
		toplamTutar += secilenAdet[2] * urunFiyatlar[2];
		cout << "Toplam :" << toplamTutar << endl;
		cout << "Alışverişe devam etmek istiyor musunuz? (e/h) : ";
		cin >> sepetSecim;
		if (sepetSecim == 'e')
		{
			urunlerVeAlısveris();
		}
		else
		{
			odemeVeFatura();
		}
		break;
	case l:
		cout << secilenUrun[urunSecim] << " Ürününden kaç tane eklemek istersiniz? : ";
		cin >> secilenAdet[3];
		toplamTutar += secilenAdet[3] * urunFiyatlar[3];
		cout << "Toplam :" << toplamTutar << endl;
		cout << "Alışverişe devam etmek istiyor musunuz? (e/h) : ";
		cin >> sepetSecim;
		if (sepetSecim == 'e')
		{
			urunlerVeAlısveris();
		}
		else
		{
			odemeVeFatura();
		}
		break;
	case m:
		cout << secilenUrun[urunSecim] << " Ürününden kaç tane eklemek istersiniz? : ";
		cin >> secilenAdet[4];
		toplamTutar += secilenAdet[4] * urunFiyatlar[4];
		cout << "Toplam :" << toplamTutar << endl;
		cout << "Alışverişe devam etmek istiyor musunuz? (e/h) : ";
		cin >> sepetSecim;
		if (sepetSecim == 'e')
		{
			urunlerVeAlısveris();
		}
		else
		{
			odemeVeFatura();
		}
		break;
	case n:
		cout << secilenUrun[urunSecim] << " Ürününden kaç tane eklemek istersiniz? : ";
		cin >> secilenAdet[5];
		toplamTutar += secilenAdet[5] * urunFiyatlar[5];
		cout << "Toplam :" << toplamTutar << endl;
		cout << "Alışverişe devam etmek istiyor musunuz? (e/h) : ";
		cin >> sepetSecim;
		if (sepetSecim == 'e')
		{
			urunlerVeAlısveris();
		}
		else
		{
			odemeVeFatura();
		}
		break;
	case o:
		break;
	case p:
		break;
	default:
		break;
	}
	
}

void odemeVeFatura()
{
	cout<< "Toplam ödenecek tutar " << toplamTutar << endl;
	cout << "Takit Seçiniz (0-36) : ";
	cin >> taksit;
	cout << "Aylık ödemeleriniz :" << endl;
	for (int i = 1; i <= taksit; i++)
	{
		cout << i << ". taksit " << toplamTutar / taksit << endl;
	}
	ofstream dosya("Faturabilgileri.txt");
	if (dosya.is_open())
	{
		dosya << "=== Fatura Bilgileri ===" << endl;
	}
	else 
	{
	 cerr << "Dosya olusturulamadi!\n";
	}
	main();
	//exit;
}


