class Airbag:
    def __init__(self, airbag_cushion=None, flexible_fabric_bag="deflated", inflation_module="Deflated",
                 impact_sensor=15):
        self.airbag_components = {"airbag_cushion": airbag_cushion, "flexible_fabric_bag": flexible_fabric_bag,
                                  "inflation_module": inflation_module, "impact_sensor": impact_sensor}
        self.activated = False

    def sensor_get_value(self):
        return self.airbag_components["impact_sensor"]

    def inflate_airbag(self):
        self.airbag_components["flexible_fabric_bag"] = 255

    def activate_airbag(self):
        self.activated = True
        self.inflate_airbag()
        print(f"Airbag Activated")

    def __str__(self):
        return f"\nDiagnostic Of Airbag   :\n" \
               f"AirBag Cushion         : {self.airbag_components['airbag_cushion']}\n" \
               f"Flexible Fabric Bag    : {self.airbag_components['flexible_fabric_bag']}\n" \
               f"Inflation module       :  {self.airbag_components['inflation_module']}\n" \
               f"Impact sensor          :  {self.airbag_components['impact_sensor']}\n"
