/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/SetupAssistantBundles/SBSyncServiceSetupAssistantBundle.bundle/SBSyncServiceSetupAssistantBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SBSyncServiceSetupAssistantBundle/AASetupAssistantDelegateService.h>

@interface SBSyncServiceIDSDelegate : NSObject <AASetupAssistantDelegateService> {

	BOOL _setupOperationCancelled;

}
-(id)init;
-(id)delegateServiceIdentifier;
-(id)accountSetupRequestParameters;
-(void)completeSetupWithResponseParameters:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setupOperationFailed;
@end

