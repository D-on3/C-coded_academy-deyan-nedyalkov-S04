from airbag import Airbag
from radio_connector import RadioConnector
from wheel import SteeringWheel

normal_wheel = SteeringWheel("black", "40sm", "leather", airbag="Special",volume_control=True,radio_connector=RadioConnector())
# Make another wheel which has custom Airbag as Airbag instance.
# print(type(normal_wheel), isinstance(normal_wheel, SteeringWheel))
# print(normal_wheel.airbag)
# print(normal_wheel.color)
# print(normal_wheel.diameter)
# print(normal_wheel.material)
print(f"Wheel initial position: {normal_wheel.position}")
normal_wheel.steer_right()
normal_wheel.increase_volume()
normal_wheel.decrease_volume()
print(normal_wheel)
normal_wheel.airbag.activate_airbag()