#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Movie {
private:
    string screenWriter;
    int yearReleased{};
    string title;

public:

    void setTitle(const string& t)        { title = t; }            // Setters like lab 14
    void setYear(int y)                   { yearReleased = y; }
    void setScreenWriter(const string& w) { screenWriter = w; }

    const string& getTitle() const        { return title; }         // getters readable private objects
    int getYear() const                   { return yearReleased; }
    const string& getScreenWriter() const { return screenWriter; }

    void print() const {
        cout << "Movie: " << screenWriter << '\n'
             << "  Year released: " << yearReleased << '\n'         // the print function
             << "  Screenwriter: " << title << "\n\n";
    }
};

int main() {
    ifstream in("input.txt");                                       // Open the file
    if (!in) {
        cerr << "Could not open input.txt\n";                       // safety net for if file not open       
        return 1;
    }

    vector<Movie> movies;
    movies.reserve(4);

    string title, yearStr, writer;
    while (getline(in, title) && getline(in, yearStr) && getline(in, writer)) {
        Movie tmp;                          // temporary Movie object
        tmp.setTitle(title);
        tmp.setYear(stoi(yearStr));         // convert year string to int (the stoi syntax)
        tmp.setScreenWriter(writer);
        movies.push_back(tmp);              // append to container

        if (movies.size() == 4) break;      // store four records exactlllyyy
    }
}