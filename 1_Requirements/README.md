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

# 4 W's and 1 H
WHO
Patient who needs to be vaccinated.
WHAT
Verify the details of the patient using the alloted data.
WHEN
Vaccination will take place during the period allotted
WHERE
Vaccination clinic in the area
HOW
Using a local server, participants can register online and have their information verified on the field.
# High Level Requirements
|**ID**|**DescriptionStatus**|**(Implemented/Future)**|
|HR01|  System should be able to access pre loaded registration data for verification|Implemented
|HR02|	User should be able to add new registrations|	Implemented
|HR03|	System should recognize vaccinated patients|	Implemented
|HR04|	OTP generated verification for secure registration|	Future
|HR05|	System should recognize invalid credentials|	Future
|HR06|	System should be updated with the time interval between two doses|	Future
# Low Level Requirement
|**ID**|**DescriptionStatus**|**(Implemented/Future)**|
|LR01|	Only new user must be given an option to select vaccine type|	Implemented
|LR02|	Total quantity of vaccines used must be shown by EOD|	Implemented
|LR03|	Full list of patients vaccinated must be set as output|	Implemented
|LR04|	Remaining and present stock of vaccines must be tracked|	Future
|LR05|	Vaccine vials must be tracked for its use within a day	Future|**