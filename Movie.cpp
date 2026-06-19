#include <iostream>
using namespace std;

class Movie
{
public:
    string name;

    Movie(string n)
    {
        name = n;
    }

    Movie(const Movie &m)
    {
        name = m.name;
    }

    void display()
    {
        cout << "Movie Name: " << name << endl;
    }
};

int main()
{
    Movie m1("Avengers");

    Movie m2 = m1;

    cout << "Original Movie:" << endl;
    m1.display();

    cout << "Copied Movie:" << endl;
    m2.display();

    return 0;
}
