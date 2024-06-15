import base64

class base64():
    def bease64_to_String(self, path):
        with open("path/to/your/image.jpg", "rb") as image_file:
            base64_string = base64.b64encode(image_file.read()).decode('utf-8')
        return base64_string
