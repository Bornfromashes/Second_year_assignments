#include<iostream>
using namespace std;

class Weather
{
    int day, htemp, ltemp, amt_rain, amt_snow;
public:
    Weather()
    {
        day= 31;
        htemp= 32;
        ltemp= 20;
        amt_rain= 6;
        amt_snow= 2;
    }
    void getdata();
    void disp();
    void del();
    int dm()
    {
        return day;
    }
    int ht()
    {
        return htemp;
    }
    int lt()
    {
        return ltemp;
    }
    int rain()
    {
        return amt_rain;
    }
    int snow()
    {
        return amt_snow;
    }

};

void Weather::getdata()
{

    cout<<"\n Enter day, high temp, low temp, amount of rain, amount of snow\t";
    cin>>day>>htemp>>ltemp>>amt_rain>>amt_snow;
}

void Weather::disp()
{
    cout<<"\n Day\t"<<day<<"\n high temp\t"<<htemp<<"\n low temp\t"<<ltemp<<"\n amount of rain\t"<<amt_rain<<"\n amount of snow\t"<<amt_snow;
}

void Weather::del()
{
    day= 31;
    htemp= 32;
    ltemp= 20;
    amt_rain= 6;
    amt_snow= 2;

}


int main()
{
    int n,d,c,r;
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
                        w[i].getdata();
                    }
                    break;
            case 2: for(int i=0; i<n; i++)
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
                            w[i].disp();
                        }
                    }
                    break;
            case 4:cout<<"\nEnter day to delete\t";
                    cin>>d;
                    for(int i=0; i<n; i++)
                    {
                        if(w[i].dm()==d)
                        {
                            w[i].del();
                        }
                    }
                    break;
            case 5:cout<<"\nEnter day to modify\t";
                    cin>>d;
                    for(int i=0; i<n; i++)
                    {
                        if(w[i].dm()==d)
                        {
                            w[i].getdata();
                        }
                    }
                    break;
            case 6: cout<<"\nReport of whole month\t";
                    int avg_htemp=0, avg_ltemp=0, avg_rain=0, avg_snow=0;
                    for (int i=0; i<n;i++)
                    {
                        avg_htemp+=w[i].ht();
                        avg_ltemp+=w[i].lt();
                        avg_rain+=w[i].rain();
                        avg_snow+=w[i].snow();

                    }
                    avg_htemp=avg_htemp/n;
                    avg_ltemp=avg_ltemp/n;
                    avg_rain= avg_rain/n;
                    avg_snow= avg_snow/n;
                    cout<<"\nAverage high temp is\t "<<avg_htemp<<"\nAverage low temp is\t"<<avg_ltemp;
                    cout<<"\nAverage rain is\t "<<avg_rain<<"\nAverage snow is\t "<<avg_snow;
                    break;
        }
        cout<<"\nEnter 1 to continue\t";
        cin>>r;
    }while(r==1);
    return 0;
}




