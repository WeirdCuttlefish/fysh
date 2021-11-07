# fysh
Fish love music but don't like ads! Fysh is a C++ program designed to skip Spotify ads.

Currently, fysh only supports Windows. 

## Setup
### Configuring
Open src/config.txt and change the value for spotify_path to the location of the spotify executable

### Building (Mingw):
``cd src
g++ main.cpp -o fysh.exe``

## Troubleshooting
### Can't get Spotify Path
1. Press win+r and paste `shell:AppsFolder`
2. Rightclick Spotify and create shortcut
3. Use path to shortcut as spotify_path