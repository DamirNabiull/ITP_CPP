#include <ctime>
#include <iostream>
using namespace std;

struct CurrentDay {
    int day, month, year, weekday;

    bool operator == (CurrentDay const& cur) {
        return this->day == cur.day && this->month == cur.month && this->year == cur.year;
    }

    bool operator < (CurrentDay const& cur) {
        return (this->year < cur.year) || (this->year == cur.year && this->month < cur.month) || (this->year == cur.year && this->month == cur.month && this->day < cur.day);
    }

    bool operator <= (CurrentDay const& cur) {
        return (*this < cur) || (*this == cur);
    }

    bool operator > (CurrentDay const& cur) {
        return !(*this <= cur);
    }

    bool operator >= (CurrentDay const& cur) {
        return (*this == cur) || (*this > cur);
    }

};

struct Calendar {
private:
    CurrentDay day;
    int temp[12] = {31, 28, 31, 30, 31, 30 , 31, 31, 30, 31, 30, 31};
public:

    Calendar () {
        time_t t = time(0);
        tm* now = localtime(&t);
        this->day.day = now->tm_mday;
        this->day.month = now->tm_mon;
        this->day.year = now->tm_year + 1900;
        this->day.weekday = now->tm_wday - 1;
    }

    void printDate(){
        switch (this->day.weekday) {
            case 0:
                cout << "Monday" << " ";
                break;
            case 1:
                cout << "Tuesday" << " ";
                break;
            case 2:
                cout << "Wednesday" << " ";
                break;
            case 3:
                cout << "Thursday" << " ";
                break;
            case 4:
                cout << "Friday" << " ";
                break;
            case 5:
                cout << "Saturday" << " ";
                break;
            case 6:
                cout << "Sunday" << " ";
                break;
        }

        cout << this->day.day << " ";

        switch (this->day.month) {
            case 0:
                cout << "January" << " ";
                break;
            case 1:
                cout << "February" << " ";
                break;
            case 2:
                cout << "March" << " ";
                break;
            case 3:
                cout << "April" << " ";
                break;
            case 4:
                cout << "May" << " ";
                break;
            case 5:
                cout << "June" << " ";
                break;
            case 6:
                cout << "July" << " ";
                break;
            case 7:
                cout << "August" << " ";
                break;
            case 8:
                cout << "September" << " ";
                break;
            case 9:
                cout << "October" << " ";
                break;
            case 10:
                cout << "November" << " ";
                break;
            case 11:
                cout << "December" << " ";
                break;
        }

        cout << this->day.year << "\n";
    }

    void move(int delta){
        if (delta < 0) {
            Iterator(this).operator-=(-delta);
        } else {
            Iterator(this).operator+=(delta);
        }

    }

    void next(){
        Iterator(this).operator++();
    }

    void back(){
        Iterator(this).operator--();
    }

    struct Iterator;
    friend struct Iterator;

    struct Iterator {
    private:
        Calendar* p;
    public:
        Iterator(Calendar* cur) { p = cur; }
        CurrentDay operator*() {
            return p->day;
        }
        void operator++() {
            p->day.day++;
            p->day.weekday = (p->day.weekday + 1)%7;
            if (p->day.day > p->temp[p->day.month]) {
                p->day.day = 1;
                p->day.month++;
            }
            if (p->day.month > 11) {
                p->day.month = 0;
                p->day.year++;
                if ((p->day.year%4==0 && p->day.year%100!=0) || p->day.year%400==0) {
                    p->temp[1] = 29;
                } else {
                    p->temp[1] = 28;
                }
            }
        }
        void operator--() {
            p->day.day--;
            p->day.weekday = (p->day.weekday - 1 + 7)%7;
            if (!p->day.day){
                p->day.month--;
            }
            if (p->day.month == -1) {
                p->day.year--;
                p->day.month = 11;
                if ((p->day.year%4==0 && p->day.year%100!=0) || p->day.year%400==0) {
                    p->temp[1] = 29;
                } else {
                    p->temp[1] = 28;
                }
            }
            if (!p->day.day){
                p->day.day = p->temp[p->day.month];
            }
        }

        void operator += (int n) {
            for (int i = 0; i < n; i++) {
                p->day.day++;
                p->day.weekday = (p->day.weekday + 1)%7;
                if (p->day.day > p->temp[p->day.month]) {
                    p->day.day = 1;
                    p->day.month++;
                }
                if (p->day.month > 11) {
                    p->day.month = 0;
                    p->day.year++;
                    if ((p->day.year%4==0 && p->day.year%100!=0) || p->day.year%400==0) {
                        p->temp[1] = 29;
                    } else {
                        p->temp[1] = 28;
                    }
                }
            }
        }

        void operator -= (int n) {
            for (int i = 0; i < n; i++) {
                p->day.day--;
                p->day.weekday = (p->day.weekday - 1 + 7)%7;
                if (!p->day.day){
                    p->day.month--;
                }
                if (p->day.month == -1) {
                    p->day.year--;
                    p->day.month = 11;
                    if ((p->day.year%4==0 && p->day.year%100!=0) || p->day.year%400==0) {
                        p->temp[1] = 29;
                    } else {
                        p->temp[1] = 28;
                    }
                }
                if (!p->day.day){
                    p->day.day = p->temp[p->day.month];
                }
            }
        }

    };
};


int main() {
    Calendar c;
    c.printDate();
    c.move(+28);
    c.printDate();
    c.next();
    c.printDate();
    c.back();
    c.printDate();
    c.move(-28);
    c.printDate();
    c.move(-300);
    c.printDate();
}