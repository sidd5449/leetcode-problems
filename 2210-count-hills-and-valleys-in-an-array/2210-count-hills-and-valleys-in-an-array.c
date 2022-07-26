

int countHillValley(int* nums, int numsSize){
    int i=0,j=0;;
    int out=0;
    int flag =0;

    for (i=1;i<numsSize-1;i++)
    {
      if(nums[i]==0)continue;
      if(nums[i-1]==nums[i]) continue;

      for (j=i-1;j>=0;j--)
      {

         if(nums[j]==0) continue; 

        if (nums[j]>nums[i])  flag=0;
        else flag=1;
        break;
      }


      for (j=i+1;j<numsSize;j++)
      {
          if(nums[j]==nums[i])
          {
              nums[j]=0;
          }
          else
          {
           if (flag==0)
           {
              if(nums[j]>nums[i])
              {
                  out++;
              }
           }
           else
           {
               if(nums[j]<nums[i])
               {
                   out++;
               }

           }
              break;
          }
      }
    }

    return out;
}