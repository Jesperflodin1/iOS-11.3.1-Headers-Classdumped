/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iOSDiagnostics.framework/iOSDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/DSRemoteViewControllerInterface.h>

@protocol DADiagnosticsRemoteDelegate;
@class DADiagnosticResponder;

@interface DADiagnosticsRemoteHostViewController : _UIRemoteViewController <DSRemoteViewControllerInterface> {

	float _originalScreenBrightness;
	id<DADiagnosticsRemoteDelegate> _delegate;
	DADiagnosticResponder* _responder;

}

@property (nonatomic,retain) DADiagnosticResponder * responder;                            //@synthesize responder=_responder - In the implementation block
@property (assign,nonatomic) float originalScreenBrightness;                               //@synthesize originalScreenBrightness=_originalScreenBrightness - In the implementation block
@property (assign,nonatomic,__weak) id<DADiagnosticsRemoteDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(void)requestDiagnosticsRemoteViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(id<DADiagnosticsRemoteDelegate>)delegate;
-(void)setDelegate:(id<DADiagnosticsRemoteDelegate>)arg1 ;
-(void)setResponder:(DADiagnosticResponder *)arg1 ;
-(DADiagnosticResponder *)responder;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id)disconnect;
-(id)_viewServiceInterface;
-(void)viewServiceDidSuspend;
-(void)viewServiceDidFinishWithReason:(unsigned long long)arg1 ;
-(void)viewServiceDidEnableVolumeHUD:(BOOL)arg1 ;
-(void)viewServiceDidSetScreenToBrightness:(float)arg1 animate:(BOOL)arg2 ;
-(void)setOriginalScreenBrightness:(float)arg1 ;
-(float)originalScreenBrightness;
@end

