/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKTurnBasedParticipantInternal, NSDate, NSString, GKPlayer;

@interface GKTurnBasedParticipant : NSObject {

	GKTurnBasedParticipantInternal* _internal;

}

@property (retain,readonly) GKTurnBasedParticipantInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy) NSDate * lastTurnDate; 
@property (nonatomic,copy) NSDate * timeoutDate; 
@property (nonatomic,readonly) NSString * matchStatusString; 
@property (nonatomic,readonly) NSString * matchOutcomeString; 
@property (nonatomic,readonly) BOOL isWinner; 
@property (nonatomic,readonly) GKPlayer * invitedBy; 
@property (nonatomic,readonly) NSString * inviteMessage; 
@property (nonatomic,readonly) BOOL isLocalPlayer; 
@property (nonatomic,retain,readonly) GKPlayer * player; 
@property (nonatomic,readonly) long long status; 
@property (assign,nonatomic) long long matchOutcome; 
@property (nonatomic,copy,readonly) NSString * playerID; 
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(id)stringForMatchOutcome:(long long)arg1 ;
+(id)keyPathsForValuesAffectingStatus;
+(id)keyPathsForValuesAffectingBasicMatchOutcomeString;
+(id)keyPathsForValuesAffectingMatchOutcomeString;
+(BOOL)matchOutcomeIsValidForDoneState:(long long)arg1 ;
-(id)init;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(long long)status;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSString *)playerID;
-(GKPlayer *)player;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(BOOL)isLocalPlayer;
-(id)basicMatchOutcomeString;
-(BOOL)isWinner;
-(GKPlayer *)invitedBy;
-(NSDate *)lastTurnDate;
-(id)matchOutcomeStringForLocalPlayer;
-(NSString *)matchOutcomeString;
-(NSString *)matchStatusString;
-(GKTurnBasedParticipantInternal *)internal;
@end
