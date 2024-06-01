import tkinter as tk

def CreateComponent(root):
    label = tk.Label(root, text = "Welcome use CNT for Python")
    label.pack(pady = 20)
    button = tk.Button(root, text = "Exit", command = button.Exit())
    button.pack(pady = 10)

class button():
    def Exit():
        exit(-200)
