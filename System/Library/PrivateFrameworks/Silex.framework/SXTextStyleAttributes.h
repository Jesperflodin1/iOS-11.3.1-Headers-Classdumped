/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSDictionary;

@interface SXTextStyleAttributes : NSObject <NSCopying> {

	NSMutableDictionary* _mutableAttributes;
	NSRange _range;

}

@property (nonatomic,readonly) NSMutableDictionary * mutableAttributes;              //@synthesize mutableAttributes=_mutableAttributes - In the implementation block
@property (nonatomic,readonly) NSRange range;                                        //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes; 
+(id)attributesWithRange:(NSRange)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)range;
-(NSDictionary *)attributes;
-(NSMutableDictionary *)mutableAttributes;
-(void)addAttribute:(id)arg1 value:(id)arg2 ;
-(id)initWithRange:(NSRange)arg1 ;
@end

