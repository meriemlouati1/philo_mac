# include "philo.h"


int init_info(t_info *info)
{
     info->nb_philo = ft_atoi(argv[1]);
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
    init_info(info);
}