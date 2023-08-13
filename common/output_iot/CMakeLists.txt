# set(COMPONENT_SRCS "input_iot.c")
# set(app_src input_iot.c)
set(pri_req)
idf_component_register(SRCS "output_iot.c"
                    INCLUDE_DIRS "."
                    REQUIRES ${pri_req})
# register_component()
