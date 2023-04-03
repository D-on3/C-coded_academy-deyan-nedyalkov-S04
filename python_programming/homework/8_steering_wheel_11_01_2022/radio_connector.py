class RadioConnector:
    def __init__(self, volume=100, right_front=None, left_front=None, right_rear=None, left_rear=None, antena=None):
        self.front_speakers = [right_front, left_front]
        self.rear_speakers = [right_rear, left_rear]
        self.antenna = antena
        self.volume = volume

    def get_volume(self):
        return self.volume

    def volume_down(self):
        self.volume = self.volume - 1
        print(f"Volume decreased current volume {self.get_volume()}")

    def volume_up(self):
        self.volume = self.volume + 1
        print(f"Volume increased current volume {self.get_volume()}")
