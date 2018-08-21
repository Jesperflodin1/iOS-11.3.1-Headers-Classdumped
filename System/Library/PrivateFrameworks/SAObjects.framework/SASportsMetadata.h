/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASportsMetadata : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * average; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSNumber * selected; 
@property (nonatomic,copy) NSString * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)metadata;
+(id)metadataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
-(void)setSelected:(NSNumber *)arg1 ;
-(NSNumber *)selected;
-(id)encodedClassName;
-(NSNumber *)average;
-(void)setAverage:(NSNumber *)arg1 ;
@end

