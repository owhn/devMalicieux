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

$pourcentc1=($readc1/$rnbvote)*100;
$pourcentc2=($readc2/$rnbvote)*100;
$pourcentc3=($readc3/$rnbvote)*100;
$pourcentc4=($readc4/$rnbvote)*100;
$pourcentc5=($readc5/$rnbvote)*100;
$pourcentc6=($readc6/$rnbvote)*100;
$pourcentc7=($readc7/$rnbvote)*100;

echo "nb votants : ".$rnbvote."<br>"; //print du résultat (vérif)
echo "votes pour c1 : ".$pourcentc1."%<br>";
echo "votes pour c2 : ".$pourcentc2."%<br>";
echo "votes pour c3 : ".$pourcentc3."%<br>";
echo "votes pour c4 : ".$pourcentc4."%<br>";
echo "votes pour c5 : ".$pourcentc5."%<br>";
echo "votes pour c6 : ".$pourcentc6."%<br>";
echo "votes pour c7 : ".$pourcentc7."%<br>";




fclose($handle);
?>