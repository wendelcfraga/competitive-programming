

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  int impar=0, par=0;
  for (int i = 0; i < number_of_students; i++)
  {
    if (i%2 == 0)
    {
        par += marks[i];
    }
    else 
    {
        impar += marks[i];
    }
  }
  
  if (gender == 'b')
  {
      return par;
  }
  else if (gender == 'g')
  {
      return impar;
  }
  return 0;
}

