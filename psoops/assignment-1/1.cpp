#include<iostream>
using namespace std;

class Weather
{
    int day, htemp, ltemp, amt_rain, amt_snow;
    static int htemp1, ltemp1, amt_rain1, amt_snow1;
public:
    Weather()
    {
        day= 31;
        htemp= 32;
        ltemp= 20;
        amt_rain= 6;
        amt_snow= 2;
    }
    void getdata(int x);
    void disp();
    void del();
static void avg(int);
    void getday()
    {
        cin>>day;
    }
    int dm()
    {
        return day;
    }
};
int Weather::htemp1;
int Weather::ltemp1;
int Weather::amt_snow1;
int Weather::amt_rain1;

void Weather::getdata(int x)
{
    day=x;
    cout<<"\n Enter high temp, low temp, amount of rain, amount of snow\t";
    cin>>htemp>>ltemp>>amt_rain>>amt_snow;
    htemp1=htemp1+htemp;
    ltemp1=ltemp1+ltemp;
    amt_rain1=amt_rain1+amt_rain;
    amt_snow1=amt_snow1+amt_snow;
}
void Weather::disp()
{

    cout<<"\n"<<day<<"\t"<<htemp<<"\t\t"<<ltemp<<"\t\t"<<amt_rain<<"\t\t"<<amt_snow;
 }

void Weather::del()
{
    day= 0;
    htemp= 0;
    ltemp= 0;
    amt_rain= 0;
    amt_snow= 0;

}
void Weather::avg(int n)
{
    cout<<"\n Average high temp \t Average low temp \t Average rain \t Average snow";
    cout<<"\n----------------------------------------------------------------------------------------";
    cout<<"\n"<<htemp1/n<<"\t\t\t"<<ltemp1/n<<"\t\t\t"<<amt_rain1/n<<"\t\t\t"<<amt_snow1/n;
}


int main()
{
    int d,c,r,j=0,q=0,x;
    static int n;
    int flag, flag1, flag2, flag3;
    Weather w[31];

    do{
        cout<<"\n Enter the choice 1:Enter data\n 2:Display all data \n 3:Display specific data\n 4:Delete specific day data\n 5:Modify data\n 6:Monthly Report\t";
        cin>>c;
        switch(c)
        {
            case 1: cout<<"\n Enter no. of days of which u want to enter data\t";
                    cin>>n;
                    for(int i=0; i<n; i++)
                    {
                        flag3=1;
                        cout<<"\nEnter day";
                        cin>>x;
                        for(int i=0; i<n; i++)
                        {
                            if(w[i].dm()==x)
                            {
                                flag3=0;
                            }
                        }
                        if(flag3!=0)
                        {
                            w[i].getdata(x);
                        }
                        else
                         {
                             cout<<"\n Day data already present";
                             i--;
                         }
                    }
                    break;
            case 2:
                    cout<<"\n Day  high temp  low temp  amount of rain   amount of snow\n --------------------------------------------------------------------------------------------";
                    for(int i=0; i<n; i++)
                    {
                        w[i].disp();
                    }
                    break;
            case 3: cout<<"\nEnter day to disp\t";
                    cin>>d;
                    for(int i=0; i<n; i++)
                    {
                        if(w[i].dm()==d)
                        {
                             cout<<"\n Day  high temp  low temp  amount of rain   amount of snow\n ------------------------------------------------------------------------------------";
                            w[i].disp();
                            flag2=0;
                        }

                    }
                    if(flag2!=0)
                    {
                        cout<<"\n Error 404 DAY DATA NOT FOUND!!!";
                    }
                    break;
            case 4:cout<<"\nEnter day to delete\t";
                    cin>>d;
                    for(int i=0; i<n; i++)
                    {
                        if(w[i].dm()==d)
                        {
                            w[i].del();
                            flag1=0;
                        }

                    }
                    if(flag1!=0)
                    {
                        cout<<"\n Error 404 DAY DATA NOT FOUND!!!";
                    }
                    break;
            case 5:cout<<"\nEnter day to modify\t";
                    cin>>d;
                    for(int i=0; i<n; i++)
                    {
                        if(w[i].dm()==d)
                        {
                            w[i].getdata(d);
                            flag=0;
                        }

                    }
                    if(flag!=0)
                    {
                        cout<<"\n Error 404 DAY DATA NOT FOUND!!!";
                    }
                    break;
            case 6: cout<<"\nReport of whole month\t";
                    Weather::avg(n);
                    break;
        }
        cout<<"\nEnter 1 to continue\t";
        cin>>r;
    }while(r==1);
    return 0;
}




