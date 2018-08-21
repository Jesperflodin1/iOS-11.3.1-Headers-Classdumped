/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MFContactsSearchOperation.h>

@class NSString, NSSet;

@interface MFCoreRecentsCorecipientSearchOperation : MFContactsSearchOperation {

	NSString* _bundleIdentifier;
	NSSet* _otherRecipients;
	unsigned long long _implicitGroupThreshold;

}
+(id)operationWithAddressBook:(void*)arg1 owner:(id)arg2 otherRecipients:(id)arg3 taskID:(id)arg4 properties:(id)arg5 bundleIdentifier:(id)arg6 implicitGroupThreshold:(unsigned long long)arg7 ;
-(void)dealloc;
-(void)main;
@end

