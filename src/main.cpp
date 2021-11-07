#include "win_spotify.hpp"
#include <stdexcept>
#include <cstdlib>

int main(){
    atexit(win::close_spotify);
    win::restart_spotify();
    while(true){
        if(win::is_ad_playing()){
            win::restart_spotify();
        }
    }
}