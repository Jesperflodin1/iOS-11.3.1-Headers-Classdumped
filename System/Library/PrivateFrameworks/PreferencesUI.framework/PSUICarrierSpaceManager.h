/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <libobjc.A.dylib/CTCarrierSpaceClientDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CTCarrierSpaceCapabilities, CTCarrierSpaceUsageInfo, CTCarrierSpacePlansInfo, CTCarrierSpaceAppsInfo, PSUIAppInstallController, NSNumber, CTCarrierSpaceUserConsentFlowInfo, CTCarrierSpaceClient, NSString;

@interface PSUICarrierSpaceManager : NSObject <CTCarrierSpaceClientDelegate> {

	NSObject*<OS_dispatch_queue> _carrierSpaceQueue;
	CTCarrierSpaceCapabilities* _capabilities;
	CTCarrierSpaceUsageInfo* _usageInfo;
	CTCarrierSpacePlansInfo* _plansInfo;
	CTCarrierSpaceAppsInfo* _appsInfo;
	PSUIAppInstallController* _carrierAppInstallController;
	NSNumber* _hasUserConsent;
	CTCarrierSpaceUserConsentFlowInfo* _userConsentFlowInfo;
	NSNumber* _userConsentResponse;
	CTServerConnectionRef _serverConnection;
	CTCarrierSpaceClient* _carrierSpaceClient;

}

@property (nonatomic,retain) CTCarrierSpaceClient * carrierSpaceClient;              //@synthesize carrierSpaceClient=_carrierSpaceClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(long long)bytesFromString:(id)arg1 carrierSpaceUnits:(long long)arg2 ;
+(int)carrierMetricTypeForString:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)refresh;
-(id)usageInfo;
-(BOOL)shouldShowPlanMetrics:(id)arg1 ;
-(id)descriptionForPlanMetrics:(id)arg1 ;
-(void)refreshAndReload;
-(BOOL)supportsSweetgum;
-(id)plansInfo;
-(id)appsInfo;
-(id)localizedDataStringFromBytes:(unsigned long long)arg1 ;
-(BOOL)hasUserConsent;
-(id)userConsentFlowInfo;
-(void)setUserConsent:(BOOL)arg1 ;
-(void)userConsentAcknowledged:(BOOL)arg1 ;
-(id)subscribedPlanOptions;
-(id)subscribedDomesticPlanOptions;
-(id)planMetrics;
-(id)carrierAppInstallController;
-(BOOL)planChangeIsRestricted;
-(CTCarrierSpaceClient *)carrierSpaceClient;
-(void)setCarrierSpaceClient:(CTCarrierSpaceClient *)arg1 ;
-(id)capabilities;
-(void)capabilitiesDidChange:(id)arg1 ;
-(void)userConsentFlowInfoDidChange;
-(void)usageDidChange;
-(void)plansDidChange;
-(void)appsDidChange;
@end
