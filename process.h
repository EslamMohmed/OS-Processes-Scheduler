#ifndef PROCESS_H
#define PROCESS_H

class Process
{
private:
    int process_ID;
    int process_burst_time;
    int process_arrival_time;
    int process_priority;
    int start_time;
    int end_time;
public:
    Process(int id,int burst_time,int arrival_time,int priority);
    int get_process_Id()const;
    int get_process_burst_time()const;
    int get_process_arrival_time()const;
    int get_process_priority()const;
    int get_start_time();
    int get_end_time();

    void set_process_Id(int);
    void set_process_burst_time(int );
    void set_process_arrival_time(int );
    void set_process_priority(int);
    void set_start_time(int);
    void set_end_time(int);
};

#endif // PROCESS_H
