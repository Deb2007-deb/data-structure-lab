#include <iostream>
using namespace std;

int main()
{

int stack[5];
int top = -1;

cout << " enter 5 cancelled order no:\n";

for (int  i = 0; i < 5 ; i++)
{

cin >> stack[++top];

}

cout <<"\n recently canclled orders:\n";

while (top >= 0)
{
 cout<< stack [top] << endl;
top--;
}

return 0;
}
