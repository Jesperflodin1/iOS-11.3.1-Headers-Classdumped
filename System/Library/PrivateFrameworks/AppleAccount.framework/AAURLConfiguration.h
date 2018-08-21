/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray;

@interface AAURLConfiguration : NSObject {

	NSDictionary* _urlDictionary;

}

@property (nonatomic,readonly) NSString * accountCreationURL; 
@property (nonatomic,readonly) NSString * updateAccountURL; 
@property (nonatomic,readonly) NSString * registerURL; 
@property (nonatomic,readonly) NSString * validateURL; 
@property (nonatomic,readonly) NSString * accountCreationUIURL; 
@property (nonatomic,readonly) NSString * updateAccountUIURL; 
@property (nonatomic,readonly) NSString * signInURL; 
@property (nonatomic,readonly) NSString * fetchAccountSettingsURL; 
@property (nonatomic,readonly) NSString * authenticateURL; 
@property (nonatomic,readonly) NSString * addEmailURL; 
@property (nonatomic,readonly) NSString * initiateValidateEmailURL; 
@property (nonatomic,readonly) NSString * completeValidateEmailURL; 
@property (nonatomic,readonly) NSString * mobileMeOfferAlertURL; 
@property (nonatomic,readonly) NSString * signingSessionCertURL; 
@property (nonatomic,readonly) NSString * signingSessionURL; 
@property (nonatomic,readonly) NSString * emailLookupURL; 
@property (nonatomic,readonly) NSString * genericTermsURL; 
@property (nonatomic,readonly) NSString * fmipAuthenticate; 
@property (nonatomic,readonly) NSString * iForgotUIURL; 
@property (nonatomic,readonly) NSString * existingAppleIDTermsUIURL; 
@property (nonatomic,readonly) NSString * finishProvisioningURL; 
@property (nonatomic,readonly) NSString * syncMachineURL; 
@property (nonatomic,readonly) NSString * loginDelegatesURL; 
@property (nonatomic,readonly) NSString * createDelegatesURL; 
@property (nonatomic,readonly) NSString * loginOrCreateDelegatesURL; 
@property (nonatomic,readonly) NSString * deviceListURL; 
@property (nonatomic,readonly) NSString * sendCodeURL; 
@property (nonatomic,readonly) NSString * verifyCodeURL; 
@property (nonatomic,readonly) NSString * accountManagementUIURL; 
@property (nonatomic,readonly) NSString * familyUIURL; 
@property (nonatomic,readonly) NSString * devicesUIURL; 
@property (nonatomic,readonly) NSString * paymentSummaryURL; 
@property (nonatomic,readonly) NSString * familySetupUIURL; 
@property (nonatomic,readonly) NSString * personalInfoUIURL; 
@property (nonatomic,readonly) NSString * paymentInfoUIURL; 
@property (nonatomic,readonly) NSString * passwordSecurityUIURL; 
@property (nonatomic,readonly) NSString * secondaryAuthenticationURL; 
@property (nonatomic,readonly) NSString * getMyPhotoURL; 
@property (nonatomic,readonly) NSString * updateMyPhotoURL; 
@property (nonatomic,readonly) NSString * getFamilyMemberPhotoURL; 
@property (nonatomic,readonly) NSString * familyEligibilityURL; 
@property (nonatomic,readonly) NSString * checkiCloudMembershipURL; 
@property (nonatomic,readonly) NSString * pendingFamilyInvitesUIURL; 
@property (nonatomic,readonly) NSString * updateNameURL; 
@property (nonatomic,readonly) NSString * familyMemberDetailsUIURL; 
@property (nonatomic,readonly) NSString * addFamilyMemberUIURL; 
@property (nonatomic,readonly) NSString * getFamilyDetailsURL; 
@property (nonatomic,readonly) NSString * childAccountCreationUIURL; 
@property (nonatomic,readonly) NSString * grandslamURL; 
@property (nonatomic,readonly) NSString * acceptChildTransferURL; 
@property (nonatomic,readonly) NSString * rejectChildTransferURL; 
@property (nonatomic,readonly) NSString * familyLearnMoreURL; 
@property (nonatomic,readonly) NSString * cloudKitMigrationStateURL; 
@property (nonatomic,readonly) NSString * cloudKitStartMigrationURL; 
@property (nonatomic,readonly) NSString * cloudKitDevicesListURL; 
@property (nonatomic,readonly) NSString * familyPaymentInfoURL; 
@property (nonatomic,readonly) NSString * familyPaymentCardUIURL; 
@property (nonatomic,readonly) NSString * aboutURL; 
@property (nonatomic,readonly) NSString * getDeviceListURL; 
@property (nonatomic,readonly) NSString * repairCloudAccountUIURL; 
@property (nonatomic,readonly) NSString * initiateFamilyV2URL; 
@property (nonatomic,readonly) NSString * startFamilyInviteV2URL; 
@property (nonatomic,readonly) NSString * familyInviteSentV2URL; 
@property (nonatomic,readonly) NSString * fetchFamilyInviteV2URL; 
@property (nonatomic,readonly) NSString * acceptFamilyInviteV2URL; 
@property (nonatomic,readonly) NSString * registerDeviceURL; 
@property (nonatomic,readonly) NSString * unregisterDeviceURL; 
@property (nonatomic,readonly) NSString * getFamilyPushDetailsURL; 
@property (nonatomic,readonly) NSString * getAccountEventDetailsURL; 
@property (nonatomic,readonly) NSString * acceptFamilyInviteURL; 
@property (nonatomic,readonly) NSString * declineFamilyInviteURL; 
@property (nonatomic,readonly) NSString * dismissAlertURL; 
@property (nonatomic,readonly) NSString * apsEnvironment; 
@property (nonatomic,readonly) NSArray * urlsStoringCookies; 
+(void)reset;
+(id)_urlConfigurationWithError:(id*)arg1 ;
+(id)urlConfiguration;
+(id)itemForKey:(id)arg1 error:(id*)arg2 ;
-(NSString *)deviceListURL;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)syncMachineURL;
-(NSString *)signingSessionCertURL;
-(NSString *)signingSessionURL;
-(NSString *)authenticateURL;
-(NSString *)aboutURL;
-(NSString *)loginDelegatesURL;
-(NSString *)iForgotUIURL;
-(NSString *)addEmailURL;
-(NSString *)signInURL;
-(NSString *)fetchAccountSettingsURL;
-(NSString *)initiateValidateEmailURL;
-(NSString *)completeValidateEmailURL;
-(NSString *)emailLookupURL;
-(NSString *)fmipAuthenticate;
-(NSString *)loginOrCreateDelegatesURL;
-(NSString *)createDelegatesURL;
-(NSString *)paymentSummaryURL;
-(NSString *)personalInfoUIURL;
-(NSString *)passwordSecurityUIURL;
-(NSString *)paymentInfoUIURL;
-(NSString *)secondaryAuthenticationURL;
-(NSString *)updateNameURL;
-(NSString *)familyEligibilityURL;
-(NSString *)getFamilyDetailsURL;
-(NSString *)familyMemberDetailsUIURL;
-(NSString *)addFamilyMemberUIURL;
-(NSString *)childAccountCreationUIURL;
-(NSString *)getDeviceListURL;
-(NSString *)cloudKitMigrationStateURL;
-(NSString *)cloudKitStartMigrationURL;
-(NSString *)cloudKitDevicesListURL;
-(NSString *)finishProvisioningURL;
-(NSString *)accountCreationURL;
-(NSString *)updateAccountURL;
-(NSString *)registerURL;
-(NSString *)validateURL;
-(NSString *)accountCreationUIURL;
-(NSString *)updateAccountUIURL;
-(NSString *)mobileMeOfferAlertURL;
-(NSString *)sendCodeURL;
-(NSString *)verifyCodeURL;
-(NSString *)accountManagementUIURL;
-(NSString *)familyUIURL;
-(NSString *)devicesUIURL;
-(NSString *)registerDeviceURL;
-(NSString *)unregisterDeviceURL;
-(NSString *)getFamilyPushDetailsURL;
-(NSString *)getAccountEventDetailsURL;
-(NSString *)checkiCloudMembershipURL;
-(NSString *)pendingFamilyInvitesUIURL;
-(NSString *)grandslamURL;
-(NSArray *)urlsStoringCookies;
-(NSString *)dismissAlertURL;
-(NSString *)repairCloudAccountUIURL;
-(NSString *)genericTermsURL;
-(NSString *)updateMyPhotoURL;
-(NSString *)existingAppleIDTermsUIURL;
-(NSString *)getMyPhotoURL;
-(NSString *)acceptChildTransferURL;
-(NSString *)familyLearnMoreURL;
-(NSString *)familyPaymentCardUIURL;
-(NSString *)acceptFamilyInviteURL;
-(NSString *)initiateFamilyV2URL;
-(NSString *)startFamilyInviteV2URL;
-(NSString *)familyInviteSentV2URL;
-(NSString *)fetchFamilyInviteV2URL;
-(NSString *)acceptFamilyInviteV2URL;
-(NSString *)familySetupUIURL;
-(NSString *)rejectChildTransferURL;
-(NSString *)familyPaymentInfoURL;
-(NSString *)getFamilyMemberPhotoURL;
-(NSString *)declineFamilyInviteURL;
-(NSString *)apsEnvironment;
@end

