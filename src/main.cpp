#include "win_spotify.hpp"
#include <stdexcept>
#include <cstdlib>

int main(){
    if(close_on_exit)
        atexit(win::close_spotify);
    win::restart_spotify();
    while(true){
        if(win::is_ad_playing()){
            win::restart_spotify();
        }
    }
}