//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DfRulerViewHelpers : NSObject
{
}

+ (void)getRulerDrawInfoForTimeRuler:(CDStruct_3a9866bf *)arg1 clockMode:(int)arg2 document:(id)arg3 labelMaxPixelWidth:(double)arg4 minTimeTickPixelWidth:(double)arg5;
+ (struct _Df_TimeGridDrawInfoList_t)_determineTimeGridInfoAtTimePosition:(int)arg1 document:(id)arg2 clockMode:(int)arg3 minTickPixelDistance:(float)arg4 minLabelPixelDistance:(float)arg5;
+ (long long)quantizeClock:(long long)arg1 forBarGridDrawingInfos:(struct _Df_BarGridDrawInfoList_t *)arg2 alsoQuantizeIfSmallerThanFormat:(_Bool)arg3;
+ (struct _Df_BarGridDrawInfoList_t *)findBarGridInfoForClock:(long long)arg1 inBarGridDrawingInfos:(struct _Df_BarGridDrawInfoList_t *)arg2;
+ (void)_getRulerDrawInfoItemForBarAndScoreRuler:(struct _Df_BarGridDrawInfoList_t *)arg1 drawInfo:(CDStruct_3a9866bf *)arg2 signatureInfo:(id)arg3 clockMode:(int)arg4 document:(id)arg5 minBeatTickPixelWidth:(double)arg6 minGrooveTickPixelWidth:(double)arg7 quantizeSplitPixelThreshold:(double)arg8 visiblePixelWidth:(double)arg9;
+ (void)getRulerDrawInfoForBarAndScoreRuler:(CDStruct_3a9866bf *)arg1 clockMode:(int)arg2 document:(id)arg3 labelMaxPixelWidth:(double)arg4 minBeatTickPixelWidth:(double)arg5 minGrooveTickPixelWidth:(double)arg6 quantizeSplitPixelThreshold:(double)arg7 visiblePixelWidth:(double)arg8;
+ (struct _Df_TimeGridDrawInfoList_t *)_addEntry:(struct _Df_TimeGridDrawInfoList_t)arg1 toTimeGridInfoList:(struct _Df_TimeGridDrawInfoList_t *)arg2 inDrawInfo:(CDStruct_3a9866bf *)arg3;
+ (_Bool)_isValidSkipFormatForMultiplyer:(int)arg1 itemsPerBar:(long long)arg2;
+ (_Bool)_equalTimeGridInfoData:(struct _Df_TimeGridDrawInfoList_t *)arg1:(struct _Df_TimeGridDrawInfoList_t *)arg2;
+ (void)deleteGridDrawInfo:(CDStruct_3a9866bf *)arg1;
+ (CDStruct_3a9866bf)copyGridDrawInfo:(CDStruct_3a9866bf)arg1;

@end
