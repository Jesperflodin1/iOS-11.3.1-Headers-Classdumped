/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SAPersonAttribute, NSNumber;

@interface SAPhoneCall : SADomainCommand

@property (nonatomic,retain) SAPersonAttribute * callRecipient; 
@property (nonatomic,copy) NSNumber * emergencyCall; 
@property (assign,nonatomic) BOOL faceTime; 
@property (assign,nonatomic) BOOL faceTimeAudio; 
@property (assign,nonatomic) BOOL handsFreeCall; 
@property (assign,nonatomic) BOOL speakerphoneCall; 
+(id)call;
+(id)callWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAPersonAttribute *)callRecipient;
-(void)setCallRecipient:(SAPersonAttribute *)arg1 ;
-(NSNumber *)emergencyCall;
-(void)setEmergencyCall:(NSNumber *)arg1 ;
-(BOOL)faceTime;
-(void)setFaceTime:(BOOL)arg1 ;
-(BOOL)faceTimeAudio;
-(void)setFaceTimeAudio:(BOOL)arg1 ;
-(BOOL)handsFreeCall;
-(void)setHandsFreeCall:(BOOL)arg1 ;
-(BOOL)speakerphoneCall;
-(void)setSpeakerphoneCall:(BOOL)arg1 ;
@end

