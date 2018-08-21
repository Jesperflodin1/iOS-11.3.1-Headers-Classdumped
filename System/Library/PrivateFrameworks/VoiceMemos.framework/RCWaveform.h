/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface RCWaveform : NSObject <NSMutableCopying, NSCopying, NSSecureCoding> {

	NSMutableArray* _segments;
	unsigned long long _decodedVersion;

}

@property (nonatomic,readonly) NSArray * segments;                                     //@synthesize segments=_segments - In the implementation block
@property (nonatomic,readonly) unsigned long long averagePowerLevelsRate; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)waveformURLForAVURL:(id)arg1 ;
+(id)waveformWithContentsOfURL:(id)arg1 minimumRequiredVersion:(unsigned long long)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)segments;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithSegments:(id)arg1 ;
-(BOOL)hasUniformPowerLevel:(float)arg1 ;
-(id)segmentsByClippingToTimeRange:(SCD_Struct_RC4)arg1 ;
-(unsigned long long)averagePowerLevelsRate;
-(BOOL)saveContentsToURL:(id)arg1 ;
-(id)_mutableSegmentsByClippingToTimeRange:(SCD_Struct_RC4)arg1 ;
-(id)_mutableSegmentsIntersectingTimeRange:(SCD_Struct_RC4)arg1 intersectionRange:(NSRange*)arg2 ;
-(void)_mergeBoundarySegmentsInArray:(id)arg1 ;
-(NSRange)rangeOfSegmentsIntersectingTimeRange:(SCD_Struct_RC4)arg1 ;
-(BOOL)isWaveformDataEqualToDataInWaveform:(id)arg1 ;
@end
