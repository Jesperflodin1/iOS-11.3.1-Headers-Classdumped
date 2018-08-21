/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceClientState.h>

@class SACalendar, NSString;

@interface SADynamiteClientState : SAAceClientState

@property (nonatomic,retain) SACalendar * expirationDate; 
@property (nonatomic,copy) NSString * status; 
@property (nonatomic,copy) NSString * userToken; 
@property (nonatomic,copy) NSString * xpAbCookie; 
+(id)deliveryDeadline;
+(id)persistencePolicy;
+(id)syncKey;
+(id)uniqueObjectIdentifier;
+(id)dynamiteClientState;
+(id)dynamiteClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setStatus:(NSString *)arg1 ;
-(NSString *)status;
-(SACalendar *)expirationDate;
-(void)setExpirationDate:(SACalendar *)arg1 ;
-(id)encodedClassName;
-(NSString *)xpAbCookie;
-(void)setXpAbCookie:(NSString *)arg1 ;
-(void)setUserToken:(NSString *)arg1 ;
-(NSString *)userToken;
@end

