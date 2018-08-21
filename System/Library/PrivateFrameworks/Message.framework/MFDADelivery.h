/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFMailDelivery.h>

@class DAMailAccount, NSString;

@interface MFDADelivery : MFMailDelivery {

	DAMailAccount* _DAMailAccount;
	NSString* _folderId;
	NSString* _accountId;
	NSString* _repliedMessageId;
	NSString* _forwardedMessageId;
	NSString* _repliedLongId;
	NSString* _forwardedLongId;

}
-(void)dealloc;
-(void)setDAMailAccount:(id)arg1 ;
-(id)newMessageWriter;
-(id)deliverSynchronously;
-(id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5 ;
-(id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3 ;
@end
