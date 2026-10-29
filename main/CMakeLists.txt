idf_component_register(
    SRCS "clawMachineProto.cpp"
        "1_Driver/joyStickDriver.cpp"
        "1_Driver/xyMotorDriver.cpp"
        "1_Driver/zMotorDriver.cpp"
        "2_Logic/joystickLogic.cpp"
        "2_Logic/xyMotorLogic.cpp"
        "2_Logic/position.cpp"
        "3_Control/control.cpp"
    INCLUDE_DIRS "." "1_Driver" "2_Logic" "3_Control"
    REQUIRES esp_adc driver esp_driver_gpio esp_driver_rmt
)
