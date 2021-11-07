#include <winuser.h>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <Windows.h>

namespace win{
    const char* ad_state = "Spotify Free"; //When an ad plays, Spotify changes the window name to Spotify Free
    const int delay = 2000; //Increase depending on how slow your computer is
    const char* spotify_path = "Spotify.lnk";
    
    void close(){
        system("taskkill /IM spotify.exe -f");
    }
    
    void restart(){
        system("taskkill /IM spotify.exe -f"); //Force closes all tasks named spotify.exe
        system(spotify_path); //Launches Spotify
        Sleep(delay);
        INPUT p;
        p.type = INPUT_KEYBOARD; //INPUT_KEYBOARD = 1;
        p.ki.dwFlags = 0; //0 = Press Key
        p.ki.wVk = 0xB3;  //0xB3 is code for play/pause media
        SendInput(1, &p, sizeof(INPUT));
        Sleep(delay);
    }

    bool is_ad_playing(){
        return FindWindowA(NULL, ad_state) != NULL;//If no process is in the ad state, return false
    }
}
