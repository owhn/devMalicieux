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

    //suppression des commandes :
    $requeteSupCommande="DELETE FROM commande WHERE id_client='$idclient'";
    $bdd->query($requeteSupCommande);
    echo "nombre de commandes supprimées : ".$bdd->affected_rows."<br>";

    //suppression du client :
    $requeteSupClient="DELETE FROM client WHERE id_client='$idclient'";
    $bdd->query($requeteSupClient);
    if ($bdd->affected_rows>=1){
        echo "client supprimé";
    }


}
else{
    echo "le client n'existe pas <br>";
}




$bdd->close();
?>