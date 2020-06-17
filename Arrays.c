#include <Stdio.h>
#include <cs50.h>

int main(void)
{
int count;
int Scores[count]=0;
count = get_int("Enter number of Scores: ");

for(int i=0;i < count; i++)
  {
  Scores[i]=get_int("Score %i", i+1);
  }
  printf("The Average score is %f", average(count, scores[]);
}

float average(int count, int scores[])
{
  Float sum;

for (int i=0; i < count; i++)
  {
    (sum =+ Scores[i]);
  }
  retrun sum/count;
}
