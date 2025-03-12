<?php

$bdd= new mysqli('10.187.52.4','brissauda', 'brissauda', 'brissauda_b');
if ($bdd->connect_errno) {
    echo "échec de la connexion";
    exit();
}
echo "Connexion à la BDD réussie"."<br>"."<br>";
echo "<h2 style='color:red;'>BIENVENUE</h2>";


$vrouge=$_GET['valeurRouge'];
$vvert=$_GET['valeurVert'];
$vbleu=$_GET['valeurBleu'];
$quantite=$_GET['quantite'];

echo "qtt : ".$quantite."<br>";

$rouge=$vrouge/255;
$vert=$vvert/255;
$bleu=$vbleu/255;


$pnoir = 1 - max($bleu, $rouge, $vert);
if ($pnoir != 1) {
    $pcyan = (1 - $rouge - $pnoir) / (1 - $pnoir);
    $pjaune = (1 - $bleu - $pnoir) / (1 - $pnoir);
    $pmagenta = (1 - $vert - $pnoir) / (1 - $pnoir);  // OK 
    
    // Pourcentage
    $pnoir = $pnoir * 100;
    $pcyan = $pcyan * 100;
    $pmagenta = $pmagenta* 100;
    $pjaune = $pjaune * 100;              
   
    $pblanc = 100 - $pnoir;                 

    // proportion de chaque couleur 
     echo '<br> cyan : ' . $pcyan."%";
     echo '<br> magenta : ' . $pmagenta."%";
     echo '<br> jaune : ' . $pjaune."%";
     echo '<br> noir : ' . $pnoir."%";
     echo '<br> blanc : ' . $pblanc."%"."<br>";
    } 
    else {
        $pblanc = 0;
        $pnoir = 100;
        $pcyan = 0;
        $pmagenta = 0;
        $pjaune = 0;
        echo '<br> cyan : ' . $pcyan."%";
        echo '<br> magenta : ' . $pmagenta."%";
        echo '<br> jaune : ' . $pjaune."%";
        echo '<br> noir : ' . $pnoir."%";
        echo '<br> blanc : ' . $pblanc."%"."<br>";
    }

//calcul des quantités demandées par le client :

$commandeblanc=$pblanc*$quantite;
$commandenoir=$pnoir*$quantite;
$commandejaune=$pjaune*$quantite;
$commandecyan=$pcyan*$quantite;
$commandemagenta=$pmagenta*$quantite;
echo "commande blanc : ".$commandeblanc."cL<br>";
echo "commande noir : ".$commandenoir."cL<br>";
echo "commande jaune : ".$commandejaune."cL<br>";
echo "commande cyan : ".$commandecyan."cL<br>";
echo "commande magenta : ".$commandemagenta."cL<br>";


$nom=$_GET['nom'];
$prenom=$_GET['prenom'];
$adresse=$_GET['adresse'];

echo $nom."<br>";
echo $prenom."<br>";
echo $adresse."<br>"."<br>";
//echo '<blockquote class="imgur-embed-pub" lang="en" data-id="sNqKhOb"><a href="https://imgur.com/sNqKhOb">View post on imgur.com</a></blockquote><script async src="//s.imgur.com/min/embed.js" charset="utf-8"></script>';



$requete="SELECT * FROM stock";
$bdd->query($requete);
echo $bdd->affected_rows."<br>";

$res=$bdd->query($requete);


//verifier l'état des stocks
if ($res==TRUE){    
    $ligne=$res->fetch_assoc();
    echo "fin requete"."<br>";
    $idstock=$ligne['id_stock'];
    $qnoir=$ligne['quantite_noir'];
    $qblanc=$ligne['quantite_blanc'];
    $qcyan=$ligne['quantite_cyan'];
    $qmagenta=$ligne['quantite_magenta'];
    $qjaune=$ligne['quantite_yellow'];
    echo "quantité de noir : ".$qnoir."cL<br>"; 
    echo "quantité de blanc : ".$qblanc."cL<br>"; 
    echo "quantité de cyan : ".$qcyan."cL<br>"; 
    echo "quantité de magenta : ".$qmagenta."cL<br>"; 
    echo "quantité de jaune : ".$qjaune."cL<br>";
}
else {
    echo "ERREUR REQUETE";
}

//vérifier si le client existe :
$requete="SELECT * FROM client 
WHERE nom='$nom' AND prenom='$prenom' AND adresse='$adresse'";

$res=$bdd->query($requete);
if ($bdd->affected_rows>=1){
    echo "L'EAU EST REVENUE";
}
else {
    echo "NOOOOOOOOOOOOOOON";
    $requete="INSERT INTO client (id_client,nom,prenom,adresse)
    VALUES(NULL,'$nom','$prenom','$adresse')";
    $res=$bdd->query($requete);
}
$ligne=$res->fetch_assoc();
$idclient=$ligne['id_client'];
echo "<br>".$idclient."<br>";


//retirer les couleurs si les stocks sont suffisants :


if ($qnoir>=$commandenoir AND $qblanc>=$commandeblanc AND $qcyan>=$commandecyan AND $qjaune>=$commandejaune AND $qmagenta>=$commandemagenta){    
    echo "stock suffisant, modification du stock :"."<br>";
    $qnoir=$qnoir-$commandenoir;
    $qblanc=$qblanc-$commandeblanc;
    $qjaune=$qjaune-$commandejaune;
    $qcyan=$qcyan-$commandecyan;
    $qmagenta=$qmagenta-$commandemagenta;
    echo "quantité de noir : ".$qnoir."cL<br>"; 
    echo "quantité de blanc : ".$qblanc."cL<br>"; 
    echo "quantité de cyan : ".$qcyan."cL<br>"; 
    echo "quantité de magenta : ".$qmagenta."cL<br>"; 
    echo "quantité de jaune : ".$qjaune."cL<br>";
    $rqmodif="UPDATE stock SET quantite_noir=$qnoir, quantite_blanc=$qblanc, quantite_yellow=$qjaune, quantite_cyan=$qcyan, quantite_magenta=$qmagenta WHERE 1";
    $bdd->query($rqmodif);

    //création de la commande :

    $rqcommande="INSERT INTO commande (id_commande,id_client,id_stock,nb_blanc,nb_noir,nb_cyan,nb_magenta,nb_yellow,prep) 
                VALUES (NULL, $idclient, $idstock, $commandeblanc, $commandenoir, $commandecyan, $commandemagenta, $commandejaune, NOW())";
    $bdd->query($rqcommande);
}
else{
    echo "stock insuffisant, échec de la commande.";
}













$bdd->close();
?>