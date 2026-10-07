#include <iostream>
using namespace std;

int main()
{

int queue[5];
int front = 0;
int rear = 0;

cout << " enter 5 customer order no:\n";

for (int i = 0; i < 5; i++)
{

cin >> queue [rear];
rear++;


}

cout <<"\n processing orders:\n";


while (front < rear)
{

cout << " processing order: " << queue[front] << endl;
front++;

}

return 0;

}

