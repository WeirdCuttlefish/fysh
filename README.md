# fysh
Fish love music but don't like ads! Fortunately they have Fysh, a C++ program designed to skip Spotify ads.

Currently, fysh only supports Windows. 

## Setup
### Configuring
Open src/config.txt and set value for spotify_path to the location of the spotify executable

### Building (Mingw):
``windres rsc/logo.rsc rsc/logo.o
g++ src/main.cpp rsc/logo.o -o fysh.exe``

## Troubleshooting
### Can't get Spotify Path
1. Press win+r and paste `shell:AppsFolder`
2. Rightclick Spotify and create shortcut
3. Use path to shortcut as spotify_path
