from radio_connector import RadioConnector
from airbag import Airbag


class SteeringWheel:
    def __init__(self, color, diameter, material="cheap", form="circle", airbag=None, volume_control=False,
                 radio_connector=None, ):
        self.position = 0
        self.color = color
        self.diameter = diameter
        self.material = material
        self.form = form
        self.airbag = Airbag()

        # Add logic to ensure that you have radio_connector if volume_control is True.
        self.radio_connector = self.__ensure_radio_connecter_if_needed(
            volume_control, radio_connector,
        )

    def __ensure_radio_connecter_if_needed(self, volume_control, radio_connector):
        if not volume_control:
            return
        if radio_connector is None:
            raise Exception("Missing radio connector")
        return RadioConnector()

    def steer_left(self):
        self.position -= 10
        self.__get_position()
        self.auto_steer_to_initial()

    def steer_right(self):
        self.position += 10
        self.__get_position()
        self.auto_steer_to_initial()

    def auto_steer_to_initial(self):
        self.position = 0
        self.__get_position()

    def __get_position(self):
        print(f"Wheel steered to {self.position}")

    def increase_volume(self):
        if self.radio_connector:
            self.radio_connector.volume_up()

    def decrease_volume(self):
        if self.radio_connector:
            self.radio_connector.volume_down()

    # TODO: ADDED AFTER THE TASK
    def __str__(self):
        return f"Sterring Wheel specification \n" \
               f"Position            :{self.position}\n" \
               f"Colour of the Wheel :{self.color}\n" \
               f"Wheel diameter      :{self.diameter}\n" \
               f"Wheel Material      :{self.material}\n" \
               f"Wheel form          :{self.form}\n" \
               f"Wheel airbag        :{self.airbag}"
