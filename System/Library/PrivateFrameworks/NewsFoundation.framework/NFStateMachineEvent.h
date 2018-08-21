/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet, NFStateMachineState;

@interface NFStateMachineEvent : NSObject {

	NSString* _name;
	NSSet* _states;
	NFStateMachineState* _destinationState;
	/*^block*/id _fireBlock;

}

@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSSet * states;                                      //@synthesize states=_states - In the implementation block
@property (nonatomic,retain) NFStateMachineState * destinationState;              //@synthesize destinationState=_destinationState - In the implementation block
@property (nonatomic,copy) id fireBlock;                                          //@synthesize fireBlock=_fireBlock - In the implementation block
-(void)setStates:(NSSet *)arg1 ;
-(NSSet *)states;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)fireBlock;
-(void)setFireBlock:(id)arg1 ;
-(NFStateMachineState *)destinationState;
-(id)fired:(id)arg1 withOwner:(id)arg2 ;
-(id)onFire:(/*^block*/id)arg1 ;
-(void)setDestinationState:(NFStateMachineState *)arg1 ;
-(id)initWithName:(id)arg1 transitionFromStates:(id)arg2 toState:(id)arg3 ;
@end
