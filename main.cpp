#include <iostream>
#include "include/Player.h"
#include "include/Track.h"

int main() {
    auto track = new Track();
    track->setName("Rammstein - Do riechst so gut");
    track->setDuration(147);
    track->setCreationDate(2005, 10, 14);
    track->Play();
    track->Stop();
    delete track;
    track = nullptr;
    return 0;
}
