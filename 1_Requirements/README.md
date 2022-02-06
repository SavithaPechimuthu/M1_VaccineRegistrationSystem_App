# Introduction
The formation of covid-19 vaccinations in India happened in a flash, making tracking extremely difficult. Several slow running issues and crashes occurred as a result of the server's various input and output commands. To allot the vaccines, the Aadhar details were required, hence it was run on a central server. To avoid using a central server for all commands, the vaccine-registered data will be placed onto a local server. Local vaccination data verification and completion will be done locally and loaded back to the main server before the end of the day.
To register and distribute vaccines, each vaccine centre will function independently. The patient can complete the basic registration process online and choose their own schedule. Assume that a vaccination centre can vaccinate around 100 people every day. The data processing for online basic registration will mostly take place during the day, while the data collected by local vaccination centres can be processed at night.
Where the assigned online registration data will be placed onto the local server of that local centre, the local server must keep the data of approximately 100 persons. Data is verified using the patient's details. The data of the vaccinated will be handed back to the researchers once the project is concluded.
# Advantages
Data handling that is more fluid.
Pre-recorded data is easily accessible for verification.
The ability to add new registrants is constrained by the amount of RAM available on the server.
# DisAdvantages
Due to local server limits, we are unable to add a significant number of new registrants.
To secure the data, encryption is disabled.
For new registrations, OTP verification is disabled.
# SWOT Analysis
![SWOT](https://user-images.githubusercontent.com/98832333/152694026-3d54d433-03d2-49cb-bda2-fe58af0524af.png)

# 4 W's and 1 H
# WHO
Patient who needs to be vaccinated.
# WHAT
Verify the details of the patient using the alloted data.
# WHEN
Vaccination will take place during the period allotted
# WHERE
Vaccination clinic in the area
# HOW
Using a local server, participants can register online and have their information verified on the field.
# High Level Requirements
 1. ID:HR01
 DescriptionStatus:System should be able to access pre loaded registration data for verification
 (Implemented/Future):Implemented
 2.ID:HR02	
DescriptionStatus:User should be able to add new registrations	
(Implemented/Future):Implemented
3.ID:HR03	 
DescriptionStatus:System should recognize vaccinated patients	
(Implemented/Future):Implemented
4.ID:HR04	
DescriptionStatus:OTP generated verification for secure registration	
(Implemented/Future):Future
5.ID:HR05	
DescriptionStatus:System should recognize invalid credentials 	
(Implemented/Future):Future
6.ID:HR06	
DescriptionStatus:System should be updated with the time interval between two dose	
(Implemented/Future):Future
# Low Level Requirement
1.ID:LR01	
DescriptionStatus:Only new user must be given an option to select vaccine type	
(Implemented/Future):Implemented
2.ID:LR02	
DescriptionStatus:Total quantity of vaccines used must be shown by EOD	
(Implemented/Future):Implemented
3.ID:LR03	
DescriptionStatus:Full list of  patients vaccinated must be set as output	
(Implemented/Future):Implemented
4.ID:LR04	
DescriptionStatus:Remaining and present stock of vaccines must be tracked	
(Implemented/Future):Future
5.ID:LR05	
DescriptionStatus:Vaccine vials must be tracked for its use within a day	
(Implemented/Future):Future
