/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBUISceneHost.h>

@protocol FBUISceneHost <FBUISceneHostProxy>
@required
-(id)sceneClient;
-(void)registerSceneClient:(id)arg1;
-(void)invalidateSceneClient;

@end

#import <libobjc.A.dylib/FBUISceneUpdater.h>

@protocol FBUISceneClientProxy;
@class NSString, FBSSceneSpecification;

@interface FBUISceneHost : NSObject <FBUISceneHost, FBUISceneUpdater> {

	NSString* _identifier;
	FBSSceneSpecification* _specification;
	id<FBUISceneClientProxy> _sceneClient;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contentView;
-(void)dealloc;
-(NSString *)description;
-(void)sendActions:(id)arg1 ;
-(id)sceneIdentifier;
-(id)initWithIdentifier:(id)arg1 specification:(id)arg2 ;
-(id)sceneClient;
-(id)sceneSpecification;
-(void)sceneClient:(id)arg1 didAttachLayer:(id)arg2 ;
-(void)sceneClient:(id)arg1 didUpdateLayer:(id)arg2 ;
-(void)sceneClient:(id)arg1 didDetachLayer:(id)arg2 ;
-(void)sceneClient:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneClient:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)didInvalidateSceneClient:(id)arg1 ;
-(void)registerSceneClient:(id)arg1 ;
-(void)invalidateSceneClient;
-(void)updateSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end
