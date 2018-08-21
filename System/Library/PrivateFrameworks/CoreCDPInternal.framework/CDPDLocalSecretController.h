/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPDSecureBackupDelegate.h>
#import <libobjc.A.dylib/CDPDCircleDelegate.h>

@protocol CDPStateUIProviderInternal, CDPLocalSecretFollowUpProvider;
@class CDPContext, CDPDCircleController, CDPDSecureBackupController;

@interface CDPDLocalSecretController : NSObject <CDPDSecureBackupDelegate, CDPDCircleDelegate> {

	CDPContext* _context;
	CDPDCircleController* _circleController;
	CDPDSecureBackupController* _secureBackupController;
	id<CDPStateUIProviderInternal> _uiProvider;
	id<CDPLocalSecretFollowUpProvider> _followUpProvider;

}

@property (nonatomic,retain) CDPContext * context;                                             //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) CDPDCircleController * circleController;                          //@synthesize circleController=_circleController - In the implementation block
@property (nonatomic,retain) CDPDSecureBackupController * secureBackupController;              //@synthesize secureBackupController=_secureBackupController - In the implementation block
@property (nonatomic,retain) id<CDPStateUIProviderInternal> uiProvider;                        //@synthesize uiProvider=_uiProvider - In the implementation block
@property (nonatomic,retain) id<CDPLocalSecretFollowUpProvider> followUpProvider;              //@synthesize followUpProvider=_followUpProvider - In the implementation block
-(void)dealloc;
-(CDPContext *)context;
-(void)setContext:(CDPContext *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)setUiProvider:(id<CDPStateUIProviderInternal>)arg1 ;
-(void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(CDPDCircleController *)circleController;
-(void)setCircleController:(CDPDCircleController *)arg1 ;
-(CDPDSecureBackupController *)secureBackupController;
-(void)setSecureBackupController:(CDPDSecureBackupController *)arg1 ;
-(id<CDPStateUIProviderInternal>)uiProvider;
-(id)contextForController:(id)arg1 ;
-(void)circleController:(id)arg1 secureBackupRecordsArePresentWithCompletion:(/*^block*/id)arg2 ;
-(id)secureChannelContextForController:(id)arg1 ;
-(id<CDPLocalSecretFollowUpProvider>)followUpProvider;
-(void)_handleCompletionStatus:(BOOL)arg1 ;
-(void)_localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_createContextForSecret:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_cdpStateMachine;
-(void)_repairWithStateMachine:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_collectLocalSecretWithCompletion:(/*^block*/id)arg1 ;
-(void)_setContextWithAuthResults:(id)arg1 ;
-(id)circlePeerIDForSecureBackupController:(id)arg1 ;
-(BOOL)synchronizeCircleViewsForSecureBackupContext:(id)arg1 ;
-(void)promptForAdoptionOfMultipleICSCWithCompletion:(/*^block*/id)arg1 ;
-(void)promptForLocalSecretWithCompletion:(/*^block*/id)arg1 ;
-(void)finishOfflineLocalSecretChangeWithCompletion:(/*^block*/id)arg1 ;
-(void)setFollowUpProvider:(id<CDPLocalSecretFollowUpProvider>)arg1 ;
@end
