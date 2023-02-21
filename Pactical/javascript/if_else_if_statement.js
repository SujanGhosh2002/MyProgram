var marks=75;
if (marks<=100 && marks>=90) 
{
    document.write("<b>O</b>(Outstanding)");
} 
else if (marks<90 && marks>=80)
{
    document.write("<b>A+</b>(Excellent)");
}
else if (marks<80 && marks>=70)
{
    document.write("<b>A</b>(Very Good)");
}
else if (marks<70 && marks>=60)
{
    document.write("<b>B+</b>(Good)");
}
else if (marks<60 && marks>=50)
{
    document.write("<b>B</b>(Above Average)");
}
else if (marks<50 && marks>=40)
{
    document.write("<b>C</b>(Average)");
}
else if (marks<40 && marks>=30)
{
    document.write("<b>P</b>(Pass)");
}
else if (marks<30 && marks>=00)
{
    document.write("<b>F</b>(Fail)");
}
else 
{
    document.write("<b>AA</b>(Absent)");
}