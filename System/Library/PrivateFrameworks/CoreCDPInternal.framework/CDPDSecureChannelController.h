/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDPDSecureChannelContext;

@interface CDPDSecureChannelController : NSObject {

	CDPDSecureChannelContext* _secureChannelContext;

}
-(id)initWithContext:(id)arg1 ;
-(void)joinCircle:(/*^block*/id)arg1 ;
-(void)startCircleApplicationApprovalServerWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processAndReplyWithMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startListeningWithProxy:(id)arg1 ;
@end
