#include <iostream>
#include <vector>

using namespace std;

vector<int> add(vector<int>, vector<int>);

vector<int> truncate(vector<int> v)
{
    for (vector<int>::iterator i = v.end() - 1; i >= v.begin(); --i)
    {
        if (*(i) != 0) break;
        v.erase(i);
    }
    return v;
}

vector<int> multiply(vector<int> a, vector<int> b)
{
    vector<int> res;
    for (int i = 0; i < a.size(); ++i)
    {
        vector<int> addedNum;
        for (int k = 0; k < a[i]; ++k)
        {
            addedNum = add(addedNum, b);
        }
        for (int j = 0; j < i; ++j)
        {
            addedNum.insert(addedNum.begin(), 0);
        }
        res = add(res, addedNum);
    }

    return res;
}

bool isZero(vector<int> v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] != 0)
        {
            return false;
        }
    }
    return true;
}

vector<int> decrement(vector<int> v)
{
    if (isZero(v)) return v;
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] != 0)
        {
            v[i]--;
            return v;
        }
        v[i] = 9;
        continue;
    }
}

vector<int> add(vector<int> a, vector<int> b)
{
    vector<int> result;

    while(b.size() < a.size()) {
        b.push_back(0);
    }

    while(a.size() < b.size()) {
        a.push_back(0);
    }

    int carry = 0;
    for (int i = 0; i < a.size(); ++i)
    {
        if (a[i] + b[i] + carry > 9)
        {
            result.push_back((a[i] + b[i] + carry) % 10);
            carry = 1;
        } else {
            result.push_back(a[i] + b[i] + carry);
            carry = 0;
        }
    }

    if (carry)
    {
        result.push_back(1);
    }

    return result;
}


int main()
{
    string a, b;
    while (cin >> a >> b) {
        if (a.size() == 0) break;

        vector<int> x;
        vector<int> y;
        vector<int> res;
        
        for (int i = a.size() - 1; i >= 0; --i)
        {
            x.push_back(a[i] - '0');
        }

        for (int i = b.size() - 1; i >= 0; --i)
        {
            y.push_back(b[i] - '0');
        }

        res = truncate(multiply(x, y));

        if (isZero(res))
        {
            cout << 0;
        }

        for (int i = res.size() - 1; i >= 0 ; --i)
        {
            cout << res[i];
        }
        cout << endl;
    }

    return 0;
}