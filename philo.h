#ifndef PHILO_H
#define PHILO_H

#include <stdio.h>

typedef struct t_info t_info;

typedef struct s_philo
{
    int id;
    int nb_times_eat;
    pthread_t thread;
    pthread_mutex_t *left_fork;
    pthread_mutex_t *right_fork;
    struct timeval last_time_eat;
    struct timeval current_time;
    t_info  *info;
}   t_philo;


typedef struct s_info
{
    int nb_philo;
    int time_to_die;
    int time_to_eat;
    int time_to_sleep;
    int nb_meals;
    int flag;
    pthread_t monitor;
    pthread_mutex_t *fork;
    t_philo *philo;
}   t_info;


#endif