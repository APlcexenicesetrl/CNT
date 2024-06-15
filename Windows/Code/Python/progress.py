# Progress
class progress:
    def __init__(self, min, max, themeRaw):
        self.min = min
        self.pos = min
        self.max = max
        self.theme = themeRaw
        
    def setup(self, setup):
        temp = self.pos + setup
        if not(temp > self.max or temp < self.min):
            self.pos = temp
        else:
            return "ERROR:ValueOut_of_Bounds"
