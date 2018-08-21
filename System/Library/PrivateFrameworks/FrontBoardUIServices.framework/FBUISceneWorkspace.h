/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/FBUISceneWorkspace.h>

@protocol FBUISceneWorkspace <NSObject>
@required
-(id)identifier;
-(id)sceneManager:(id)arg1 surrogateForSceneWithIdentifier:(id)arg2;

@end


@class NSString, NSMutableDictionary, NSSet;

@interface FBUISceneWorkspace : NSObject <BSDescriptionProviding, FBUISceneWorkspace> {

	BOOL _valid;
	NSString* _identifier;
	NSMutableDictionary* _scenesByName;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * scenes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(NSString *)description;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 ;
-(void)activateScene:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)deactivateScene:(id)arg1 ;
-(id)sceneWithName:(id)arg1 ;
-(id)createSceneWithName:(id)arg1 specification:(id)arg2 ;
-(id)callOutQueue;
-(id)sceneManager:(id)arg1 surrogateForSceneWithIdentifier:(id)arg2 ;
-(NSSet *)scenes;
-(void)destroyScene:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

