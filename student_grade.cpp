#include<iostream>
using namespace std;
int main()
{
    int i,n;
    float mark, sum=0, avg;
    string name;   
    cout << "Enter the name of the student: ";
    cin >> name;
    cout<<"Enter the number of Subjects: ";
    cin>>n;
    cout<<"Enter the marks:"<<endl;
    for(i=0; i<n; i++)
    {
        cin>>mark;
        sum = sum+mark;
    }
    cout<<"marks: "<<mark ;
    avg = sum/n;
    cout <<"Student name: "<< name<<endl;
	cout<<"Total subject: "<<n<<endl;
    cout<<"\nGrade = ";
    if(avg>=91 && avg<=100){
        cout<<"A+"<<endl;
        cout<<"Highest grade"<<endl;
		}
    else if(avg>=81 && avg<91){
        cout<<"A";
	}
    else if(avg>=71 && avg<81){
        cout<<"B+";
    }
    else if(avg>=61 && avg<71){
        cout<<"B";
    }
    else if(avg>=51 && avg<61){
        cout<<"C";
    }
    else if(avg>=41 && avg<51){
        cout<<"D";
    }
    else if(avg>=30 && avg<41){
        cout<<"E";
    }
    else if(avg>=0 && avg<30){
        cout<<"F"<<endl;
        cout<<"Lowest grade"<<endl;
		}
    else{
        cout<<"Invalid!";
    }
    cout<<endl;
    return 0;
}
