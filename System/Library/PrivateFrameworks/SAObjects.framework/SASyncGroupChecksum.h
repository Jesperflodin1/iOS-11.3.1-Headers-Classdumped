/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SASyncAnchor;

@interface SASyncGroupChecksum : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long count; 
@property (nonatomic,copy) NSString * domainObjectClass; 
@property (nonatomic,copy) NSString * identifierChecksum; 
@property (nonatomic,retain) SASyncAnchor * syncAnchor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)groupChecksum;
+(id)groupChecksumWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(id)encodedClassName;
-(SASyncAnchor *)syncAnchor;
-(void)setSyncAnchor:(SASyncAnchor *)arg1 ;
-(NSString *)domainObjectClass;
-(void)setDomainObjectClass:(NSString *)arg1 ;
-(NSString *)identifierChecksum;
-(void)setIdentifierChecksum:(NSString *)arg1 ;
@end

