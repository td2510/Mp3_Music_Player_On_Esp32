# set(COMPONENT_SRCS "user_main.c")

# register_component()
idf_component_register(SRCS "user_main.cpp"
                    INCLUDE_DIRS "."
                    # REQUIRES "common"
                    )