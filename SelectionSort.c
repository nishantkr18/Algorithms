int selSort(int arr[])
{
    int n=5,c=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }

}
