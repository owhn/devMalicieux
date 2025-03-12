var rRouge=document.getElementById("rangeRouge");
var outRouge=document.getElementById("vRouge");
var result=document.getElementById("resultat");
rRouge.onclick =function(){
outRouge.value=rRouge.value;
calcul();
};
var vert=0;
var bleu=0;
var rouge=255;
function calcul(){
rouge=rRouge.value;
result.style.backgroundColor = "rgb(" + rouge + "," + vert + "," + bleu + ")";
}; 