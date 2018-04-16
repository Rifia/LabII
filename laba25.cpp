# include <iostream>
 
using namespace std;
 
class expr
{
public:
    expr *next;
    double  numb;
};
 
void push(expr *&next, double f)
{
    expr *dv = new expr;
    dv->numb = f;
    dv->next = next;
    next = dv;
}
 
void pop(expr *&next, double &z)
{
    double k = next->numb;
    expr *dv = next;
    next = next->next;
    z = k;
    delete dv;
}
 
int main()
{
    expr *v = NULL;
    char str[50];
    double x, y;
    cout << "Enter the math expression: ";
    cin >> str;
    int i = 0;
    while (str[i] != NULL)
    {
        int a = str[i] - 48;
        if (a >= 0 && a <= 9)
        {
            push(v, a);
        }
        if (str[i] == '*')
        {
            pop(v, x);
            pop(v, y);
            x = x*y;
            push(v, x);
        }
 
        if (str[i] == '/')
        {
            pop(v, x);
            pop(v, y);
            x = y / x;
            push(v, x);
        }
 
        if (str[i] == '-')
        {
            pop(v, x);
            pop(v, y);
            x = y - x;
            push(v, x);
        }
 
        if (str[i] == '+')
        {
            pop(v, x);
            pop(v, y);
            x = x + y;
            push(v, x);
        }
 
        i++;
    }
    cout << endl << "Answer: " << x << endl;
    system("pause");
    return 0;
}
