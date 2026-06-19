#include <iostream>
#include <fstream>
using namespace std;

class Playlist
{
public:
    string name;

    Playlist()
    {
        name = "My Favourites";
    }

    ~Playlist()
    {
        ofstream file("autosave.txt");

        file << name;

        file.close();

        cout << "Playlist saved to autosave.txt" << endl;
    }
};

int main()
{
    Playlist p;

    return 0;
}
