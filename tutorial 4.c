//C program to find sum of two vector as resultant vector,Compute magnitude and angle of resultant vector

#include<stdio.h>
#include<math.h>
int main() 
{
    // product of two vector array
    int a[20], b[20];
    int c[20],d[20];
    int n, i,e1=0;
    float magnitude,angle,a1,b1,c1;
    //getting a vector 
    printf("Enter Elements Of Vector A:\n");
    for(i = 0; i < 2; i++)
    scanf("%d", &a[i]);
    //getting b vector
    printf("Enter Elements Of Vector B:\n");
    for(i = 0; i < 2; i++)
    scanf("%d", &b[i]);
    // To preform vector addition
    for (i = 0; i < 2; i++)
        c[i] = a[i] + b[i];
    printf("Addition Vector:");
    for (i = 0; i < 2; i++)
    // printing the addition vector
        printf("%d ", c[i]);
        //to process the magnitude of vector
        magnitude=sqrt(pow(c[0],2)+pow(c[1],2));
        //print magnitude of vector
        printf("\n The Magnitude Of C Vector Is %f\n",magnitude);
        
        for(i=0;i<2;i++)
        {
            d[i]=a[i]*b[i];
            e1=e1+d[i];
        }
     
        a1=sqrt(pow(a[0],2)+pow(a[1],2));        
            printf("%f\n",a1);
        b1=sqrt(pow(b[0],2)+pow(b[1],2));        
            printf("%f\n",b1);
       
        c1=a1*b1;
        angle=e1/c1;
    //print the angle between the vectors
    printf("ANGLE BETWEEN VECTOR COS 0 = %f",angle);
     
   return 0;
}