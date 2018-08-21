/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKGenericCondition, NSString;

@interface CKTripleCondition : NSObject <NSCopying, NSSecureCoding> {

	 rawCondition;

}

@property (retain,nonatomic) CKGenericCondition * rawCondition; 
@property (readonly,nonatomic) NSString * description; 
+(id)havingPredicate:(id)arg1 matchType:(long long)arg2 error:(id*)arg3 ;
+(id)havingSubject:(id)arg1 andAbject:(id)arg2 ;
+(id)forRulesFrom:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg1 ;
-(id)init:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(void*)arg1 ;
-(id)initWithValue:(BOOL)arg1 ;
-(id)initWithSubject:(id)arg1 predicate:(id)arg2 object:(id)arg3 ;
-(id)and:(id)arg1 ;
-(id)or:(id)arg1 ;
-(BOOL)evaluateOn:(id)arg1 ;
-(CKGenericCondition *)rawCondition;
-(void)setRawCondition:(CKGenericCondition *)arg1 ;
@end

