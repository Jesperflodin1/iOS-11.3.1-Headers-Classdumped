/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSDSizedImageDescription : NSObject <NSCopying> {

	BOOL _isWideGamut;
	BOOL _hasBakedMask;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                    //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL isWideGamut;               //@synthesize isWideGamut=_isWideGamut - In the implementation block
@property (nonatomic,readonly) BOOL hasBakedMask;              //@synthesize hasBakedMask=_hasBakedMask - In the implementation block
-(BOOL)isEqualToSizedImageDescription:(id)arg1 ;
-(BOOL)hasBakedMask;
-(id)initWithSize:(CGSize)arg1 isWideGamut:(BOOL)arg2 hasBakedMask:(BOOL)arg3 ;
-(CGSize)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isWideGamut;
@end

