var x=25;       //Global
document.write(x);
function fun()
{
    document.write(x);
    var x=50;   //Local
    document.write(x);
}
fun();
document.write(x);