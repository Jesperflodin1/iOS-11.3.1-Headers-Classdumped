/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <libobjc.A.dylib/SAAceSerializable.h>

@class NSArray, NSDate, NSString, NSNumber;

@interface CFCNAutoCompleteFetchContext : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * bundleIdentifiers; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSString * domainIdentifier; 
@property (nonatomic,copy) NSString * locationUUID; 
@property (nonatomic,copy) NSArray * otherAddressesAlreadyChosen; 
@property (nonatomic,copy) NSNumber * predictsBasedOnOutgoingInteraction; 
@property (nonatomic,copy) NSString * sendingAddress; 
@property (nonatomic,copy) NSString * sendingAddressAccountIdentifier; 
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)autoCompleteFetchContext;
+(id)autoCompleteFetchContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(NSArray *)bundleIdentifiers;
-(id)encodedClassName;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(void)setSendingAddressAccountIdentifier:(NSString *)arg1 ;
-(void)setSendingAddress:(NSString *)arg1 ;
-(NSNumber *)predictsBasedOnOutgoingInteraction;
-(NSString *)sendingAddress;
-(NSArray *)otherAddressesAlreadyChosen;
-(NSString *)sendingAddressAccountIdentifier;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
-(void)setOtherAddressesAlreadyChosen:(NSArray *)arg1 ;
-(void)setPredictsBasedOnOutgoingInteraction:(NSNumber *)arg1 ;
-(NSString *)domainIdentifier;
-(void)setLocationUUID:(NSString *)arg1 ;
-(NSString *)locationUUID;
@end

