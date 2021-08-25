#include <iostream>
#include <thread>
#include <queue>
#include <unistd.h>

using namespace std;

struct task {
    string nameTask;
    int time;
};

class worker{
protected:
    string name;
    queue<task> *q;
    task curentTask;
public:
    worker(string name, queue<task> &q){
        this->name = name;
        this->q = &q;
    }

    void print(){
        cout << this->q->size() << "\n";
        while (!(this->q->empty())) {
            task t = q->front();
            q->pop();
            cout << t.nameTask + " " << t.time << "\n";
        }
    }

    void make_task(){
        if (!this->q->empty()) {
            this->curentTask = this->q->front();
            this->q->pop();
            usleep(10);
            for (int i = 0; i < this->curentTask.time; i++) {
                cout << this->name + " is doing task " + this->curentTask.nameTask + "\n";
                usleep(10);
            }
            cout << this->name +" finished task " + this->curentTask.nameTask + "\n";
            usleep(10);
            make_task();
        } else {
            cout << "There is no more tasks, therefore " + this->name + " is chilling\n";
        }
    }
};

int main() {
    queue<task> tasks;
    string name;
    int time;
    for (int i = 0; i < (rand()%15 + 4); i++) {
        name = "task_";
        name += i + 48;
        time = rand()%50 + 1;
        task t;
        t.nameTask = name;
        t.time = time;
        tasks.push(t);
    }

    worker first("Danil", tasks);
    worker second("Artem", tasks);
    worker third("Leha", tasks);

    thread th1(&worker::make_task, first);
    thread th2(&worker::make_task, second);
    thread th3(&worker::make_task, third);
    th1.join();
    th2.join();
    th3.join();
}