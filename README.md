# C++ T.C. Kimlik Numarası Kontrolü
C++ Kimlik numarası kontrol kütüphanesi. 11 haneli T.C. Kimlik numarasının doğruluğunun kontrolünü yapar. Geriye true-false değer döndürür.

## Metodlar
    extern "C" KIMLIKNOKONTROL bool KimlikNo(long long _tcno);

## Örnek Uygulama
    #include <iostream>
    #include "KimlikNoKontrol.h"

    using namespace std;

    int main()
    {
        long long TcNo;
        cout << "TC No Giriniz:";
        cin >> TcNo;
        if (KimlikNo(TcNo))
        {
            cout << "Dogru" << endl;
        }
        else
        {
            cout << "Hatali" << endl;
        }
        return 0;
    }

## Lisans
Copyright (c) 2022 Koray Üstündağ

[MIT License](https://github.com/korayustundag/kimlikkontrolcpp/blob/main/LICENSE)
