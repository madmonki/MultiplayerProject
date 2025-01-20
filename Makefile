# Makefile generated by MakefileGenerator.cs
# *DO NOT EDIT*

UNREALROOTPATH = /mnt/SSD870/UnrealEngine/Linux_Unreal_Engine_5.5.1

TARGETS = \
	MultiplayerProject-Android-DebugGame  \
	MultiplayerProject-Android-Development  \
	MultiplayerProject-Android-Shipping  \
	MultiplayerProject-Linux-DebugGame  \
	MultiplayerProject-Linux-Development  \
	MultiplayerProject-Linux-Shipping  \
	MultiplayerProject-LinuxArm64-DebugGame  \
	MultiplayerProject-LinuxArm64-Development  \
	MultiplayerProject-LinuxArm64-Shipping  \
	MultiplayerProject \
	MultiplayerProjectEditor-Linux-DebugGame  \
	MultiplayerProjectEditor-Linux-Development  \
	MultiplayerProjectEditor \
	LiveLinkHub-Linux-DebugGame  \
	LiveLinkHub-Linux-Development  \
	LiveLinkHub \
	DotNetPerforceLib \
	EventLoopUnitTests \
	UnrealEditor-Linux-DebugGame  \
	UnrealEditor-Linux-Development  \
	UnrealEditor \
	UnrealGame-Android-DebugGame  \
	UnrealGame-Android-Development  \
	UnrealGame-Android-Shipping  \
	UnrealGame-Linux-DebugGame  \
	UnrealGame-Linux-Development  \
	UnrealGame-Linux-Shipping  \
	UnrealGame-LinuxArm64-DebugGame  \
	UnrealGame-LinuxArm64-Development  \
	UnrealGame-LinuxArm64-Shipping  \
	UnrealGame\
	configure

BUILD = "$(UNREALROOTPATH)/Engine/Build/BatchFiles/RunUBT.sh"

all: StandardSet

RequiredTools: CrashReportClient-Linux-Shipping CrashReportClientEditor-Linux-Shipping ShaderCompileWorker UnrealLightmass EpicWebHelper-Linux-Shipping

StandardSet: RequiredTools UnrealFrontend MultiplayerProjectEditor UnrealInsights

DebugSet: RequiredTools UnrealFrontend-Linux-Debug MultiplayerProjectEditor-Linux-Debug


MultiplayerProject-Android-DebugGame:
	 $(BUILD) MultiplayerProject Android DebugGame  -Project="/home/madmonki/EVO870/unrealprojs/MultiplayerProject/MultiplayerProject.uproject" $(ARGS)

MultiplayerProject-Android-Development:
	 $(BUILD) MultiplayerProject Android Development  -Project="/home/madmonki/EVO870/unrealprojs/MultiplayerProject/MultiplayerProject.uproject" $(ARGS)

MultiplayerProject-Android-Shipping:
	 $(BUILD) MultiplayerProject Android Shipping  -Project="/home/madmonki/EVO870/unrealprojs/MultiplayerProject/MultiplayerProject.uproject" $(ARGS)

MultiplayerProject-Linux-DebugGame:
	 $(BUILD) MultiplayerProject Linux DebugGame  -Project="/home/madmonki/EVO870/unrealprojs/MultiplayerProject/MultiplayerProject.uproject" $(ARGS)

MultiplayerProject-Linux-Development:
	 $(BUILD) MultiplayerProject Linux Development  -Project="/home/madmonki/EVO870/unrealprojs/MultiplayerProject/MultiplayerProject.uproject" $(ARGS)

MultiplayerProject-Linux-Shipping:
	 $(BUILD) MultiplayerProject Linux Shipping  -Project="/home/madmonki/EVO870/unrealprojs/MultiplayerProject/MultiplayerProject.uproject" $(ARGS)

MultiplayerProject-LinuxArm64-DebugGame:
	 $(BUILD) MultiplayerProject LinuxArm64 DebugGame  -Project="/home/madmonki/EVO870/unrealprojs/MultiplayerProject/MultiplayerProject.uproject" $(ARGS)

MultiplayerProject-LinuxArm64-Development:
	 $(BUILD) MultiplayerProject LinuxArm64 Development  -Project="/home/madmonki/EVO870/unrealprojs/MultiplayerProject/MultiplayerProject.uproject" $(ARGS)

MultiplayerProject-LinuxArm64-Shipping:
	 $(BUILD) MultiplayerProject LinuxArm64 Shipping  -Project="/home/madmonki/EVO870/unrealprojs/MultiplayerProject/MultiplayerProject.uproject" $(ARGS)

MultiplayerProject: MultiplayerProject-Linux-Development

MultiplayerProjectEditor-Linux-DebugGame:
	 $(BUILD) MultiplayerProjectEditor Linux DebugGame  -Project="/home/madmonki/EVO870/unrealprojs/MultiplayerProject/MultiplayerProject.uproject" $(ARGS)

MultiplayerProjectEditor-Linux-Development:
	 $(BUILD) MultiplayerProjectEditor Linux Development  -Project="/home/madmonki/EVO870/unrealprojs/MultiplayerProject/MultiplayerProject.uproject" $(ARGS)

MultiplayerProjectEditor: MultiplayerProjectEditor-Linux-Development

LiveLinkHub-Linux-DebugGame:
	 $(BUILD) LiveLinkHub Linux DebugGame  $(ARGS)

LiveLinkHub-Linux-Development:
	 $(BUILD) LiveLinkHub Linux Development  $(ARGS)

LiveLinkHub: LiveLinkHub-Linux-Development

DotNetPerforceLib: DotNetPerforceLib-Linux-Development

EventLoopUnitTests: EventLoopUnitTests-Linux-Development

UnrealEditor-Linux-DebugGame:
	 $(BUILD) UnrealEditor Linux DebugGame  $(ARGS)

UnrealEditor-Linux-Development:
	 $(BUILD) UnrealEditor Linux Development  $(ARGS)

UnrealEditor: UnrealEditor-Linux-Development

UnrealGame-Android-DebugGame:
	 $(BUILD) UnrealGame Android DebugGame  $(ARGS)

UnrealGame-Android-Development:
	 $(BUILD) UnrealGame Android Development  $(ARGS)

UnrealGame-Android-Shipping:
	 $(BUILD) UnrealGame Android Shipping  $(ARGS)

UnrealGame-Linux-DebugGame:
	 $(BUILD) UnrealGame Linux DebugGame  $(ARGS)

UnrealGame-Linux-Development:
	 $(BUILD) UnrealGame Linux Development  $(ARGS)

UnrealGame-Linux-Shipping:
	 $(BUILD) UnrealGame Linux Shipping  $(ARGS)

UnrealGame-LinuxArm64-DebugGame:
	 $(BUILD) UnrealGame LinuxArm64 DebugGame  $(ARGS)

UnrealGame-LinuxArm64-Development:
	 $(BUILD) UnrealGame LinuxArm64 Development  $(ARGS)

UnrealGame-LinuxArm64-Shipping:
	 $(BUILD) UnrealGame LinuxArm64 Shipping  $(ARGS)

UnrealGame: UnrealGame-Linux-Development

configure:
	$(BUILD) -ProjectFiles -Project="/home/madmonki/EVO870/unrealprojs/MultiplayerProject/MultiplayerProject.uproject" -Game 

.PHONY: $(TARGETS)
