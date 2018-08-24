#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Music
{
        string s;
        fstream music;
        public:
        void add(string s1)
        {
                music.open("musiclib.txt" , ios::app | ios::out);
                if(music.is_open())
                {
                        music << s1<<"\n";
                        cout<<"\nSong added";
                }
                else
                        cout<<"\nunable to open";
                music.close();
        }
        void play(string s2)
        {
                string m;
                int c=0;
                music.open("musiclib.txt",ios::in);
                while(getline(music , m))
                {
                        if(s2 == m)
                        {
                                cout<<"\nPlaying:  "<<m;
                                c = 1;
				break;
                        }
                }
                if(c == 0)
                        cout<<"Song Not Found";
        }
        void Delete(string s3)
        {
                fstream temp;
                temp.open("mtemporary" , ios::app | ios::out);
                string m;
                int c = 0;
                music.open("lib" , ios::in);
                while(getline(music , m))
                {
                        if(s3 != m)
                        {
				 c = 1;
                                temp<<m<<"\n";
                        }
                }
                if(c == 1)
                {
                        remove("lib");
                        rename("mtemporary" , "lib");
                        cout<<"Song Has Been Deleted";
                }
        }
};




