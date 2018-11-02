#include <iostream>
#include "Song.h"


using namespace std;
Song::Song() {
    artist="";
    title="";
    size=512;
}

Song::Song(string _artist, string _title, int _size){
    artist=_artist;
    title=_title;
    size=_size;
}

//set and get all instance variables
void Song::setTitle(string n)
{
    title = n;
}
string Song::getTitle() const
{
    return title;
}

void Song::setArtist(string a)
{
    artist = a;
}
string Song::getArtist() const
{
    return artist;
}

void Song::setSize(int s)
{
    size = s;
}
int Song::getSize() const
{
    return size;
}

//overload ==,<, and > operators (using in sorting)
bool Song::operator ==(Song const &rhs)     //PORQUE PONEMOS CONST!!!!
{
    return(artist == rhs.artist &&
           title == rhs.title &&
           size == rhs.size);
}

bool Song::operator >(Song const &rhs)
{
    if(artist != rhs.artist){
        if(artist > rhs.artist){
            return true;
        }
    }
    else if(title != rhs.title){
        if(title > rhs.title){
            return true;
        }
    }
    else if(size != rhs.size){
        if(size > rhs.size){
            return true;
        }
    }
    else{return false;}
}

bool Song::operator <(Song const &rhs)
{
    if(artist != rhs.artist){
        if(artist < rhs.artist){
            return true;
        }
    }
    else if(title != rhs.title){
        if(title < rhs.title){
            return true;
        }
    }
    else if(size != rhs.size){
        if(size < rhs.size){
            return true;
        }
    }
    else{return false;}
}