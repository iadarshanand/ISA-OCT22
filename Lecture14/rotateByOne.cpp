
problem link:- https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

void rotate(int arr[], int n)
{
    int temp=arr[n-1];
    for(int i=n-1;i>=1;i--)arr[i]=arr[i-1];
    arr[0]=temp;
}