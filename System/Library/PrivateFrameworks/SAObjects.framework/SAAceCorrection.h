/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSData, NSString;

@interface SAAceCorrection : SADomainObject

@property (nonatomic,copy) NSData * correctionEntryData; 
@property (nonatomic,copy) NSString * debugString; 
+(id)aceCorrection;
+(id)aceCorrectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)debugString;
-(void)setDebugString:(NSString *)arg1 ;
-(NSData *)correctionEntryData;
-(void)setCorrectionEntryData:(NSData *)arg1 ;
@end
