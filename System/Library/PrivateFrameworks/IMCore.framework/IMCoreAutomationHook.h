/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMAccount;

@interface IMCoreAutomationHook : NSObject {

	IMAccount* _imessageAccount;

}

@property (readonly) IMAccount * bestiMessageAccount; 
+(id)stringFromAutomationErrorCode:(long long)arg1 ;
-(IMAccount *)bestiMessageAccount;
-(id)chatForHandles:(id)arg1 error:(id*)arg2 results:(id)arg3 ;
-(id)handlesFromStrings:(id)arg1 error:(id*)arg2 results:(id)arg3 ;
-(id)existingChatForGroupID:(id)arg1 error:(id*)arg2 results:(id)arg3 ;
@end
