/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFStateMachineDelegate;
#import <Sharing/Sharing-Structs.h>
@class NSString, NSDictionary;

@interface SFStateMachine : NSObject {

	opaque_pthread_mutex_t _lock;
	BOOL _shouldLogStateTransitions;
	NSString* _currentState;
	NSDictionary* _validTransitions;
	id<SFStateMachineDelegate> _delegate;

}

@property (copy) NSString * currentState;                                 //@synthesize currentState=_currentState - In the implementation block
@property (retain) NSDictionary * validTransitions;                       //@synthesize validTransitions=_validTransitions - In the implementation block
@property (assign) id<SFStateMachineDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldLogStateTransitions;              //@synthesize shouldLogStateTransitions=_shouldLogStateTransitions - In the implementation block
-(id)init;
-(id<SFStateMachineDelegate>)delegate;
-(void)setDelegate:(id<SFStateMachineDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)currentState;
-(id)target;
-(void)setCurrentState:(NSString *)arg1 ;
-(BOOL)_setCurrentState:(id)arg1 ;
-(BOOL)shouldLogStateTransitions;
-(id)_validateTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(void)_performTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(id)missingTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(id)_missingTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(NSDictionary *)validTransitions;
-(BOOL)applyState:(id)arg1 ;
-(void)setValidTransitions:(NSDictionary *)arg1 ;
-(void)setShouldLogStateTransitions:(BOOL)arg1 ;
@end

