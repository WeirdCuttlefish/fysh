#ifdef _WIN64:
#include "win_spotify.hpp"
#endif

#include <stdexcept>
#include <iostream>
#include <cstdlib>

int main(){
    //For Windows
    #ifdef _WIN64:
    atexit(win::close);

    win::restart();
    while(true){
        if(win::is_ad_playing()){
            win::restart();
        }
    }
    #else:
    throw std::invalid_argument("OS Not Supported");
    exit(1);
    #endif
}