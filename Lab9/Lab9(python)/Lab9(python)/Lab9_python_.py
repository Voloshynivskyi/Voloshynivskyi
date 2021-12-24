def pidrahunoksliv (string):
    return string.count (" ") + 1


def rezultat (ryadok, ryadok_rezultat):
    ryadok60 = [" " for _ in range (ryadok_rezultat)]
    kilkistsliv = pidrahunoksliv(ryadok)
    if pidrahunoksliv(ryadok)<2:
        if len (ryadok)>60:
            print ("Помилка! Замало слів та забагато символів! В рядку може бути максимум 60 символів!\n")
            exit(0)
    if pidrahunoksliv(ryadok)<2:
        print ("Помилка! Замало слів!\n")
        exit(0)
    if len (ryadok)>60:
        print ("Помилка! Забагато символів! В рядку може бути максимум 60 символів!\n")
        exit(0)
    
    probil = (ryadok_rezultat - len (ryadok) + kilkistsliv - 1) // (kilkistsliv - 1)
    pamyat = ryadok_rezultat - (probil * (kilkistsliv - 1)) - len (ryadok) + kilkistsliv - 1
    ryadok60_pokaznik = 0;
    for ryadok_pokaznik in range (len (ryadok)):
        if ryadok[ryadok_pokaznik] != " ":
            ryadok60[ryadok60_pokaznik] = ryadok[ryadok_pokaznik]
            ryadok60_pokaznik += 1
        else:
            kilkist_probiliv = probil
            if pamyat > 0:
                kilkist_probiliv += 1
                pamyat -= 1
            else:
                pass
            ryadok60_pokaznik += kilkist_probiliv
    return "".join (ryadok60)



ryadok_rezultat = 60
vvid = input("Введіть рядок:\n")
print ("Отриманий рядок:\n",rezultat (vvid, ryadok_rezultat))
print ("До рядка було додано ",ryadok_rezultat - len(vvid)," пробілів")