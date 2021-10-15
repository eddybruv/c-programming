struct date {
    int day, month, year;
};

int day_of_year(struct date d)
{
    return d.day + (d.month * 30);
}

int compare_dates(struct date d1, struct date d2){
    if(day_of_year(d1) < day_of_year(d2) || d1.year < d2.year)
        return -1;
    
    else if(day_of_year(d1) > day_of_year(d2) || d1.year > d2.year)
        return 1;

    else 
        return 0;
}