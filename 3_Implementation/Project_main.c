#include "stdio.h"
#include "regist.h"


// Program begins from this section
int main(){
    
    int stat;         // A return parameter to check status of patient
    long A;             // Variable that stores patient's aadhar number
    int d1=0,d2=0;      //Vaccine type 1 and 2 quantity
    
    existregister();
    
    int attmpt=1000;    // Variable that determines the total number of execution required by EOD
    while(attmpt>0){
        
    aply:
    printf("\nProtect Yourself and Others!!!\n");
    printf("Enter your aadhar number:");
    scanf("%li",&A);
   
    
    stat = register_status(A);
    int i,j=0,dstat=0,choice=0,pno;
    
    i=1;
    while(i<=1000){
        if(pd[i].aadhar==A)
            j=i;
    i++;
    }
    
    if(stat==-1){
        existregist();
        i=1;
        while(i<=1000){
            if(pd[i].aadhar==0){
                printf("Fill details for registration\n");
                pd[i].aadhar=pd[0].aadhar;
                printf("Enter your mobile number: ");
                scanf("%d",&pd[i].mobile_number);
                printf("Enter your age: ");
                scanf("%d",&pd[i].age);
                printf("Enter your secret key: ");
                scanf("%d",&pd[i].secret_key);
                break;}
            i++;
        }
        printf("Credentials saved, log in again\n");
        goto aply;
    }
    else if (stat==0){
        //Verification
        printf("Confirm user, enter mobile number\n");
        prv1:
        scanf("%d",&pno);
        if(pno==pd[j].mobile_number)
            goto nxt1;
        else
            printf("Wrong credentials, try again\n");
            goto prv1;
        nxt1:
        printf("Choose Vaccine\n");
        printf("1:Covishield\n2:Covaxin\n");
        scanf("%d",&choice);
        if(pd[j].vaccine_type==0){
            switch (choice){
                case 1:
                    pd[j].vaccine_type=1;
                    break;
                case 2:
                    pd[j].vaccine_type=2;
                    break;
                default:
                    printf("Select option 1 or 2\n");
                    break;
                }
        }
    }
    else{
        // Verification
        printf("Confirm user, enter ph.number\n");
        prv2:
        scanf("%d",&pno);
        if(pno==pd[j].mobile_number)
            goto nxt2;
        else
            printf("Wrong credentials, try again\n");
            goto prv2;
        }nxt2:

    dstat=vaccine_status(j);        //Status of patient based on being vaccinated

    if(dstat==1)
        printf("Please take your first vaccine\nYou have been vaccinated once\n");
    else if (dstat==2)
        printf("Please take your second vaccine\nYou have been vaccinated twice\n");
    else if (dstat==3)
        printf("You have completed two dozes of vaccination\n");
    
    // Count of total number of vaccine vials used
    if(pd[j].vaccine_type==1 && (dstat==1 || dstat==2))
        d1++;
    else if(pd[j].vaccine_type==2 && (dstat==1 || dstat==2))
        d2++;
    
    attmpt--;
    
    }

    printf("\nFinal list of patients and consumed stock of vaccines\n");
    int i=1;
    while(i<=1000){
        if(pd[i].aadhar!=0){
            printf("P%d Aadhar:%li\n",i,pd[i].aadhar);
            printf("P%d Phone no:%d\n",i,pd[i].mobile_number);
            printf("P%d Age:%d\n",i,pd[i].age);
            printf("P%d Secret code:%d\n",i,pd[i].secret_key);
            printf("P%d Vaccine type:%d\n",i,pd[i].vaccine_type);
            printf("P%d Vaccine dozes:%d\n",i,pd[i].vaccine_doses);
        }
    i++;
    }
    printf("\nVaccine type 1(COVISHIELD):%d\n",d1);
    printf("Vaccine type 2(COVAXIN):%d\n",d2);
}