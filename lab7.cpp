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
    cout << "Enter number (1-10): ";
    cin >> arabicNumber;
    
    if (arabicNumber == 1) resultRoman = "I";
    else if (arabicNumber == 2) resultRoman = "II";
    else if (arabicNumber == 3) resultRoman = "III";
    else if (arabicNumber == 4) resultRoman = "IV";
    else if (arabicNumber == 5) resultRoman = "V";
    else if (arabicNumber == 6) resultRoman = "VI";
    else if (arabicNumber == 7) resultRoman = "VII";
    else if (arabicNumber == 8) resultRoman = "VIII";
    else if (arabicNumber == 9) resultRoman = "IX";
    else if (arabicNumber == 10) resultRoman = "X";
    else resultRoman = "Invalid number";
    
    cout << arabicNumber << " = " << resultRoman << endl;
    
  } else if (choice == 2) {
    cout << "Enter Roman number (I-X): ";
    cin >> romanNumber;
    
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
    else resultArabic = -1;
    
    if (resultArabic == -1) {
      cout << "Invalid number" << endl;
    } else {
      cout << romanNumber << " = " << resultArabic << endl;
    }
    
  } else {
    cout << "Invalid choice" << endl;
  }
  
  return 0;
}