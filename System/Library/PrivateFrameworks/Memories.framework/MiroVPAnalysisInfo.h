/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MiroVPMetadataRangeMergeable;
@class NSDate, NSArray;

@interface MiroVPAnalysisInfo : NSObject <NSCopying> {

	unsigned long long _flags;
	long long _analysisVersion;
	unsigned long long _performedAnalysisTypes;
	NSDate* _performedAnalysisDate;
	double _qualityScore;
	double _junkScore;
	NSArray*<MiroVPMetadataRangeMergeable> _ranges;
	id context;

}

@property (nonatomic,readonly) unsigned long long flags;                                   //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) long long analysisVersion;                                  //@synthesize analysisVersion=_analysisVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long performedAnalysisTypes;                  //@synthesize performedAnalysisTypes=_performedAnalysisTypes - In the implementation block
@property (nonatomic,readonly) NSDate * performedAnalysisDate;                             //@synthesize performedAnalysisDate=_performedAnalysisDate - In the implementation block
@property (nonatomic,readonly) double qualityScore;                                        //@synthesize qualityScore=_qualityScore - In the implementation block
@property (nonatomic,readonly) double junkScore;                                           //@synthesize junkScore=_junkScore - In the implementation block
@property (nonatomic,readonly) NSArray*<MiroVPMetadataRangeMergeable> ranges;              //@synthesize ranges=_ranges - In the implementation block
@property (nonatomic,retain) id context; 
+(id)analysisInfoWithFlags:(unsigned long long)arg1 analysisVersion:(long long)arg2 performedAnalysisTypes:(unsigned long long)arg3 performedAnalysisDate:(id)arg4 qualityScore:(double)arg5 junkScore:(double)arg6 ranges:(id)arg7 ;
+(id)descriptionForAnalysisTypes:(unsigned long long)arg1 ;
-(unsigned long long)flags;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)context;
-(void)setContext:(id)arg1 ;
-(NSArray*<MiroVPMetadataRangeMergeable>)ranges;
-(long long)analysisVersion;
-(unsigned long long)performedAnalysisTypes;
-(NSDate *)performedAnalysisDate;
-(double)qualityScore;
-(double)junkScore;
@end

