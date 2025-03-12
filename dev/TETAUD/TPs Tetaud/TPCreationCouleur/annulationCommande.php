<?php

$bdd= new mysqli('10.187.52.4','brissauda', 'brissauda', 'brissauda_b');
if ($bdd->connect_errno) {
    echo "échec de la connexion";
    exit();
}
echo "Connexion à la BDD réussie"."<br>"."<br>";
echo "<h2 style='color:red;'>BIENVENUE</h2>";

$nom=$_GET['nom'];
$prenom=$_GET['prenom'];
$adresse=$_GET['adresse'];

echo $nom."<br>";
echo $prenom."<br>";
echo $adresse."<br>"."<br>";
$requete="SELECT * FROM client 
WHERE nom='$nom' AND prenom='$prenom' AND adresse='$adresse'";
$bdd->query($requete);
$resClient=$bdd->query($requete);
if ($bdd->affected_rows>=1){   
    echo "le client existe <br>";
    $ligneClient=$resClient->fetch_assoc();
    $idclient=$ligneClient['id_client'];
    echo $idclient."<br>";

    $selectLastCommande="SELECT * FROM commande WHERE id_client=$idclient ORDER BY prep DESC LIMIT 1";
    $bdd->query($selectLastCommande);
    $resCommande=$bdd->query($selectLastCommande);

    $ligneCommande=$resCommande->fetch_assoc();
    $idcommande=$ligneCommande['id_commande'];
    $cnoir=$ligneCommande['nb_noir'];
    $cblanc=$ligneCommande['nb_blanc'];
    $ccyan=$ligneCommande['nb_cyan'];
    $cmagenta=$ligneCommande['nb_magenta'];
    $cyellow=$ligneCommande['nb_yellow'];

    echo "id commande : $idcommande<br>";
    echo "quantité de noir commandée : ".$cnoir."cL<br>";
    echo "quantité de blanc commandée : ".$cblanc."cL<br>";
    echo "quantité de cyan commandée : ".$ccyan."cL<br>";
    echo "quantité de magenta commandée : ".$cmagenta."cL<br>";
    echo "quantité de jaune commandée : ".$cyellow."cL<br>";

    $selectstock="SELECT * FROM stock";
    $bdd->query($selectstock);

    $resStock=$bdd->query($selectstock);
    $ligneStock=$resStock->fetch_assoc();

    $qnoir=$ligneStock['quantite_noir'];
    $qblanc=$ligneStock['quantite_blanc'];
    $qcyan=$ligneStock['quantite_cyan'];
    $qmagenta=$ligneStock['quantite_magenta'];
    $qjaune=$ligneStock['quantite_yellow'];
    echo "<br>stock :<br>quantité de noir : ".$qnoir."cL<br>"; 
    echo "quantité de blanc : ".$qblanc."cL<br>"; 
    echo "quantité de cyan : ".$qcyan."cL<br>"; 
    echo "quantité de magenta : ".$qmagenta."cL<br>"; 
    echo "quantité de jaune : ".$qjaune."cL<br>";


    $qblanc=$qblanc+$cblanc;
    $qnoir=$qnoir+$cnoir;
    $qjaune=$qjaune+$cyellow;
    $qcyan=$qcyan+$ccyan;
    $qmagenta=$qmagenta+$cmagenta;

    echo "<br>stock après la modification :<br>quantité de noir : ".$qnoir."cL<br>"; 
    echo "quantité de blanc : ".$qblanc."cL<br>"; 
    echo "quantité de cyan : ".$qcyan."cL<br>"; 
    echo "quantité de magenta : ".$qmagenta."cL<br>"; 
    echo "quantité de jaune : ".$qjaune."cL<br>";

    

    $requeteUpdateStock="UPDATE stock SET quantite_noir=$qnoir, quantite_blanc=$qblanc, quantite_yellow=$qjaune, quantite_cyan=$qcyan, quantite_magenta=$qmagenta WHERE 1";
    $bdd->query($requeteUpdateStock);

    if ($bdd->affected_rows>=1){
        echo "stock mis à jour<br>";
    }




    $supClient="DELETE FROM `commande` WHERE id_client=$idclient ORDER BY prep DESC LIMIT 1";
    $bdd->query($supClient);
    if ($bdd->affected_rows>=1){
        echo "client supprimé";
    }




}
else{
    echo "le client n'existe pas <br>";
}



$bdd->close();
?>