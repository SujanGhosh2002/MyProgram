var array=[10, 50, 20, 40, 30];

    document.write("Array: "+array+"<br/>");
    var x = array.find(checkValue);
    document.write("Check: "+x+"<br/>");
    function checkValue(age)
    {
        return age>=18;
    }
