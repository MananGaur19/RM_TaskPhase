// Due to issues in my macbook, i have been unable to execute some of the questions. I have written the code
// based on my logic but they have not been implemented. i will switch to windows/linux for next task.

#include <iostream>
#include <sstream>
#include <string>
#include <string.h>
#include <vector>
using namespace std;
// Question 1
void BubbleSort()
{
    string input;
    string list[];
    cout<< "Enter string: ";
    getline(cin, input);
    int len=input.length();
    for(int i=0;i<=len;i++)
    {
        list[i]=int(input[i]);
    }
    for(int i=0;i<=list.size();i++)
    {
        for(int j=0;j<sizeof(list)-i;j++)
        {
            if(list[i])>list[j])
            {
                swap(list[i],list[j]);
            }
        }
    }
}
// Question 2

int MatrixMultiplication(int a[][];, int b[][];)// a & b are matrix 1 and 2 respectively.
{
    int col1=sizeof(a[0])/sizeof(a[0][0]);
    int col2=sizeof(b[0])/sizeof(b[0][0]);
    int row1=sizeof(a)/sizeof(a[0]);
    int row2=sizeof(b)/sizeof(b[0]);
    int c[row1][col2];
    if(col1 != row2)
    {
        cout<<"The given matrices are incompatible"<<endl;;
        return 1;
    }
    for(int i=0;i<row1;i++)// for the row of a
    {
        for(int j=0;j<col2;j++)// for col of b
        {
            c[i][j]=0;
            for(int k=0;k<row2;k++)// final loop. As i iterates through col of a, j iterates through row of b.
            {//                       k specifies the row number and j specifies the element.
                c[i][j]+= a[i][k]*b[k][j]
            }
        }
    }
    cout <<"Result matrix is: "<<c<<endl;
}

// Question 3

int GottaLoveZero(int a[r][c];)
{
    row=sizeof(a)/sizeof(a[0]);
    col=sizeof(a[0])/sizeof(a[0][0]);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)// iterate through array.
        {
            if(a[i][j]==0)// find position of zero.
            {
                for(k=0;k<col;k++)
                {
                    a[i][k]=0;//make the entire column of that element zero.
                }
                for(int x=0;x<row;x++)
                {
                    a[x][j]=0;// make the col position element of each row zero.
                }
            }
        }
    }
}

// Question 4

int MyHill(int a;) // a is the input no.
{
    string s=to_string(a);
    int sorted[s.length];
    int list[s.length];
    for(int i=0;i<s.length(),i++;)// loop to run the size of string. A string can be interpreted as an array.
    {
        list[i]=int(s[i]);// stores each digit of the number as an element in an array.
    }
    for(int i=0;i<sizeof(list);i++)// iterating through the list.
    {
        if(list[i]==list[i+1])
        {
            cout<<"Given number is not a Hill Number."<<endl;
            return 0;
        }
    }
    sorted=list;
    for(int i=0;i<sizeof(sorted);i++)
    {
        for(int j=0;j<sizeof(sorted)-i;j++)
        {
            if(int(sorted[i])>int(sorted[j]))
            {
                swap(sorted[i],sorted[j);
            }
        }
    }
    int large=sorted[sorted.length-1];
    int pos;
    for(int i=0;i<sizeof(list);i++)
    {
        if(list[i]==large)
        {
            pos=list[i]
        }
        if(list[i]]>large)
        {
            if(i>pos)
            {
                cout<<"Given number is not a Hill Number"<<endl;
                return 0;
            }
        }
    }
    cout<<"Given number is a Hill Number"<<endl;
    return 0;
}

// Question 5

int Numbers(int n;)// a is the input number.
{
    int menu;
    cout<<"Enter 1,2,3 for hexadecimal, octal and binary respectively: ";
    cin>>menu;
    if(menu==0)// for hexadecimal.
    {
        string out;
        string ans;
        while(n!=0)
        {
            int temp=n%16; // Hexadecimals contain 16 characters.
            int store;
            if(temp<10)
            {
                store=temp+48;// calculating the alphabets to be used.
            }
            else
            {
                store=temp+55;
            }
            out+=char(store);
            n/=16;
        }
        int len=sizeof(out)
        string list[len];
        for(int i=0;i<len;i++;)// reversing the string to get the answer.
        {
            ans[i]=out[len-i];
        }
        for(int i=0;i<len;i++;)
        {
            cout<<ans[i];// printing the answer.
        }
        return 0;
    }
    else if(menu==1)// for octal.
    {
        int Octal[100];
        int i=0;
        while(n!=0)
        {
            Octal[i]=n%8;// storing remainders in list called octal.
            n/=8;
            i++;
        }
        for(int j=i-1;j>-1;j--)// Printing the answer.
        {
            cout<<Octal[j]<<;
        }
        return 0;
    }
    else if(menu==2)// For binary.
    {
        int binary[100];
        int i=0;
        while(n>0)
        {
            binary[i]=n%2;// Converting the number to binary.
            n/=2;
            i++;
        }
        for(int j=i-1;j>-1;j--)
        {
            cout<<binary[j];// Printing the number.
        }
        return 0;
    }
}

// Question 5 part 2

int Amicable(int a, int b)// For amicable numbers.
{
    int fact1[];// The list containing all the factors of first number (a).
    int fact2[];// The list containing all the factors of second number (b).
    int j=0;
    for(i==1;i<a;i++)
    {
        if(a%i==0)// Finding all the factors.
        {
            fact1[j]=i;
            j++;
        }
    }
    j=0;
    for(int i=1;i<b;i++)
    {
        if(b%i==0)
        {
            fact2[j]=i;
            j++;
        }
    }
    int sum1;
    int sum2;
    for(int i=0;i<sizeof(fact1);i++)
    {
        sum1+=fact1[i];
    }
    for(int i =0;i<sizeof(fact2);i++)
    {
        sum2+=fact2[i];
    }
    if(sum1==sum2)
    {
        cout<<"Given two numbers are amicable.";
        return 0;
    }
    else
    {
        cout<<"Given two numbers are not amicable."
        return 0;
    }
}

// Question 6
int SortHaiBhai()
{
    char menu;
    cout<<"Enter b or s for bubble sort and selection sort respectively: ";
	cin>>menu;
	int len;
	cout<<"Enter length of array: ";
	cin>> len;
	int arr[len];
    if(menu=="b")// Bubble Sort.
    {
        for(int i=0;i<len;i++)
        {
            cout<< "Enter element "<<i+1;
            cin>>arr[i];
        }
        for(int i=0;i<=len;i++)
        {
            arr[i]=arr[i];
        }
        for(int i=0;i<len;i++)
        {
            for(int j=0;j=n-1;j++)
            {
                if(arr[i]>arr[j])
                {
                    swap(arr,arr[j]);
                }
            }
        }
    }
    if(menu=="s")// Selection Sort.
	{
		for(int i=0;i<len;i++)
		{
		  cout<< "Enter element "<<i+1;
		  cin>>arr[i];
		}
		int i,j,min;
		for (i = 0; i < n-1; i++)
		  {
			  min = i;
			  for (j = i+1; j < n; j++)
			  if (arr[j] < arr[min])
				  min_idx = j;
			  if(min_idx!=i)
			  {
				  swap(&arr[min_idx], &arr[i]);
			  }
									  
		  }
	}
	cout<<"Sorted array: "<< arr;
}

// Question 7

string Pointy(char str[100];)
{
    char copy[100];
	char *strptr, *copyptr;
	strptr= &str;
	copyptr= &copy;
	while(*strptr)
	{
	  *copyptr = *strptr;
	  strptr++;
	  copyptr++;
	}
	*copystr="\0";
	cout<<"\nEntered String: "<<str;
	cout<<"\nCopied String: "<<copy<<endl;
	return 0;
}
									  
// Question 8

int MatrixMultiply(int a[][]; int b[][];)// a & b are matrix 1 and 2 respectively.
{
  int col1=sizeof(a[0])/sizeof(a[0][0]);
  int col2=sizeof(b[0])/sizeof(b[0][0]);
  int row1=sizeof(a)/sizeof(a[0]);
  int row2=sizeof(b)/sizeof(b[0]);
  int c[row1][col2];
  if(col1 != row2)
  {
	  cout<<"The given matrices are incompatible"<<endl;;
	  return 1;
  }
  for(int i=0;i<row1;i++)// for the row of a
  {
	  for(int j=0;j<col2;j++)// for col of b
	  {
		  c[i][j]=0;
		  for(int k=0;k<row2;k++)// final loop. As i iterates through col of a, j iterates through row of b.
		  {//                       k specifies the row number and j specifies the element.
			  c[i][j]+= a[i][k]*b[k][j]
		  }
	  }
  }
  cout <<"Result matrix is: "<<c<<endl;
}

void Transposer(int a[r][c])
{
	transpose[c][r];
	for(int i=0;i<c;i++)
	{
	  for(int j=0;j<r;j++)
	  {
		transpose[j][i]=a[i][j];
	  }
	}
    cout<<"The Transpose is: "<<transpose<<endl;
}
// Could not understand how to prove the identity :(								
// Question 9
 
 string Word(string str[r][];) // Here, I am assuming that every element of the matrix is a word.
 {
    for(int i=0;i<r;i++)
    {
        for(int k=0;k<str[i].length();k++)
        {
            for(int x=0;k<str[i].length()-k;x++)
            {
                if(int(str[i][k])>int(str[i][x])) // Here, I sorted each word in the 2d array as per ascii using bubble sort.
                {
                    char temp=str[i][x];
                    str[i][x]=str[i][k];
                    str[i][k]=temp;
                }
            }
        }
        for(int j=0;j<r-i;j++)
        {
            if(str[i].length()>str.[j].length())
            {
                swap(str[i],str[j]);// Sorting the list as per length of each word. Applied bubble sort.
            }
        }
    }
    for


 }
									  
// Question 10

int Fibo(int n;) // This function will have to be called from the main program.
{
    if(n==0 || n==1)
    {
        return n;
    }
    else
    {
        return Fibo((n-1)+(n-2));
    }
}

int main()//Call the function Fibo from here.
{
    int n=0;
    for(int i=0; i<40;i++)
    {
        cout<<Fibo(n)<<" ";
        n++;
        i++;
    }    
}
