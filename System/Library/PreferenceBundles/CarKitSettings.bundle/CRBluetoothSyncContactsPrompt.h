/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CRBluetoothSyncContactsPrompt : NSObject {

	/*^block*/id _contactsApprovalCompletion;

}

@property (nonatomic,copy) id contactsApprovalCompletion;              //@synthesize contactsApprovalCompletion=_contactsApprovalCompletion - In the implementation block
-(void)setContactsApprovalCompletion:(id)arg1 ;
-(void)presentSyncContactsAlertFromViewController:(id)arg1 ;
-(void)_handleContactsApprovalCompleted:(BOOL)arg1 ;
-(id)contactsApprovalCompletion;
@end
