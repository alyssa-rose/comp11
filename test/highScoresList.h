#ifndef HIGHSCORESLIST_H
#define HIGHSCORESLIST_H

#include <string>

class HighScoresList {
    public:
        HighScoresList();
        ~HighScoresList();
        void save();
        int highestScore();
        void print();
        void printTop5();
        void keepTop10();
        void insert(std::string user, int score);
        void clear();
        void printUser(std::string user);
        void deleteUser(std::string user);   // A JFFE, not required

    private:
        const std::string SENTINEL = "-1";
        const std::string HIGH_SCORE_FILE = "highScores.txt";

        void load();
};

#endif
