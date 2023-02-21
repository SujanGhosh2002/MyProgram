var human={
    fname:"Sujan",
    lname:"Ghosh",
    age:20,
    email:"ghoshsujon420@gmail.com",
    mobile:7384505581,
    income: function()
    {
        return 00000;
    },
    name: function()
    {
        return this.fname+" "+this.lname;
    }
};
console.log(human);
document.write("First Name: "+human.fname);
document.write("<br/>");
document.write("Last Name: "+human.lname);
document.write("<br/>");
document.write("Age: "+human.age);
document.write("<br/>");
document.write("Email: "+human.email);
document.write("<br/>");
document.write("Mobile: "+human.mobile);
document.write("<br/>");
document.write("Income: "+human.income());
document.write("<br/>");
document.write("Income: "+human.name());
document.write("<br/><br/>");

var human=new Object();
human.fname="Sujan";
human.lname="Ghosh";
human.age=20;
human.email="ghoshsujon420@gmail.com";
human.mobile=7384505581;
document.write("First Name: "+human.fname);
document.write("<br/>");
document.write("Last Name: "+human.lname);
document.write("<br/>");
document.write("Age: "+human.age);
document.write("<br/>");
document.write("Email: "+human.email);
document.write("<br/>");
document.write("Mobile: "+human.mobile);
document.write("<br/>");