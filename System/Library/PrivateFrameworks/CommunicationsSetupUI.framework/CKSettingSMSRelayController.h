/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class IDSService, NSString;

@interface CKSettingSMSRelayController : PSListController <IDSServiceDelegate> {

	IDSService* _relayService;

}

@property (nonatomic,retain) IDSService * relayService;              //@synthesize relayService=_relayService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)deviceIsAuthorized:(id)arg1 ;
+(id)authorizedSMSRelayDevices;
+(unsigned long long)numberOfActiveDevices;
+(BOOL)shouldShowSMSRelaySettings;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)systemApplicationWillEnterForeground;
-(void)setRelayService:(IDSService *)arg1 ;
-(IDSService *)relayService;
-(void)setDeviceActive:(id)arg1 specifier:(id)arg2 ;
-(id)getDeviceActive:(id)arg1 ;
-(id)specifiers;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
@end

