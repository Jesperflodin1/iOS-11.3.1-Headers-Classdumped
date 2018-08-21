/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSData, NSString;

@interface SAIntentGroupProtobufMessage : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSData * data; 
@property (nonatomic,copy) NSString * debugString; 
@property (nonatomic,copy) NSString * typeName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)protobufMessage;
+(id)protobufMessageWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)encodedClassName;
-(NSString *)debugString;
-(void)setDebugString:(NSString *)arg1 ;
-(void)setTypeName:(NSString *)arg1 ;
-(NSString *)typeName;
@end

