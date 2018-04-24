#include <iostream>

using namespace std;

int toX, toY, fromX, fromY, r, c;
char m[500][500];
bool res = false;

void move(int currX, int currY)
{
    if(currX == toX && currY == toY && m[toX][toY] == 'X') {
        res = true;
        return;
    }

    if(!res) {
        if(m[currX][currY] == 'X') return;

        if(!(currX < r && currX >= 0 && currY < c && currY >= 0)) return;

        if(m[currX][currY] == '.') {
            m[currX][currY] = 'X';
            move(currX + 1, currY);
            move(currX , currY + 1);
            move(currX - 1, currY);
            move(currX, currY - 1);
        }
    }
}

int main(int argc, char const *argv[])
{
    cin >> r >> c;

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cin >> m[i][j];
        }
    }

    cin >> fromX >> fromY >> toX >> toY;
    fromX--;
    fromY--;
    toX--;
    toY--;

    move(fromX + 1, fromY);
    move(fromX - 1, fromY);
    move(fromX, fromY + 1);
    move(fromX, fromY - 1);

    if(res) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}