class capteur:
    def __init__(self, type, number, position):
        self.type = type
        self.number = number
        self.position = position

    def get_info(self):
        print(f"Hello i'm the {self.number} {self.type} captor, at position {self.position}")

captor1 = capteur(type = "myoélectrique", number = int(1), position = "coude")
captor2 = capteur(type = "myoélectrique", number = int(2), position = "bout_muscle")
captor3 = capteur(type = "myoélectrique", number = int(3), position = "milieu_muslce")

captor_list = []
captor_list.append(captor1)
captor_list.append(captor2)
captor_list.append(captor3)

for captor in captor_list:
    captor.get_info()
