var decimal,reste,result,quotient;

hexa=[];
decimal=parseInt(prompt("valeur positive"));
while(decimal<0){
    decimal=parseInt(prompt("valeur POSITIVE"));
}

var p=parseInt(9);

while(decimal<=Math.pow(16, p)){
    p=p-1;
}

console.log(p)
alert(p);

while (p>0){
    reste=decimal%Math.pow(16, p);
    quotient=(decimal-reste)/Math.pow(16, p);
    console.log("quotient",quotient);
    console.log("reste",reste);
    decimal=reste;

    conv_dec_hexa(quotient);
    p=p-1;
}

conv_dec_hexa(reste);

function conv_dec_hexa(val){
    if (val<=9)
        hexa.push(val);
    else if(val==10) hexa.push("A");
    else if(val==11) hexa.push("B");
    else if(val==12) hexa.push("C");
    else if(val==13) hexa.push("D");
    else if(val==14) hexa.push("E");
    else if(val==15) hexa.push("F");
}

console.log(hexa);
alert("0x"+hexa);