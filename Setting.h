#include<iostream>
#include<fstream>
using namespace std;
class Brightness
{
        int value;
        public:
                Brightness()
                {
                        value = 0;
                }
                void operator++(int)
                {
                        value++;
                        cout<<"\nYour brightness level: "<<value;
                }
                void Increase()
                {
                        int n;
                        cout<<"\nEnter the value: ";
                        cin>>n;
                        value+=n;
                        cout<<"\nYour brightness level: "<<value;
                }
                void operator--(int)
                {
                        value--;
                        cout<<"\nYour brigthness level: "<<value;
                }
                void Decrease()
                {
                        int n;
			 cout<<"\nEnter the value: ";
                        cin>>n;
                        value-=n;
                        cout<<"\nYour brigthness value: "<<value;
                }

};
class Vol
{
        int value;
                public:
                Vol()
                {
                        value = 0;
                }
                void operator++(int)
                {
			value++;
                        cout<<"\nYour Volume level: "<<value;
                }
                void Increase()
                {
                        int n;
                        cout<<"\nEnter the value: ";
                        cin>>n;
                        value+=n;
                        cout<<"\nYour Volume level: "<<value;
                }
                void operator--(int)
                {
                        value--;
                        cout<<"\nYour Volume level: "<<value;
                }
                void Decrease()
		{
                        int n;
                        cout<<"\nEnter the value: ";
                        cin>>n;
                        value-=n;
                        cout<<"\nYour Volume value: "<<value;
                }
};
class Settings;
class Sim
{
        bool sim1 , sim2;
        public:
                Sim()
                {
                        sim1=1;
                        sim2=0;
		}
                bool sw()
                {
                        int n;
                        cout<<"\nEnter the SIM u want to activate(1/2)";
                        cin>>n;
                        if(n == 1)
                        {
                                sim1 = 1;
                                sim2 = 0;
                        }
                        else if(n == 2)
                        {
                                sim1 = 0;
                                sim2 = 1;
                        }
                }
		friend Settings;
};
class Settings
{
        bool bluetooth , wifi , mobile_data , vibration , airplane;
        string alert_slider;
        Sim c,d,m;//contacts,data,messages;
        Brightness b;
        Vol v;
        public:
                Settings()
                {
                        wifi = 0;
                        mobile_data = 0;
                        vibration = 0;
                        airplane = 0;
                        bluetooth = 0;
		 }
                        void Options()
                        {
                            bool loop = true;
                            while(loop)
                            {
                                int n;
                                cout<<"\nENTER YOUR OPTION: ";
                                cout<<"\n1.Mobile Data";
                                cout<<"\n2.Wi-Fi";
                                cout<<"\n3.Bluetooth";
                                cout<<"\n4.SIM & network";
                                cout<<"\n5.Airplane Mode";
                                cout<<"\n6.Sound & Vibration";
                                cout<<"\n7.Brightness";
                                cout<<"\n8.About phone\n";
                                cout << "\n9.Main Menu;";

                                cin>>n;
                                switch(n)
                                {
                                        case 1:
						 mobiledata();
                                                break;
                                        case 2:
                                                wi_fi();
                                                break;
                                        case 3:
                                                Bluetooth();
                                                break;
                                        case 4:
                                                sn();
                                                break;
                                        case 5:
                                                Airplane();
                                                break;
                                        case 6:
                                                {
                                                        int n;
							 cout<<"SOUND(1)/VIB(2)";
                                                        cin>>n;
                                                        if(n == 1)
                                                                Volume();
                                                        else if(n == 2)
                                                                Vibe();
                                                }break;
                                        case 7:
                                                Bright();
                                                break;
                                        case 8:
                                                abt();
                                                break;
                                        case 9:
                                                loop = false;
                                                break;
                                        default:
                                                cout<<"\nenter a valid: ";
                                                break;
                                }
                        }
                    }
				bool wi_fi()
                        {
                                int n1;
                                int n2;
                                if(wifi == 0)
                                {
                                        cout<<"\nWI-FI IS OFF";
                                        l1:cout<<"\nEnter '1' to on the wifi: ";
                                        cin>>n1;
                                        if(n1!=1)
                                                goto l1;
                                        wifi = n1;
                                        cout<<"\nWi-Fi is ON";
                                }
                                else if(wifi == 1)
                                {
                                        cout<<"\nWI-FI IS ON";
                                        l2:cout<<"\nEnter '0' to off the wifi: ";
                                        cin>>n1;
                                        if(n1!=0)
                                                goto l2;
                                        wifi = n1;
                                        cout<<"\nWi-Fi is OFF";
                                }
                                cout<<"\nDo u want to stay in settings?(1/0)\n";
                                cin>>n2;

                        }
                        bool Bluetooth()
                        {
                                int n1;
                                if(bluetooth == 0)
                                {
					cout<<"\nBluetooth IS OFF";
                                        l1:cout<<"\nEnter '1' to on the Bluetooth: ";
                                        cin>>n1;
                                        if(n1!=1)
                                                goto l1;
                                        bluetooth = n1;
                                        cout<<"\nBluetooth is ON";
                                }
                                else if(bluetooth == 1)
                                {
                                        cout<<"\nBluetooth IS ON";
                                        l2:cout<<"\nEnter '0' to off the Bluetooth: ";
                                        cin>>n1;
                                        if(n1!=0)
                                                goto l2;
                                        bluetooth = n1;
                                        cout<<"\nBluetooth is OFF";

				}
                        }
                        bool mobiledata()
                        {
                                int n1;
                                if(mobile_data == 0)
                                {
                                        cout<<"\nMobile Data IS OFF";
                                        l1:cout<<"\nEnter '1' to on the Mobile Data: ";
                                        cin>>n1;
                                        if(n1!=1)
                                                goto l1;
                                        mobile_data = n1;
                                        cout<<"\nMobile Data is ON";
                                }
                                else if(mobile_data == 1)
                                {

                                        cout<<"\nMobile Data IS ON";
                                        l2:cout<<"\nEnter '0' to off the Mobile Data: ";
                                        cin>>n1;
                                        if(n1!=0)
                                                goto l2;
                                        mobile_data = n1;
                                        cout<<"\nMobile Data is OFF";
                                }
                        }
                        bool Airplane()
                        {
                                int n1;
                                if(airplane == 0)
                                {
                                        cout<<"\nAirplane-Mode IS OFF";
                                        l1:cout<<"\nEnter '1' to on the Airplane-Mode: ";
                                        cin>>n1;
					if(n1!=1)
                                                goto l1;
                                        airplane = n1;
                                        wifi = 0;
                                        bluetooth = 0;
                                        mobile_data = 0;
                                        cout<<"\nAirplane-Mode is ON";
                                }
                                else if(airplane == 1)
                                {
                                        cout<<"\nAirplane-Mode IS ON";
                                        l2:cout<<"\nEnter '0' to off the Airplane-Mode: ";
                                        cin>>n1;
                                        if(n1!=0)
                                                goto l2;
                                        airplane = n1;
                                        cout<<"\nAirplane-Mode is OFF";
				}
			}
                        bool Vibe()
                        {
                                int n1;
                                if(vibration == 0)
                                {
                                        cout<<"\nVibration IS OFF";
                                        l1:cout<<"\nEnter '1' to on the Vibration: ";
                                        cin>>n1;
                                        if(n1!=1)
                                                goto l1;
                                        vibration = n1;
                                        cout<<"\nVibration is ON";
                                }
                                else if(vibration == 1)
                                {
                                        cout<<"\nVibration IS ON";
                                        l2:cout<<"\nEnter '0' to off the Vibration: ";
                                        cin>>n1;
                                        if(n1!=0)
                                                goto l2;
                                        vibration = n1;
                                        cout<<"\nVibration is OFF";
                                }
                        }
                        void sn()
                        {
                                int n;
                                cout<<"\nEnter the option to change the sim settings";
                                cout<<"\n1.DATA USAGE";
                                cout<<"\n2.CALL";
                                cout<<"\n3.MESSAGING\n";
                                cin>>n;
				if(n == 1)
                                {
                                        if(d.sim1 == 1)
                                                cout<<"\nData is on SIM1\n";
                                        else if(d.sim2 == 1)
                                                cout<<"\nData is on SIM2\n";

                                        d.sw();

                                        if(d.sim1 == 1)
                                                cout<<"\nData is on SIM1\n";
                                        else if(d.sim2 == 1)
                                                cout<<"\nData is on SIM2\n";
                                }
                                else if(n == 2)
                                {
                                        if(c.sim1 == 1)
						 cout<<"\nData is on SIM1\n";
                                        else if(c.sim2 == 1)
                                                cout<<"\nData is on SIM2\n";

                                        c.sw();

                                        if(c.sim1 == 1)
                                                cout<<"\nData is on SIM1\n";
                                        else if(c.sim2 == 1)
                                                cout<<"\nData is on SIM2\n";

                                }
                                else if(n == 3)
                                {
                                        if(m.sim1 == 1)
                                                cout<<"\nData is on SIM1\n";
                                        else if(m.sim2 == 1)
						 cout<<"\nData is on SIM2\n";

                                        m.sw();

                                        if(m.sim1 == 1)
                                                cout<<"\nData is on SIM1\n";
                                        else if(m.sim2 == 1)
                                                cout<<"\nData is on SIM2\n";

                                }
                        }
                        void Bright()
                        {
                                int n;
                                cout<<"\nIncrease gradually(1)/Increase by value(2)/Decrease gradually(3)/Decrease by value(4)\n";
                                cin>>n;
                                if(n == 1)
					 b++;
                                else if(n == 2)
                                        b.Increase();
                                else if(n == 3)
                                        b--;
                                else if(n == 4)
                                        b.Decrease();

                        }
                        void Volume()
                        {
                                int n;
                                cout<<"\nIncrease gradually(1)/Increase by value(2)/Decrease gradually(3)/Decrease by value(4)\n";
                                cin>>n;
                                if(n == 1)
                                        v++;
                                 else if(n == 2)
                                        v.Increase();
                                else if(n == 3)
                                        v--;
                                else if(n == 4)
                                        v.Decrease();


                        }
                        void abt()
                        {
                                cout<<"\n";
                                cout<<"  Phone name:  \n";
                                cout<<"   OnePlus 5     \n";
                                cout<<"-----------------\n";
                                cout<<"    Oxygen OS    \n";
                                cout<<"      5.1.1      \n";
                                cout<<"-----------------\n";
                                cout<<"       RAM       \n";
                                cout<<"       6GB       \n";
                                cout<<"-----------------\n";
                                cout<<"  ANDROID VERSION\n";
                                cout<<"      8.1.0      \n";
                                cout<<"-----------------\n";
                                cout<<"    BUILD NUMBER   \n";
                                cout<<"ONEPLUS A5000_23_180420\n";
                        }


};
