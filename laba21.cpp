#include  <bits/stdc++.h>
using namespace std;

struct xy{
      int x;
      int y;
      };
    
     struct trngl{
      xy a;
      xy b;
      xy c;
      };
      
double square (trngl Tri[], int i){ 
    double SQ;
    SQ = abs((Tri[i].a.x - Tri[i].c.x)*(Tri[i].b.y - Tri[i].c.y) - (Tri[i].b.x - Tri[i].c.x)*(Tri[i].a.y - Tri[i].c.y))/2.0;  
    return SQ; 
} 
      
double compare (trngl Tri[], int m, int n){ 
    double S;
    if (((Tri[m].a.x == Tri[n].a.x) && (Tri[m].a.y == Tri[n].a.y) && (Tri[m].b.x == Tri[n].b.x) && (Tri[m].b.y == Tri[n].b.y)) ||
        ((Tri[m].c.x == Tri[n].c.x) && (Tri[m].c.y == Tri[n].c.y) && (Tri[m].b.x == Tri[n].b.x) && (Tri[m].b.y == Tri[n].b.y)) || 
        ((Tri[m].a.x == Tri[n].a.x) && (Tri[m].a.y == Tri[n].a.y) && (Tri[m].c.x == Tri[n].c.x) && (Tri[m].c.y == Tri[n].c.y)))  S = square(Tri, m) + square(Tri, n);
        else S = -1;
        
    return S;
}

int main()
{   
   trngl Tri[3] = {{{2, 1}, {4, 6}, {7, 3}}, {{2, 1}, {4, 6}, {8, 3}}, {{2, 1}, {5, 2}, {4, 8}}}; 
   
   for (int i = 0; i < 3; i++)
    for (int j = i+1; j < 3; j++) cout << compare(Tri, i, j) << endl;
        
    return 0;
}
    
