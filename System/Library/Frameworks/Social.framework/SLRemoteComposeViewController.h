/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>

@protocol SLRemoteComposeViewControllerDelegateProtocol;
@interface SLRemoteComposeViewController : _UIRemoteViewController {

	id<SLRemoteComposeViewControllerDelegateProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<SLRemoteComposeViewControllerDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SLRemoteComposeViewControllerDelegateProtocol>)delegate;
-(void)setDelegate:(id<SLRemoteComposeViewControllerDelegateProtocol>)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

