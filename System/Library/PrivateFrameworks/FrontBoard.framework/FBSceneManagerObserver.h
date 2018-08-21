/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSZeroingWeakReference.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/FBSceneManagerInternalObserver.h>
#import <libobjc.A.dylib/FBSceneManagerDelegate.h>

@class NSString;

@interface FBSceneManagerObserver : BSZeroingWeakReference <BSDescriptionProviding, FBSceneManagerInternalObserver, FBSceneManagerDelegate> {

	BOOL _delegate;
	BOOL _internalObserver;
	BOOL _didCreate;
	BOOL _willDestroy;
	BOOL _didDestroy;
	BOOL _updatePrepared;
	BOOL _updateApplied;
	BOOL _updateCompleted;
	BOOL _didCreateSceneDEPRECATED;
	BOOL _willUpdateSceneDEPRECATED;
	BOOL _willCommitDEPRECATED;
	BOOL _didCommitDEPRECATED;
	BOOL _didCommitDEPRECATED2;
	BOOL _willSynchronize;
	BOOL _didSynchronize;
	BOOL _amendSettings;
	BOOL _didUpdateClientSettings;
	BOOL _didReceiveActions;
	BOOL _hostingPolicyForScene;
	BOOL _createDefaultTransitionContext;

}

@property (nonatomic,readonly) id observer; 
@property (getter=isDelegate,nonatomic,readonly) BOOL delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isInternalObserver,nonatomic,readonly) BOOL internalObserver;              //@synthesize internalObserver=_internalObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)observerWithObserver:(id)arg1 ;
-(BOOL)delegate;
-(NSString *)description;
-(id)initWithDelegate:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)observer;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 willDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 updateForScene:(id)arg2 preparedWithContext:(id)arg3 ;
-(void)sceneManager:(id)arg1 updateForScene:(id)arg2 appliedWithContext:(id)arg3 ;
-(void)sceneManager:(id)arg1 updateForScene:(id)arg2 completedWithContext:(id)arg3 error:(id)arg4 ;
-(void)sceneManagerWillBeginSceneUpdateSynchronization:(id)arg1 ;
-(void)sceneManagerDidEndSceneUpdateSynchronization:(id)arg1 ;
-(void)sceneManager:(id)arg1 amendSettings:(id)arg2 forUpdatingScene:(id)arg3 ;
-(void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5 ;
-(long long)sceneManager:(id)arg1 hostingPolicyForScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3 ;
-(id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2 ;
-(BOOL)isInternalObserver;
-(id)initWithObserver:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)isDelegate;
@end

