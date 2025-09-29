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
    const string& getScreenWriter() const