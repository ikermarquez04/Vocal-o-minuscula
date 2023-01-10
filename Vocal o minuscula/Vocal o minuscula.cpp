#include <iostream>

using namespace std;

int main()
{
	char letra;

   cout<<"digite una letra: ";
   cin >> letra;

   switch (letra) 
   {
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u': cout << "es una vocal minuscula";break;
   default: cout << "no es una vocal minuscula";break;


   }
   return 0;
}
