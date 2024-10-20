# include "philo.h"

void check_negative(t_info *info)
{
    if (info ->nb_philo <= 0 || info->time_to_die <= 0 
    || info ->time_to_eat <= 0 || info ->time_to_sleep <= 0)
        return (1);
    if (info->flag == 1 && info->nb_meals <= 0)
        return (1);
    else 
        return (0);
}

// void free_info(t_info *info)
// {

// }
int init_info(t_info *info, int argc, char **argv)
{
     info->nb_philo = ft_atoi(argv[1]);
     info->time_to_die = ft_atoi(argv[2]);
     info->time_to_eat = ft_atoi(argv[3]);
     info->time_to_sleep = ft_atoi(argv[4]);
     if (argc == 6)
     {
        info ->flag = 1;
        info->nb_meals = ft_atoi(argv[5]);
     }
    else
    {
        info ->flag = 0;
        info ->nb_meals = -1;
    }
    if (check_negative(info))
        return (1);

}


int main(int argc, char **argv)
{
    t_info *info;

    info = NULL;
    if (argc != 5 && argc != 6)
    {
        printf("incorrect numbers of args\n");
        return (1);
    }
    info = (t_info *)malloc(sizeof(t_info));
    if (!info)
        return (1);
    if (init_info(info))
    {
        free(info);
        return (1);
    }
}