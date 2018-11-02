/* utPod_driver.cpp
Demo Driver for the UtPod.

Andrea Revelo and Nancy Licona
EE 312 11/1/18
*/
#include <cstdlib>
#include <iostream>
#include "UtPod.h"

using namespace std;


int main(int argc, char *argv[])
{
    UtPod t;
    int result;

    // List of songs to test [21] //
    Song s1("JLO", "On the Floor", 4);
    Song s2("DJ Snake", "Taki Taki", 5);
    Song s3("Reik", "Amigos Con Derechos", 6);
    Song s4("Beret", "Ojala", 7);
    Song s5("Lady Gaga", "Shallow", 24);
    Song s6("Travis Scott", "Sicko Mode", 41);
    Song s7("Mashmello", "Happier", 320);
    Song s8("Khalid", "Love Lies", 9);
    Song s9("Halsey", "Without Me", 80);
    Song s10("Bad Bunny", "MIA", 141);
    Song s11("Bad Bunny", "MIA extended edition", 40);
    Song s12("Sheck Wes", "Mo Bamba", 98);
    Song s13("Cardi B", "I Like It", 200);
    Song s14("Panic! At The Disco", "High Hopes", 27);
    Song s15("Drake", "Nonstop", 90);
    Song s16("Drake", "In My Feelings", 76);
    Song s17("Selena Gomez", "Back To You", 300);
    Song s18("Britney Spears", "Toxic", 30);
    Song s19("Britney Spears", "Toxic (extended edition)", 42);
    Song s20("Britney Spears", "Toxic (Christmas Edition)", 45);
    Song s21("Britney Spears ft. Travis Scott", "Toxic (The Comeback)", 200);
    Song s22("", "", 200);
    Song s23("", "Hola", 202);
    Song s24("Lady Gaga", "Poker Face", 0);
    Song s25("Lady Gaga", "Poker Face", -2);
    Song s26("Britney Spears", "Toxic", 10);

    //Tests

    cout << "------------TEST CASE #0 - Remove from an empty linkedList----------"<< endl;
    result = t.removeSong(s1);
    cout<<"Delete result is ="<<result<<endl;
    cout<<endl;

    cout << "------------TEST CASE #1 - ADD SONG------------" << endl;
    cout << "Song to add : "  << s1.getTitle() << ", " << s1.getArtist() << ", " << s1.getSize() << "MB" << endl;
    result = t.addSong(s1);
    cout << "Add result = " << result << endl;
    cout << endl;
    cout << "LIST OF SONGS:" <<endl;
    t.showSongList();
    cout << "Remaining memory:" << t.getRemainingMemory() << endl;
    cout << endl;

    cout << "-------------TEST CASE #2 - ADD SONG------------" << endl;
    cout << "Song to add : "  << s5.getTitle() << ", " << s5.getArtist() << ", " << s5.getSize() << "MB" << endl;
    result = t.addSong(s5);
    cout << "Add result = " << result << endl;
    cout << endl;
    cout << "LIST OF SONGS:" <<endl;
    t.showSongList();
    cout << "Remaining memory:" << t.getRemainingMemory() << endl;
    cout << endl;

    cout << "--------------TEST CASE #3 - ADD SONG------------" << endl;
    cout << "Song to add : "  << s10.getTitle() << ", " << s10.getArtist() << ", " << s10.getSize() << "MB" << endl;
    result = t.addSong(s10);
    cout << "Add result = " << result << endl;
    cout << endl;
    cout << "LIST OF SONGS:" <<endl;
    t.showSongList();
    cout << "Remaining memory:" << t.getRemainingMemory() << endl;
    cout << endl;

    cout << "--------------TEST CASE #4 - ADD SONG AND SHUFFLE IT TWICE------------" << endl;
    cout << "Song to add : "  << s20.getTitle() << ", " << s20.getArtist() << ", " << s20.getSize() << "MB" <<endl;
    result = t.addSong(s20);
    cout << "Add result = " << result << endl;
    cout << endl;
    cout << "LIST OF SONGS:" <<endl;
    t.showSongList();
    cout << "Remaining memory:" << t.getRemainingMemory() << endl;
    cout << endl;
    cout<<"First shuffle:"<<endl;
    t.shuffle();
    t.showSongList();
    cout<<"Second shuffle:"<<endl;
    t.shuffle();
    t.showSongList();
    cout << endl;

    cout << "--------------TEST CASE #5 - ADD BLANK TITLE AND ARTIST------------" << endl;
    cout << "Song to add : "  << s23.getTitle() << ", " << s23.getArtist() << ", " << s23.getSize() << "MB" << endl;
    result = t.addSong(s23);
    cout << "Add result = " << result << endl;
    cout << endl;
    cout << "LIST OF SONGS:" <<endl;
    t.showSongList();
    cout << "Remaining memory:" << t.getRemainingMemory() << endl;
    cout << endl;

    cout << "---------------TEST CASE #6 - ADD BLANK TITLE AND ARTIST------------" << endl;
    cout << "Song to add : "  << s22.getTitle() << ", " << s22.getArtist() << ", " << s22.getSize() << "MB" << endl;
    result = t.addSong(s22);
    cout << "Add result = " << result << endl;
    cout << endl;
    cout << "LIST OF SONGS:" <<endl;
    t.showSongList();
    cout << "Remaining memory:" << t.getRemainingMemory() << endl;
    cout << endl;

    cout << "---------------TEST CASE #7 - ADD SIZE 0 MB------------" << endl;
    cout << "Song to add : "  << s24.getTitle() << ", " << s24.getArtist() << ", " << s24.getSize() << "MB" << endl;
    result = t.addSong(s24);
    cout << "Add result = " << result << endl;
    cout << endl;
    cout << "LIST OF SONGS:" <<endl;
    t.showSongList();
    cout << "Remaining memory:" << t.getRemainingMemory() << endl;
    cout << endl;

    cout << "---------------TEST CASE #8 - ADD NEGATIVE MB------------" << endl;
    cout << "Song to add : "  << s25.getTitle() << ", " << s25.getArtist() << ", " << s25.getSize() << "MB" << endl;
    result = t.addSong(s25);
    cout << "Add result = " << result << endl;
    cout << endl;
    cout << "LIST OF SONGS:" <<endl;
    t.showSongList();
    cout << "Remaining memory:" << t.getRemainingMemory() << endl;
    cout << endl;

    cout << "------------TEST CASE #9 - ADD WHEN MEMORY IS NOT ENOUGH------------" << endl;
    cout << "Song to add : "  << s17.getTitle() << ", " << s17.getArtist() << ", " << s17.getSize() << "MB" << endl;
    result = t.addSong(s17);
    cout << "Add result = " << result << endl;
    cout << endl;
    cout << "LIST OF SONGS:" <<endl;
    t.showSongList();
    cout << "Remaining memory:" << t.getRemainingMemory() << endl;
    cout << endl;

    cout<< "--------------TEST CASE #11 - SORTING---------------"<<endl;
    cout<< "Sort the list of songs by artist:"<<endl;
    t.sortSongList();
    cout << "LIST OF SONGS:" <<endl;
    t.showSongList();
    cout<<endl;

    cout<< "---------------TEST CASE #12 - SHUFFLE AND SORT-----------"<< endl;
    cout<< "First shuffle list:"<< endl;
    t.shuffle();
    cout << "LIST OF SONGS:" <<endl;
    t.showSongList();
    cout<<"Second Sort"<<endl;
    t.sortSongList();
    cout << "LIST OF SONGS:" <<endl;
    t.showSongList();
    cout<<endl;

    cout<< "---------------TEST CASE #13 - Removing songs from linkedList-------"<<endl;
    cout<<"Remove songs:"<<s1.getTitle()<<", by "<<s1.getArtist()<<"."<<endl;
    cout<<"And also:"<<s10.getTitle()<<", by "<< s10.getArtist()<<"."<<endl;
    result=t.removeSong(s1);
    result=t.removeSong(s10);
    cout << "LIST OF SONGS:" <<endl;
    t.showSongList();
    cout<<endl;

    cout<<"----------------TEST CASE #14 - Remove same song twice --------------"<<endl;
    cout<<"Remove songs:"<<s5.getTitle()<<", by "<<s5.getArtist()<<"."<<endl;
    result=t.removeSong(s5);
    cout << "LIST OF SONGS:" <<endl;
    t.showSongList();
    cout<<"Remove same song"<<endl;
    result=t.removeSong(s5);
    cout << "LIST OF SONGS:" <<endl;
    t.showSongList();
    cout<<endl;

    cout<<"-----------------TEST CASE #15 - CHANGING SONG---------------------"<< endl;
    cout<<"Change:" << s1.getTitle() << ", by "<<s1.getArtist()<<", "<< s1.getSize() << "MB"<< endl;
    result=t.addSong(s1);
    cout << "LIST OF SONGS:" <<endl;
    t.showSongList();
    result=t.removeSong(s1);
    s1.setArtist("Pedro Infante");
    s1.setTitle("Las Mananitas");
    s1.setSize(100);
    cout<<"To:"<< s1.getTitle() << ", by "<<s1.getArtist() << ", "<< s1.getSize() << "MB"<< endl;
    result=t.addSong(s1);
    cout << "LIST OF SONGS:" <<endl;
    t.showSongList();

    cout<<"-----------------TEST CASE #16 - Mermory USed Overall---------------------"<< endl;
    cout<< "Total Memory:" << t.getTotalMemory() << endl;
    cout<< "Remaining Memory: "<< t.getRemainingMemory() << endl;
    cout << "Memory Used: "<< t.getTotalMemory() - t.getRemainingMemory() << endl;

    cout<<"-----------------TEST CASE #17 - CLEAR MEMORY-----------------------------"<< endl;
    t.clearMemory();
    cout<< "Total Memory:" << t.getTotalMemory() << endl;
    cout<< "Remaining Memory: "<< t.getRemainingMemory() << endl;
    cout << "Memory Used: "<< t.getTotalMemory() - t.getRemainingMemory() << endl;

}