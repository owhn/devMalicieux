var centainePlus=document.getElementById("centainePlus");
var resultat=document.getElementById("debit");
resultat.value=parseInt(0);
var a=0;
centainePlus.onclick=function(){
    a=a+parseInt(100);
    resultat.value=a+"ml/h"
};

var centaineMoins=document.getElementById("centaineMoins");
centaineMoins.onclick=function(){
    a=a+parseInt(-100);
    resultat.value=a+"ml/h"
    if(a<0) {
        resultat.value=0+"ml/h";
        a=parseInt(0);
    }
};

var dizainePlus=document.getElementById("dizainePlus");
dizainePlus.onclick=function(){
    a=a+parseInt(10);
    resultat.value=a+"ml/h"
};

var dizaineMoins=document.getElementById("dizaineMoins");
dizaineMoins.onclick=function(){
    a=a+parseInt(-10);
    resultat.value=a+"ml/h"
    if(a<0) {
        resultat.value=0+"ml/h";
        a=parseInt(0);
    }
};

var unitePlus=document.getElementById("unitePlus");
unitePlus.onclick=function(){
    a=a+parseInt(1);
    resultat.value=a+"ml/h"
};

var uniteMoins=document.getElementById("uniteMoins");
uniteMoins.onclick=function(){
    a=a+parseInt(-1);
    resultat.value=a+"ml/h"
    if(a<0) {
        resultat.value=0+"ml/h";
        a=parseInt(0);
    }
};