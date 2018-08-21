/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NUHistogram;

@interface NUImageHistogram : NSObject <NSCopying, NSMutableCopying> {

	long long _sampleCount;
	long long _binCount;
	NUHistogram* _red;
	NUHistogram* _green;
	NUHistogram* _blue;
	NUHistogram* _luminance;
	SCD_Struct_NU9 _range;

}

@property (nonatomic,readonly) long long binCount;                   //@synthesize binCount=_binCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_NU9 range;                 //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) long long sampleCount;                //@synthesize sampleCount=_sampleCount - In the implementation block
@property (nonatomic,readonly) NUHistogram * red;                    //@synthesize red=_red - In the implementation block
@property (nonatomic,readonly) NUHistogram * green;                  //@synthesize green=_green - In the implementation block
@property (nonatomic,readonly) NUHistogram * blue;                   //@synthesize blue=_blue - In the implementation block
@property (nonatomic,readonly) NUHistogram * luminance;              //@synthesize luminance=_luminance - In the implementation block
+(Class)_histogramClass;
-(id)init;
-(id)description;
-(long long)sampleCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_NU9)range;
-(NUHistogram *)red;
-(NUHistogram *)green;
-(NUHistogram *)blue;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)binCount;
-(id)initWithBinCount:(long long)arg1 range:(SCD_Struct_NU9)arg2 ;
-(id)immutableCopyWithZone:(NSZone*)arg1 ;
-(NUHistogram *)luminance;
@end

