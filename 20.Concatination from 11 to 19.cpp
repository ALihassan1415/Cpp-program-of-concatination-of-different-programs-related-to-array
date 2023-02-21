//Concatination of different programs  .....

#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
void  Program11()
{
//Program to print even and odd integers in separate arrays..
int arr[5];
int i,k,j;
int even[k],odd[j];
cout<<"Enter values of array : "<<endl;
for(int i=0;i<5;i++)
    {
    cout<<"Enter value "<<i+1<<" : ";
	cin>>arr[i];
	}
	cout<<"Values of given array is : :    ";
	for(i=0;i<5;i++)
    {
	cout<<arr[i]<<"\t";
	}
	k=0;
	j=0;	
	for( i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
		even[k]=arr[i];
		k++;
		}
	else if(arr[i]%2!=0)
		{
		odd[j]=arr[i];
		j++;
		}
	}
	cout<<"\nThe array of even numbers is :   ";
	for( i=0;i<k;i++)
	{
		cout<<even[i]<<"\t";
	}
	cout<<"\nThe array of odd numbers is :   ";
	for( i=0;i<j;i++)
	{
		cout<<odd[i]<<"\t";
	}
}
	

void Program12()
{
	int i,k,m;
	int arr[5];
	cout<<"Enter the values in array : "<<endl;
	     for(i=0;i<5;i++)
	     {
	     	cout<<"Enter value "<<i+1<<" : ";
	     	cin>>arr[i];
		 }
		 	k=0;
		 for(i=0;i<5;i++)
		 {
		 	if(arr[i]%2==0)
		 	k++;
         }
         	m=0;
         for( i=0; i<5 ; i++)
		 {
		 	if(arr[i]%2!=0)
		 	m++;
         }
         cout<<"Even number occurs "<<k<<" times in array "<<endl;
         cout<<"Odd numbers occurs "<<m<<" times in array "<<endl;	
}
void Program13()
{
int arr[5];
	int i,j,over;
	cout<<"Enter the values of array : "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<"Enter value "<<i+1<<" : ";
				cin>>arr[i];
			}
			cout<<"The entered values are : "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<arr[i]<<"\t";
			}
			cout<<"\nSorted array is : "<<endl;
			for(i=0;i<5;i++)
			{
				for(j=i+1;j<5;j++)
				{
					if(arr[i]>arr[j])
					{
						//Swapping......
						over=arr[j];
						arr[j]=arr[i];
						arr[i]=over;
					}
	
				}
				cout<<arr[i]<<"\t";
			}
}
void Program14()
{
int arr[5];
	int i,j,over;
	cout<<"Enter the values of array : "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<"Enter value "<<i+1<<" : ";
				cin>>arr[i];
			}
			cout<<"The entered values are : "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<arr[i]<<"\t";
			}
			cout<<"\nSorted array is : "<<endl;
			for(i=0;i<5;i++)
			{
				for(j=i+1;j<5;j++)
				{
					if(arr[i]<arr[j])
					{
						//Swapping......
						over=arr[j];
						arr[j]=arr[i];
						arr[i]=over;
					}
	
				}
				cout<<arr[i]<<"\t";
			}	
}
void Program15()
{
int arr[5];
	int i,j,over;
	cout<<"Enter the values of array : "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<"Enter value "<<i+1<<" : ";
				cin>>arr[i];
			}
			cout<<"The entered values are : "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<arr[i]<<"\t";
			}
			for(i=0;i<5;i++)
			{
				for(j=i+1;j<5;j++)
				{
					if(arr[i]>arr[j])
					{
						over=arr[j];
						arr[j]=arr[i];
						arr[i]=over;
					}
				}
			}
				cout<<"\nSecond smallest number in array is : "<<endl;
			    cout<<arr[1];
}
void Program16()
{
	int arr[5];
	int i,j,over;
	cout<<"Enter the values of array : "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<"Enter value "<<i+1<<" : ";
				cin>>arr[i];
			}
			cout<<"The entered values are : "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<arr[i]<<"\t";
			}
			for(i=0;i<5;i++)
			{
				for(j=i+1;j<5;j++)
				{
					if(arr[i]<arr[j])
					{
						//Swapping......
						over=arr[j];
						arr[j]=arr[i];
						arr[i]=over;
					}
				}
			}
				cout<<"\nSecond largest number in array is : "<<endl;
			    cout<<arr[1];
				
}
void Program17()
{
	int arr1[5] , arr2[5];
	int count;
	cout<<"Enter the numbers in array 1 : "<<endl;
			for(int i=0;i<5;i++)
		{
				cout<<"Enter value "<<i+1<<" : ";
				cin>>arr1[i];
		}
	cout<<"Enter the numbers in array 2 : "<<endl;
			for(int i=0;i<5;i++)
		{
				cout<<"Enter value "<<i+1<<" : ";
				cin>>arr2[i];
		}
			for(int i=0;i<5;i++)
		{
				if(arr1[i]==arr2[i])
				cout<<"\nArrays are same !!!";
		      else
				cout<<"\nArrays are different !!!";
				break;
		}
	
}
void Program18()
{
	int arr1[10] , arr2[10] , Merge[20];
	int n,m,i;
	cout<<"Enter ther size of 1st array : "<<endl;
	cin>>n;
	cout<<"Enter ther size of 2nd array : "<<endl;
	cin>>m;
			cout<<"Enter "<<n<<" values of Array 1 : "<<endl;
		    for( i=0;i<n;i++)
		    {
		 	cout<<"Enter value "<<i+1<<" : ";
 	        cin>>arr1[i];
		 	Merge[i]=arr1[i];
		    }
			 
			cout<<"Enter "<<m<<" values of Array 2 : "<<endl;
			  for( i=0; i<m; i++)
		    {  
		    cout<<"Enter value "<<i+1<<" : ";
         	cin>>arr2[i];
		 	Merge[i+5] = arr2[i];
		
	     	 }
			  cout<<"\nThe merged array is : "<<endl;	
			for( i=0; i<n+m; i++) 
			{
				cout<<Merge[i]<<"\t";

			}
}
void Program19()
{
int arr[5];
	int i,j,temp;
	int Max;
	cout<<"Enter the values of array : "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<"Enter value "<<i+1<<" : ";
				cin>>arr[i];
			}
			cout<<"The entered values are : "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<arr[i]<<"\t";
			}
			for(i=0;i<5;i++)
			{
				for(j=i+1;j<5;j++)
				{
					if(arr[i]<arr[j])
					{
						temp=arr[j];
						arr[j]=arr[i];
						arr[i]=temp;
					}
	
				}
			}
			Max=arr[1]-arr[5];
			cout<<"\nThe maximum difference is : "<<Max;		
}
int main()
{
	int input;
	cout<<"Enter selection from 1 to 9 : ";
	cout<<"\nEnter 1 to seperate even and odd numbers in array."<<endl;
	cout<<"Enter 2 to count even and odd integers in array."<<endl;
	cout<<"Enter 3 to sort an array in ascending order."<<endl;
	cout<<"Enter 4 to sort an array in descending order."<<endl;
	cout<<"Enter 5 to find second smallest number in array."<<endl;
	cout<<"Enter 6 to find second lergest number in array."<<endl;
	cout<<"Enter 7 to check if two arrays are same or not."<<endl;
	cout<<"Enter 8 to merge two unsorted arrays."<<endl;
	cout<<"Enter 9 to find maximum difference b/w two numbers."<<endl;
	cin>>input;
 switch ( input ) {
        case 1:           
            Program11();
            break;
        case 2:          
            Program12();
            break;
        case 3:
		 	Program13();
			 break;
		case 4:
		    Program14();
			 break;
		case 5:
			Program15();
			 break; 
		case 6:
			Program16();
			 break;	
		case 7:
			Program17();
			 break;	
		case 8:
			Program18();
			 break;
		case 9:
			Program19();
			 break;    
        default:            
            cout<< "Invalid Selection!\n" ;
            break;
	
}
return 0;
}