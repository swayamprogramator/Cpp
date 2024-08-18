#include<iostream>
using namespace std;
 
int main()
{
    int mat1[3][3], mat2[3][3], mat3[3][3];
 
    /* Initializing Mat1 and Mat2 */
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat1[i][j] = i + 1;
            mat2[i][j] = j + 1;		
        }
    }
 
    /* Adding matrices Mat1 and Mat2 */
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat3[i][j] = mat2[i][j] - mat1[i][j];	
        }
    }
 
    cout << "First Matrix : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat1[i][j] << "\t";	
        }
        cout << endl;
    }
 
    cout << "Second Matrix : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat2[i][j] << "\t";	
        }
        cout << endl;
    }
 
    cout << "Third Matrix = Second Matrix - First Matrix : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat3[i][j] << "\t";	
        }
        cout << endl;
    }
}
ADVERTISEMENT


$ g++ main.cpp
$ ./a.out
First Matrix : 
1	1	1	
2	2	2	
3	3	3	
Second Matrix : 
1	2	3	
1	2	3	
1	2	3	
Third Matrix = Second Matrix - First Matrix : 
0	1	2	
-1	0	1	
-2	-1	0
Sanfoundry Global Education & Learning Series – 1000 C++ Programs.


advertisement

If you wish to look at all C++ Programming examples, go to C++ Programs.

If you find any mistake above, kindly email to enquiry@sanfoundry.com
« Prev - C++ Program to Add Two Matrices» Next - C++ Program to Check if a Matrix is Diagonal Matrix
Related Posts:

Practice Computer Science MCQs
Apply for C++ Internship
Apply for Computer Science Internship
Check C++ Books
Practice Programming MCQs
advertisement
ADVERTISEMENT

Recommended Articles:
C# Program to Subtract Two Matrices
C Program to Subtract Two Matrices
C++ Program to Find Transpose of a 3 x 3 Matrix
C++ Program to Add Two Matrices
C++ Program to Check Multiplicability of Two Matrices
C++ Program to Find Dot Product of Two Matrices
C Program to Perform Addition, Subtraction and Trace of 2 Matrices
C Program to Find Sum and Difference of Two Matrices
C Program to Check if Two Matrices are Equal
C Program to Check Multiplicability of Two Matrices
advertisement
ADVERTISEMENT

Additional Resources:
C++ Matrix Programs
C Programs on Matrix
Java Matrix Programs
C# Programs on Events
C# Programs
Popular Pages:
C++ Programs
C++ Algorithm Library
C# Programs on Functions
C# Interface Examples
C# Programs on Threads

Subscribe to our Newsletters (Subject-wise). Participate in the Sanfoundry Certification contest to get free Certificate of Merit. Join our social networks below and stay updated with latest contests, videos, internships and jobs!

Youtube | Telegram | LinkedIn | Instagram | Facebook | Twitter | Pinterest
Manish Bhojasia - Founder & CTO at SanfoundryManish Bhojasia, a technology veteran with 20+ years @ Cisco & Wipro, is Founder and CTO at Sanfoundry. He lives in Bangalore, and focuses on development of Linux Kernel, SAN Technologies, Advanced C, Data Structures & Alogrithms. Stay connected with him at LinkedIn.

Subscribe to his free Masterclasses at Youtube & discussions at Telegram SanfoundryClasses.
.

About | Certifications | Internships | Jobs | Privacy Policy | Terms | Copyright | Contact
© 2011-2024 Sanfoundry. All Rights Reserved.
Scroll back to top
Branchwise MCQs
School MCQs
DSA
Test
Job
Internship
Training
Videos
Books
Contact
C++ Programming
C++ Programs
C++ Programs - Array
C++ Programs - Matrix
C++ Programs - Matrix Types
C++ Programs - File Handling
C++ Resources
