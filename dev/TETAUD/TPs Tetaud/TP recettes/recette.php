<?php 

    $bdd= new mysqli('10.187.52.4','brissauda', 'brissauda', 'brissauda_b');
    if ($bdd->connect_errno) {
        echo "échec de la connexion";
        exit();
    }
    echo "Connexion à la BDD réussie";
    


?>