﻿// OOP 2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

class Payment {

public: 
    float tutar;
    std::string paraBirimi;
    std::string tutar1;

    Payment(bool f, std::string a) {
        tutar = 1.2;
        paraBirimi = "$";
        std::cout << a;
    }
    Payment(bool f) {
        tutar = 1.2;
        paraBirimi = "$";
    }
    Payment() {

    }

    ~Payment() {
        std::cout << "bitti\n";
    }
    void pay() {
        std::cout << "Odeme alindi";
    }
};

int main()
{

    Payment pay(true); // bunun içindeki parametrelere göre kullanılan Payment değişir....
    pay.pay();
    return 0;
}
// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
