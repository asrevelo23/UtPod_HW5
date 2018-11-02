//DOCUMENT HERE

#ifndef SONG_H
#define SONG_H

#include <string>
#include <cstdlib>
#include <iostream>


using namespace std;  //compiler will see string and know I am referring to std::String

class Song {

private:
    string artist;
    string title;
    int size;

public:
    Song();
    Song(string _artist, string _tittle, int _size);

    //set and get all instance variables
    void setTitle(string n);
    string getTitle()const;

    void setArtist(string a);
    string getArtist()const;

    void setSize(int s);
    int getSize()const;

    //overload ==,<, and > operators (using in sorting)
    bool operator >(Song const &rhs);
    bool operator <(Song const &rhs);
    bool operator ==(Song const &rhs);
};

#endif