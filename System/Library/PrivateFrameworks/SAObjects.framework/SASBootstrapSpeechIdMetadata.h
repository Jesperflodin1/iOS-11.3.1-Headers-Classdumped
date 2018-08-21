/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSDate;

@interface SASBootstrapSpeechIdMetadata : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * bootstrapSpeechId; 
@property (nonatomic,copy) NSString * deviceType; 
@property (nonatomic,copy) NSDate * keychainCreationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bootstrapSpeechIdMetadata;
+(id)bootstrapSpeechIdMetadataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)bootstrapSpeechId;
-(void)setBootstrapSpeechId:(NSString *)arg1 ;
-(NSDate *)keychainCreationDate;
-(void)setKeychainCreationDate:(NSDate *)arg1 ;
-(void)setDeviceType:(NSString *)arg1 ;
-(NSString *)deviceType;
@end

