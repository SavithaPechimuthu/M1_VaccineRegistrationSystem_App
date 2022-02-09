# Introduction
The formation of covid-19 vaccinations in India happened in a flash, making tracking extremely difficult. Several slow running issues and crashes occurred as a result of the server's various input and output commands. To allot the vaccines, the Aadhar details were required, hence it was run on a central server. To avoid using a central server for all commands, the vaccine-registered data will be placed onto a local server. Local vaccination data verification and completion will be done locally and loaded back to the main server before the end of the day.
To register and distribute vaccines, each vaccine centre will function independently. The patient can complete the basic registration process online and choose their own schedule. Assume that a vaccination centre can vaccinate around 100 people every day. The data processing for online basic registration will mostly take place during the day, while the data collected by local vaccination centres can be processed at night.
Where the assigned online registration data will be placed onto the local server of that local centre, the local server must keep the data of approximately 100 persons. Data is verified using the patient's details. The data of the vaccinated will be handed back to the researchers once the project is concluded.
## Advantages
1. Data handling that is more fluid.
2. Pre-recorded data is easily accessible for verification.
3. The ability to add new registrants is constrained by the amount of RAM available on the server.
## DisAdvantages
1. Due to local server limits, we are unable to add a significant number of new registrants.
2. To secure the data, encryption is disabled.
3. For new registrations, OTP verification is disabled.
## SWOT Analysis
![SWOT](https://user-images.githubusercontent.com/98832333/152694026-3d54d433-03d2-49cb-bda2-fe58af0524af.png)

## 4 W's and 1 H
## WHO
Patient who needs to be vaccinated.
## WHAT
Verify the details of the patient using the alloted data.
## WHEN
Vaccination will take place during the period allotted
## WHERE
Vaccination clinic in the area
## HOW
Using a local server, participants can register online and have their information verified on the field.
## High Level Requirements
 | ID | Depiction Status | Upheld/Future |
 |----| ------------------ | ------------------ |
 | HR01 | For verification, the system should be able to access pre-loaded registration data | Upheld |
 | HR02 | New registrations should be able to be added by the user | Upheld |
 | HR03 | Patients who have been vaccinated should be recognised by the system | Upheld |
 | HR04 | For secure registrations, an OTP is produced | Future |
 | HR05 | Invalid credentials should be recognised by the system | Future |
 | HR06 | The time gap between two doses should be updated in the system | Future |
## Low Level Requirement
 | ID | Depiction Status | Upheld/Future |
 | -- | ---------------- | ------------- |
 | HR01 | Only new users should be offered the option of choosing a vaccination type | Upheld |
 | HR02 | EOD must show the total number of vaccinations used | Upheld |
 | HR03 | The entire list of patients who have been vaccinated must be placed as output | Upheld |
 | HR04 | The remaining and current vaccination stock must be tracked | Future |
 | HR05 | Within a day, vaccination vials must be traced for use | Future |
