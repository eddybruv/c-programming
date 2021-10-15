struct time {
    int hours, minutes, seconds;
};

struct time split_time(long total_seconds){
    struct time t1;

    t1.hours = (total_seconds / 3600) % 24;
    total_seconds %= 3600;
    t1.minutes = (total_seconds / 60) % 60;
    total_seconds %= 60;
    t1.seconds = total_seconds;
}