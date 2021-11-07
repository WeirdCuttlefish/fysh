#include "spotify.hpp"
#include <iostream>
#include <cstdlib>

int main(){
    atexit(win::close);
    win::restart(); //Ensures we start at a point that works
    bool paused = false;
    while(true){
        if(win::is_ad_playing() && paused == false){
            win::restart();
        }
    }
    return 0;
}