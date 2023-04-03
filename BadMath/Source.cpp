8.	#include <iostream>
9.	#include <iomanip>
10.	using namespace std;
11.	
12.	double average(double num, double numTw, double numTh)//changed to doublw
13.	{
14.	
15.		double avg = 0.0;
16.		
17.		avg = (num + numTw + numTh)/3;
18.		return avg;
19.	}
20.	
21.	int main()
22.	{  
23.		double num = 0.0;
24.		double numTw = 0.0; 
25.		double numTh = 0.0;
26.		double avg =0.0;
27.		cout << setprecision(2) << fixed << showpoint;
28.		cout << " This is a program to calculate the average of three numbers" << endl;
29.		cout << " Enter the first Number:";
30.			cin >> num;
31.			cout << " Enter the second Number:";
32.			cin >> numTw;
33.			cout << " Enter the third Number:";
34.			cin >> numTh;
35.			avg = average(num, numTw, numTh);
36.	
37.			cout << "Here is your average" << endl;
38.			cout << avg;
39.		return 0;
40.	}
