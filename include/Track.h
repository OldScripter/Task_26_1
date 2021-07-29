#ifndef TASK_26_1_TRACK_H
#define TASK_26_1_TRACK_H
#include <iostream>
#include <ctime>
#include <iomanip>

class Track {
private:
    std::string name;
    std::tm creationDate{};
    int duration{};
    bool isPlayed{};

public:
    Track();
    Track(std::string&, int);

    std::string getName() const;
    std::tm getCreationDate() const;
    int getDuration() const;
    bool getIsPlayed() const;

    void setName(const std::string&);
    void setCreationDate(const int, const int, const int);
    void setDuration(const int);

    void Play();
    void Stop();

};


#endif //TASK_26_1_TRACK_H
