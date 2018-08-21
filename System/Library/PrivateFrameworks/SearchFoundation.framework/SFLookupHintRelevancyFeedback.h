/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFLookupHintRelevancyFeedback : SFFeedback {

	BOOL _discarded;
	NSString* _context;
	NSString* _domain;
	unsigned long long _grade;
	NSRange _hintRange;

}

@property (nonatomic,copy) NSString * context;                      //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) NSRange hintRange;                     //@synthesize hintRange=_hintRange - In the implementation block
@property (nonatomic,copy) NSString * domain;                       //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL discarded;                        //@synthesize discarded=_discarded - In the implementation block
@property (assign,nonatomic) unsigned long long grade;              //@synthesize grade=_grade - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)domain;
-(NSString *)context;
-(void)setContext:(NSString *)arg1 ;
-(id)initWithContext:(id)arg1 hintRange:(NSRange)arg2 domain:(id)arg3 discarded:(BOOL)arg4 grade:(unsigned long long)arg5 ;
-(NSRange)hintRange;
-(void)setHintRange:(NSRange)arg1 ;
-(BOOL)discarded;
-(void)setDiscarded:(BOOL)arg1 ;
-(unsigned long long)grade;
-(void)setGrade:(unsigned long long)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
@end

