var sRouge=document.getElementById("sliderRouge");
var outRouge=document.getElementById("resultatRouge");

var sVert=document.getElementById("sliderVert");
var outVert=document.getElementById("resultatVert");

var sBleu=document.getElementById("sliderBleu");
var outBleu=document.getElementById("resultatBleu");

var rouge=sRouge.value;
var vert=sVert.value;
var bleu=sBleu.value;

var result=document.getElementById("blocCouleur");


var radioCata=document.getElementById("catalogue");
var radioPersonnel=document.getElementById("personnel");
var personnelDiv=document.getElementById("personnelDiv");
var cataDiv=document.getElementById("catalogueDiv");

result.style.backgroundColor = "rgb(" + rouge + "," + vert + "," + bleu + ")"; //initialiser la couleur du bloc au démarrage du site en prenant en compte les valeurs initiales des sliders


function choixCata(){ // changer au choix catalogue
    document.getElementById("catalogueDiv").disabled=false;
    document.getElementById("sliderRouge").disabled=true;
    document.getElementById("sliderBleu").disabled=true;
    document.getElementById("sliderVert").disabled=true;
    cataCouleur();
}

function choixPerso(){ //changer au choix perso
    document.getElementById("catalogueDiv").disabled=true;
    document.getElementById("sliderRouge").disabled=false;
    document.getElementById("sliderBleu").disabled=false;
    document.getElementById("sliderVert").disabled=false;
    blocCouleur(); 
}

outRouge.value=sRouge.value; //initialiser les valeurs des sliders affichées au démarrage du site
outVert.value=sVert.value;
outBleu.value=sBleu.value;
function blocCouleur(){ 
    outRouge.value=sRouge.value;
    outVert.value=sVert.value;
    outBleu.value=sBleu.value;
    rouge=sRouge.value;
    vert=sVert.value;
    bleu=sBleu.value;
    result.style.backgroundColor = "rgb(" + rouge + "," + vert + "," + bleu + ")";
}

function blocCata(){
    outRouge.value=rouge;
    sRouge.value=rouge;
    outVert.value=vert;
    sVert.value=vert;
    outBleu.value=bleu;
    sBleu.value=bleu;
    result.style.backgroundColor = "rgb(" + rouge + "," + vert + "," + bleu + ")";
}

function cataCouleur(){
    switch (document.getElementById("catalogueDiv").value){
        case "Rouge" :
            //document.getElementById("blocCouleur").style.backgroundColor="red";
            rouge=255;
            vert=0;
            bleu=0;
            blocCata();
            break;
        case "Jaune" :
            //document.getElementById("blocCouleur").style.backgroundColor="yellow";
            rouge=255;
            vert=255;
            bleu=0;
            blocCata();
            break;
        case "Vert" :
            //document.getElementById("blocCouleur").style.backgroundColor="green";
            rouge=0;
            vert=255;
            bleu=0;
            blocCata();
            break;
        case "Bleu" :
            //document.getElementById("blocCouleur").style.backgroundColor="blue";
            rouge=0;
            vert=0;
            bleu=255;
            blocCata();
            break;
    }
}




var cyan=0;
var magenta=0;
var yellow=0;
var key=0;