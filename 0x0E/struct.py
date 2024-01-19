class User:
    def __init__(self, name="", email="", age=0):
        self.name = name
        self.email = email
        self.age = age


def main():
    user = User()
    
    user.name = "Eto"
    user.email = "eto@gmail.com"
    user.age = 18

    print(user.__dict__)