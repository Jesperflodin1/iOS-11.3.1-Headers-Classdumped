/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegSecureAccountWebViewController.h>

@protocol CNFRegViewAccountControllerDelegate;
@interface CNFRegViewAccountController : CNFRegSecureAccountWebViewController {

	id<CNFRegViewAccountControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<CNFRegViewAccountControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CNFRegViewAccountControllerDelegate>)delegate;
-(void)setDelegate:(id<CNFRegViewAccountControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)bagKey;
-(void)cancelTapped;
-(void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(id)logName;
@end
