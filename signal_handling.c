void timeout (int sig)
{
    if (sig == SIGALRM)
        puts("Time Out!")
    alarm(2);
}
void keycontrol (int sig)
{
    if (sig == SIGINT)
        puts("CTRL + C pressed");
}

int main (int argc, char * argv[])
{
    int i;
    signal (SIGALRM, timeout);
    signal (SIGIMT, keycontrol);
    alarm(2)
    
    for (i=0; i<3; i++)
    {
        puts("wait...");
        sleep(100);
    }
        return 0;
}
        
