/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SAHLWorkoutGoal, SAHLWorkoutType, NSString;

@interface SAHLStartWorkout : SADomainCommand

@property (assign,nonatomic) BOOL isOpenGoal; 
@property (assign,nonatomic) BOOL skipActivitySetup; 
@property (nonatomic,retain) SAHLWorkoutGoal * workoutGoal; 
@property (nonatomic,retain) SAHLWorkoutType * workoutType; 
@property (nonatomic,copy) NSString * workoutUserMode; 
+(id)startWorkoutWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)startWorkout;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAHLWorkoutGoal *)workoutGoal;
-(BOOL)isOpenGoal;
-(void)setIsOpenGoal:(BOOL)arg1 ;
-(BOOL)skipActivitySetup;
-(void)setSkipActivitySetup:(BOOL)arg1 ;
-(void)setWorkoutGoal:(SAHLWorkoutGoal *)arg1 ;
-(void)setWorkoutType:(SAHLWorkoutType *)arg1 ;
-(NSString *)workoutUserMode;
-(void)setWorkoutUserMode:(NSString *)arg1 ;
-(SAHLWorkoutType *)workoutType;
@end

