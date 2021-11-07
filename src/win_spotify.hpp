#include <winuser.h>
#include <stdlib.h>
#include <Windows.h>
#include "config.txt"

namespace win{    
    void close_spotify(){
        system("taskkill /IM spotify.exe -f"); //Change later
    }

    void play_media(){
        INPUT p;
        p.type = INPUT_KEYBOARD; //INPUT_KEYBOARD = 1;
        p.ki.dwFlags = 0; //0 = Press Key
        p.ki.wVk = 0xB3;  //0xB3 is code for play/pause media
        SendInput(1, &p, sizeof(INPUT));
    }

    void restart_spotify(){
        close_spotify();
        system(spotify_path); //Launches Spotify
        Sleep(delay);
        play_media();
    }

    bool is_ad_playing(){
        return FindWindowA(NULL, ad_state) != NULL;//If no process is in the ad state, return false
    }
}
