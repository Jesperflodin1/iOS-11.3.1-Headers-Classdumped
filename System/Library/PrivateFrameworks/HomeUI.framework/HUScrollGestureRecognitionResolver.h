/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSSet;

@interface HUScrollGestureRecognitionResolver : NSObject {

	double _conflictingGestureActivationDelay;
	NSMutableSet* _mutablePanGestureReocgnizers;
	NSMutableSet* _conflictingGestureStates;

}

@property (nonatomic,readonly) NSMutableSet * mutablePanGestureReocgnizers;              //@synthesize mutablePanGestureReocgnizers=_mutablePanGestureReocgnizers - In the implementation block
@property (nonatomic,readonly) NSMutableSet * conflictingGestureStates;                  //@synthesize conflictingGestureStates=_conflictingGestureStates - In the implementation block
@property (assign,nonatomic) double conflictingGestureActivationDelay;                   //@synthesize conflictingGestureActivationDelay=_conflictingGestureActivationDelay - In the implementation block
@property (nonatomic,readonly) NSSet * panGestureRecognizers; 
@property (nonatomic,readonly) NSSet * conflictingGestureRecognizers; 
-(id)init;
-(void)dealloc;
-(void)_handlePanGesture:(id)arg1 ;
-(NSMutableSet *)mutablePanGestureReocgnizers;
-(void)removePanGestureRecognizer:(id)arg1 ;
-(NSMutableSet *)conflictingGestureStates;
-(void)_removeConflictingGestureState:(id)arg1 ;
-(id)_stateForConflictingGestureRecognizer:(id)arg1 ;
-(void)_handleConflictingGesture:(id)arg1 ;
-(void)_cancelConflictingGestures;
-(void)_clearSimultaenouslyRecognizedGestures;
-(double)conflictingGestureActivationDelay;
-(void)_activeTimerDidFireForOtherGesture:(id)arg1 ;
-(NSSet *)conflictingGestureRecognizers;
-(void)addPanGestureRecognizer:(id)arg1 ;
-(void)addConflictingGestureRecognizer:(id)arg1 ;
-(void)removeConflictingGestureRecognizer:(id)arg1 ;
-(void)setConflictingGestureActivationDelay:(double)arg1 ;
-(NSSet *)panGestureRecognizers;
@end

