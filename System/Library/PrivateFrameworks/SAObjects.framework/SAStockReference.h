/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAStockReference : SADomainObject

@property (nonatomic,copy) NSString * companyName; 
@property (nonatomic,copy) NSString * symbol; 
+(id)referenceWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)reference;
-(id)groupIdentifier;
-(NSString *)symbol;
-(void)setSymbol:(NSString *)arg1 ;
-(NSString *)companyName;
-(id)encodedClassName;
-(void)setCompanyName:(NSString *)arg1 ;
@end
