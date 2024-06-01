# CNT Of Python

import tkinter as tk

class button():

    def Exit():
        exit(-200)

# Create the main window
root = tk.Tk()
root.title("CNT About")
root.geometry("400x300")

# Create a label
label = tk.Label(root, text = "Welcome use CNT for Python")
label.pack(pady = 20)

# Create a button
button = tk.Button(root, text = "Exit", command = button.Exit())
button.pack(pady = 10)

# Run the application
root.mainloop()
