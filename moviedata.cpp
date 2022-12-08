#include <iostream>
using namespace std;

class Movie
{
private:
    string mName;                                               // name of the movie
    int mLength;                                                // Duration of the movie
    float mCollection;                                          // Total collection in rupees for the movie
    int mDaysRun;                                               // Number of days movie has run
    int averageCollection() { return mCollection / mDaysRun; }; // Method to calculate average collection of movie

public:
    void setMovieData()
    {
        cout << "Enter the name of the movie: " << flush;
        getline(cin, mName);
        cout << "Enter the duration of the movie(minutes): " << flush;
        cin >> mLength;
        cout << "Enter the total collection for the movie in rupees: " << flush;
        cin >> mCollection;
        cout << "Enter the number of days the movie has run: " << flush;
        cin >> mDaysRun;
    }
    void displayMovieData()
    {
        cout << "The name of the movie is " << mName << endl;
        cout << "The length of the movie is " << mLength << " minutes." << endl;
        cout << "The movie has run for " << mDaysRun << " days." << endl;
        cout << "The total collection for the movie is " << mCollection << " rupees" << endl;
        cout << "The average collection for the movie is " << averageCollection() << " rupees." << endl;
    }
};

int main()
{
    Movie movie;
    movie.setMovieData();
    movie.displayMovieData();
    return 0;
}