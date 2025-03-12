import random
scoreP=0
scoreR=0
while scoreP<3 and scoreR<3:
    p=str(input("Pierre, Feuille ou Ciseaux ?"))
    if p=="Pierre": p=1
    elif p=="Feuille": p=2
    elif p=="Ciseaux": p=3
    else : print("tu t'es trompé enculé(et le puit existe pas)")
    r=random.randint(1,3)
    if p==1 and r==2:
        scoreR+=1
        print("ROBOT GAGNE : ",scoreP," - ", scoreR," pour toi")
    elif p==2 and r==3:
        scoreR+=1
        print("ROBOT GAGNE : ",scoreP," - ", scoreR," pour toi")
    elif p==3 and r==1:
        scoreR+=1
        print("ROBOT GAGNE : ",scoreP," - ", scoreR," pour toi")
    elif p==1 and r==3:
        scoreP+=1
        print("TU GAGNES : ",scoreP," - ", scoreR," pour toi")
    elif p==2 and r==1:
        scoreP+=1
        print("TU GAGNES : ",scoreP," - ", scoreR," pour toi")
    elif p==3 and r==2:
        scoreP+=1
        print("TU GAGNES : ",scoreP," - ", scoreR," pour toi")
    elif p==1 and r==1 or p==2 and r==2 or p==3 and r==3:
        print("EGALITE POUR CETTE MANCHE",scoreP," - ",scoreR)
if scoreP==3: print("BRAVO TU AS GAGNE 3 à ",scoreR) 
else: print("T'ES NUL TU AS PERDU ",scoreP," à 3")