/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MovieCompositionItem.h>

@interface ExtraCompositionItem : MovieCompositionItem
-(id)initWithClip:(id)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_Mi1)arg1 paddedFromTime:(SCD_Struct_Mi1)arg2 ;
-(BOOL)hasVideoContent;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_Mi11)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_Mi1)arg1 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_Mi11)arg1 ;
@end

