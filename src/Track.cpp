#include "../include/Track.h"

Track::Track() = default;

Track::Track(std::string& trackName, int trackDuration) {
    name = trackName;
    duration = trackDuration;
    isPlayed = false;
}

void Track::setName(const std::string& newName) {
    name = newName;
}

std::string Track::getName() const {
    return name;
}

std::tm Track::getCreationDate() const {
    return creationDate;
}

int Track::getDuration() const {
    return duration;
}

bool Track::getIsPlayed() const {
    return isPlayed;
}

void Track::setCreationDate(const int year, const int month, const int day) {
    creationDate.tm_year = year - 1900;
    creationDate.tm_mon = month - 1;
    creationDate.tm_mday = day;
}

void Track::setDuration(const int newDuration) {
    duration = newDuration;
}

void Track::Play() {
    if (!isPlayed)
    {
        isPlayed = true;
        std::cout << "---------------------------------------\n";
        std::cout << "Track is played: " << name << "\n";
        std::cout << "Duration: " << duration << " seconds\n";
        std::cout << "Created: " << std::put_time(&creationDate, "%Y %b %d") << "\n";
    }

}

void Track::Stop() {
    if (isPlayed)
    {
        isPlayed = false;
        std::cout << "---------------------------------------\n";
        std::cout << "Track is stopped: " << name << "\n";
    }
}
