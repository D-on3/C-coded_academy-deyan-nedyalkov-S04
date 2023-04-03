# todo create a car
# todo simulate some car actions


from vehicle.engine import action_switch_gear, burn_fuel
from vehicle.salon import start_car
from vehicle.braking_system import engage_brakes
from simulator.actions import drive



if __name__ == "__main__":
    start_car()
    action_switch_gear()
    burn_fuel()
    drive()
    engage_brakes()
