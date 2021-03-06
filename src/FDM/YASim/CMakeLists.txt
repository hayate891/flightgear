include(FlightGearComponent)

set(COMMON
	Airplane.cpp
	Atmosphere.cpp
	ControlMap.cpp
	FGFDM.cpp
	Gear.cpp
	Glue.cpp
	Ground.cpp
	Hitch.cpp
	Hook.cpp
	Integrator.cpp
	Jet.cpp
	Launchbar.cpp
	Model.cpp
	PistonEngine.cpp
	PropEngine.cpp
	Propeller.cpp
	RigidBody.cpp
	Rotor.cpp
	Rotorpart.cpp
	SimpleJet.cpp
	Surface.cpp
	Thruster.cpp
	TurbineEngine.cpp
	Turbulence.cpp
	Wing.cpp
	Version.cpp
	)

set(SOURCES
	${COMMON}
	YASim.cxx
	FGGround.cpp
	)

flightgear_component(YASim  "${SOURCES}")

if(ENABLE_TESTS)
add_executable(yasim yasim-test.cpp ${COMMON})
add_executable(yasim-proptest proptest.cpp ${COMMON})

target_link_libraries(yasim SimGearCore)
target_link_libraries(yasim-proptest SimGearCore)

install(TARGETS yasim yasim-proptest RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})

endif(ENABLE_TESTS)
