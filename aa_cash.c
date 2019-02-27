#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int n;
    int fiveh=500;
    int twohf=250;
    int thow=200;
    int oneh=100;
    int fifty=50;
    int twenf=25;
    int ten=10;
    int five=5;

do
{
    n=get_int("give the price: ");
}
while (n<=0);

int counter=0;

while(n>=fiveh)
    {
        n=n-fiveh;counter++;printf("%i\n",fiveh);
    }


while(n>=twohf)
    {
        n=n-twohf;counter++;printf("%i\n",twohf);
    }

while(n>=thow)
    {
        n=n-thow;counter++;printf("%i\n",thow);
    }

while(n>=oneh)
{
    n=n-oneh;counter++;printf("%i\n",oneh);
}

while(n>=fifty)
{
    n=n-fifty;counter++;printf("%i\n",fifty);
}

while(n>=twenf)
    {
        n=n-twenf;counter++;printf("%i\n",twenf);
    }

while(n>=ten)
    {
        n=n-ten;counter++;printf("%i\n",ten);
    }

while(n>=five)
    {
        n=n-five;counter++;printf("%i\n",five);
    }


printf("%i coins\n", counter);
}

