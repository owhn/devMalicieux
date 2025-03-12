<?php
echo "resultats";
$handle = fopen("vote.txt","r+");       //$handle est la variable attachée au fichier vote.txt
if ($handle==TRUE)echo "OK";
else echo "NOK";
echo "<br>";



$positionNbVote=ftell($handle);     // $positionNbVote est la position du pointeur pour le nb de votes
$rnbvote=fgets($handle);            // $rnbvote est le nombre de votes, après "fgets", le pointeur se déplace du nombre de valeurs lues et retourne à la ligne automatiquement 


$positionc1=ftell($handle);        // $positionc1 est la position de c1
$readc1=fgets($handle);            // $readc1 est le nb de votes lus sur le fichier vote.txt pour le candidat 1


$positionc2=ftell($handle);
$readc2=fgets($handle);

$positionc3=ftell($handle);
$readc3=fgets($handle);

$positionc4=ftell($handle);
$readc4=fgets($handle);

$positionc5=ftell($handle);
$readc5=fgets($handle);

$positionc6=ftell($handle);
$readc6=fgets($handle);

$positionc7=ftell($handle);
$readc7=fgets($handle);


$nbvote=$rnbvote;
$c1=$readc1;
$c2=$readc2;
$c3=$readc3;
$c4=$readc4;
$c5=$readc5;
$c6=$readc6;
$c7=$readc7;


$bouton=$_POST["bouton"];
if(1==1){
    switch ($bouton){
        case 1:
            $c1=$readc1+1;
            fseek($handle,$positionc1);
            fwrite($handle,$c1);
            break;

        case 2:
            $c2=$readc2+1;
            fseek($handle,$positionc2);
            fwrite($handle,$c2);
            break;
        
        case 3:
            $c3=$readc3+1;
            fseek($handle,$positionc3);
            fwrite($handle,$c3);
            break;
        
        case 4:
            $c4=$readc4+1;
            fseek($handle,$positionc4);
            fwrite($handle,$c4);
            break;

        case 5:
            $c5=$readc5+1;
            fseek($handle,$positionc5);
            fwrite($handle,$c5);
            break;

        case 6:
            $c6=$readc6+1;
            fseek($handle,$positionc6);
            fwrite($handle,$c6);
            break;
        
        case 7:
            $c7=$readc7+1;
            fseek($handle,$positionc7);
            fwrite($handle,$c7);
            break;
        
    }
}
$nbvote=$nbvote+1;
fseek($handle,$positionNbVote);
fwrite($handle,$nbvote);


echo "nb votants : ".$nbvote."<br>"; //print des résultat (vérif)
echo "c1 : ".$c1."<br>";
echo "c2 : ".$c2."<br>";
echo "c3 : ".$c3."<br>";
echo "c4 : ".$c4."<br>";
echo "c5 : ".$c5."<br>";
echo "c6 : ".$c6."<br>";
echo "c7 : ".$c7."<br>";




fclose($handle);

//et je redirige directement à mon code php qui donne les résultats sans calcul 
//pour ne pas ajouter de vote quand je reload la page :
header('Location: http://127.0.0.1/dev/TETAUD/TP%20sem1/TP%20vote/vote.html');
  exit();
?>