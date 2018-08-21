/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSArray.h>

@protocol SYChangeSerializer;
@class NSArray;

@interface _SYLazyChangeArray : NSArray {

	NSArray* _source;
	NSArray* _types;
	id<SYChangeSerializer> _decoder;
	BOOL _isSYObjectDataArray;
	long long _compatibilityVersion;

}

@property (assign,nonatomic) long long compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)initWithSYObjectDataArray:(id)arg1 typeArray:(id)arg2 decoder:(id)arg3 ;
-(id)initWithSourceArray:(id)arg1 decoder:(id)arg2 ;
-(void)setCompatibilityVersion:(long long)arg1 ;
-(long long)compatibilityVersion;
@end

