#include <iostream>
using namespace std;

class Complex
{
public:
   int real, imag;

   Complex(int r_part, int i_part)
   {
      real = r_part;
      imag = i_part;
   }

   Complex operator*(Complex C2)
   {
      int t_real = real * C2.real;
      int t_imag = imag * C2.imag;

      int t_r_i_1 = real * C2.imag;
      int t_r_i_2 = imag * C2.real;

      int ttt_r = t_real - t_imag;
      int ttt_i = t_r_i_1 + t_r_i_2;

      Complex tt = Complex(ttt_r, ttt_i);
      return tt;
   }

   void display()
   {
      cout << real << "+" << imag << "i" << endl;
   }
};

int main()
{
   Complex c1(2, 3);
   Complex c2(4, 6);
   Complex c3 = c1 * c2;

   cout << "C1=";
   c1.display();
   cout << "C2=";
   c2.display();
   cout << "C3=";
   c3.display();

   return 0;
}