/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSDictionary;

@interface NSAddressCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSDictionary* _components;
	id _underlyingResult;

}

@property (readonly) void* underlyingResult; 
+(BOOL)supportsSecureCoding;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(void*)underlyingResult;
-(id)initWithRange:(NSRange)arg1 components:(id)arg2 ;
-(id)initWithRange:(NSRange)arg1 components:(id)arg2 underlyingResult:(void*)arg3 ;
-(unsigned long long)resultType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSRange)range;
-(id)components;
@end

