struct Some_error{};

void f()
{
  try {
    g();
  }
  catch(Some_error e) {
   
  }
}

void g()
{
  if (1)
    throw Some_error{}; 
}
