nt main()
{
    int * ip;
    long * lp;
    char * cp;
    float * fp;
    double * dp;
 
    std::cout << "Datatype  " << "Pointer Size\n" << std::endl
	      << " int" << std::setw(12) << sizeof(ip) << std::endl
              << " long" << std::setw(11)<< sizeof(lp) << std::endl
	      << " char" << std::setw(11) << sizeof(cp) << std::endl
	      << " float" << std::setw(10) << sizeof(fp) << std::endl
              << " double" << std::setw(9) << sizeof(dp) << std::endl;
   return 0;	
}