/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SALocation, NSString;

@interface SALocalSearchStartNavigation : SABaseClientBoundCommand

@property (nonatomic,retain) SALocation * destination; 
@property (nonatomic,copy) NSString * directionsType; 
@property (nonatomic,retain) SALocation * origin; 
+(id)startNavigation;
+(id)startNavigationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)directionsType;
-(void)setDirectionsType:(NSString *)arg1 ;
-(SALocation *)origin;
-(void)setOrigin:(SALocation *)arg1 ;
-(SALocation *)destination;
-(void)setDestination:(SALocation *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

