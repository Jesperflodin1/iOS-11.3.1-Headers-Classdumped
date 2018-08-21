/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAMPGetState, NSArray;

@interface SAMPGetStateResponseRemote : SABaseClientBoundCommand

@property (nonatomic,retain) SAMPGetState * getState; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (assign,nonatomic) double routeTimeout; 
+(id)getStateResponseRemote;
+(id)getStateResponseRemoteWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(SAMPGetState *)getState;
-(double)routeTimeout;
-(void)setRouteTimeout:(double)arg1 ;
-(void)setGetState:(SAMPGetState *)arg1 ;
@end

