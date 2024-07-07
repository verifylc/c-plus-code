#include <iostream>
using namespace std;
struct CandyBar{
  char *band;
  double weight;
  int   heat;
};
void fill_CandyBar(CandyBar & Candy, char *band = (char*)"Millennium Munch", double weight=2.85, int heat=350);
void display(const CandyBar & Candy);
int main()
{
  CandyBar Cand,Cand1;
  fill_CandyBar(Cand);
  cout << "Cand:\n";
  display(Cand);
  fill_CandyBar(Cand1, (char*)"curry", 8.78, 500);
  cout << "Cand1 :\n";
  display(Cand1);
  return 0;
}
void fill_CandyBar(CandyBar & Candy, char *band, double weight, int heat)
{
  Candy.band = band;
  Candy.weight = weight;
  Candy.heat = heat;
}
void display(const CandyBar & Candy)
{
  cout << "Band: " << Candy.band << " Weight: " << Candy.weight << " Heat: " << Candy.heat << endl;
}