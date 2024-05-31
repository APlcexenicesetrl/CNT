import customtkinter

customtkinter.set_appearance_mode("dark")
customtkinter.set_default_color_theme("dark-blue")

root = customtkinter.CTk()
root.geometry("500x350")

def login():
    print("This is a window")

frame = customtkinter.CTkFrame(mester = root)
frame.pack(oady=20, padx=60, fill="both", expand=True)

label = customtkinter.CTkLabel(master=frame, text="Login System", text_font=("Robot"))
label.pack(pady=12, padx=10)

entry1 = customtkinter.CTkEntry(master=frame, placeholder_text="UserName")