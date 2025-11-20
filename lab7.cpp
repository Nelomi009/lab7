/**************************
* Автор: Черненко Никита. *
* Дата: 20.11.2025        *
* Вариант --              *
***************************/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice;
    int arabicNumber;
    string romanNumber;
    string resultRoman;
    int resultArabic;

    cout << "1 - Arabic to Roman" << endl;
    cout << "2 - Roman to Arabic" << endl;
    cout << "Choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter number (1-100): ";
        cin >> arabicNumber;

        if (arabicNumber < 1 || arabicNumber > 100) {
            resultRoman = "Invalid number";
        }
        else if (arabicNumber == 100) resultRoman = "C";
        else if (arabicNumber == 90) resultRoman = "XC";
        else if (arabicNumber == 80) resultRoman = "LXXX";
        else if (arabicNumber == 70) resultRoman = "LXX";
        else if (arabicNumber == 60) resultRoman = "LX";
        else if (arabicNumber == 50) resultRoman = "L";
        else if (arabicNumber == 40) resultRoman = "XL";
        else if (arabicNumber == 30) resultRoman = "XXX";
        else if (arabicNumber == 20) resultRoman = "XX";
        else if (arabicNumber == 10) resultRoman = "X";
        else if (arabicNumber == 9) resultRoman = "IX";
        else if (arabicNumber == 8) resultRoman = "VIII";
        else if (arabicNumber == 7) resultRoman = "VII";
        else if (arabicNumber == 6) resultRoman = "VI";
        else if (arabicNumber == 5) resultRoman = "V";
        else if (arabicNumber == 4) resultRoman = "IV";
        else if (arabicNumber == 3) resultRoman = "III";
        else if (arabicNumber == 2) resultRoman = "II";
        else if (arabicNumber == 1) resultRoman = "I";
        else {
            // Для остальных чисел (11-99, кроме круглых)
            int tens = arabicNumber / 10;
            int units = arabicNumber % 10;
            
            // Десятки
            if (tens == 9) resultRoman = "XC";
            else if (tens == 8) resultRoman = "LXXX";
            else if (tens == 7) resultRoman = "LXX";
            else if (tens == 6) resultRoman = "LX";
            else if (tens == 5) resultRoman = "L";
            else if (tens == 4) resultRoman = "XL";
            else if (tens == 3) resultRoman = "XXX";
            else if (tens == 2) resultRoman = "XX";
            else if (tens == 1) resultRoman = "X";
            
            // Единицы
            if (units == 9) resultRoman += "IX";
            else if (units == 8) resultRoman += "VIII";
            else if (units == 7) resultRoman += "VII";
            else if (units == 6) resultRoman += "VI";
            else if (units == 5) resultRoman += "V";
            else if (units == 4) resultRoman += "IV";
            else if (units == 3) resultRoman += "III";
            else if (units == 2) resultRoman += "II";
            else if (units == 1) resultRoman += "I";
        }

        cout << arabicNumber << " = " << resultRoman << endl;

    } else if (choice == 2) {
        cout << "Enter Roman number (I-C): ";
        cin >> romanNumber;

        // Простые случаи
        if (romanNumber == "I") resultArabic = 1;
        else if (romanNumber == "II") resultArabic = 2;
        else if (romanNumber == "III") resultArabic = 3;
        else if (romanNumber == "IV") resultArabic = 4;
        else if (romanNumber == "V") resultArabic = 5;
        else if (romanNumber == "VI") resultArabic = 6;
        else if (romanNumber == "VII") resultArabic = 7;
        else if (romanNumber == "VIII") resultArabic = 8;
        else if (romanNumber == "IX") resultArabic = 9;
        else if (romanNumber == "X") resultArabic = 10;
        else if (romanNumber == "XX") resultArabic = 20;
        else if (romanNumber == "XXX") resultArabic = 30;
        else if (romanNumber == "XL") resultArabic = 40;
        else if (romanNumber == "L") resultArabic = 50;
        else if (romanNumber == "LX") resultArabic = 60;
        else if (romanNumber == "LXX") resultArabic = 70;
        else if (romanNumber == "LXXX") resultArabic = 80;
        else if (romanNumber == "XC") resultArabic = 90;
        else if (romanNumber == "C") resultArabic = 100;
        else {
            // Для составных чисел
            resultArabic = 0;
            
            if (romanNumber.find("XC") == 0) {
                resultArabic += 90;
                romanNumber = romanNumber.substr(2);
            }
            else if (romanNumber.find("L") == 0) {
                resultArabic += 50;
                romanNumber = romanNumber.substr(1);
            }
            else if (romanNumber.find("XL") == 0) {
                resultArabic += 40;
                romanNumber = romanNumber.substr(2);
            }
            else if (romanNumber.find("X") == 0) {
                resultArabic += 10;
                romanNumber = romanNumber.substr(1);
                if (romanNumber.find("X") == 0) {
                    resultArabic += 10;
                    romanNumber = romanNumber.substr(1);
                }
                if (romanNumber.find("X") == 0) {
                    resultArabic += 10;
                    romanNumber = romanNumber.substr(1);
                }
            }
            
            // Единицы
            if (romanNumber == "IX") resultArabic += 9;
            else if (romanNumber == "VIII") resultArabic += 8;
            else if (romanNumber == "VII") resultArabic += 7;
            else if (romanNumber == "VI") resultArabic += 6;
            else if (romanNumber == "V") resultArabic += 5;
            else if (romanNumber == "IV") resultArabic += 4;
            else if (romanNumber == "III") resultArabic += 3;
            else if (romanNumber == "II") resultArabic += 2;
            else if (romanNumber == "I") resultArabic += 1;
            else if (romanNumber != "") resultArabic = -1;
        }

        if (resultArabic == -1 || resultArabic > 100 || resultArabic < 1) {
            cout << "Invalid Roman number" << endl;
        } else {
            cout << romanNumber << " = " << resultArabic << endl;
        }

    } else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
