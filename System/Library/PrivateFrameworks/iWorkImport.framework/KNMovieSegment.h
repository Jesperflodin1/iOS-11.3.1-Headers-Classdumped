/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSPData;

@interface KNMovieSegment : NSObject {

	TSPData* _movieData;
	double _startTime;

}

@property (nonatomic,readonly) TSPData * movieData;                                  //@synthesize movieData=_movieData - In the implementation block
@property (getter=isEmptySegment,nonatomic,readonly) BOOL emptySegment; 
@property (nonatomic,readonly) double startTime;                                     //@synthesize startTime=_startTime - In the implementation block
-(void)saveToArchive:(MovieSegmentArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithMovieData:(id)arg1 startTime:(double)arg2 ;
-(id)initEmptySegmentWithStartTime:(double)arg1 ;
-(BOOL)isEmptySegment;
-(id)movieSegmentByAddingTimeOffset:(double)arg1 ;
-(id)initWithContext:(id)arg1 archive:(const MovieSegmentArchive*)arg2 unarchiver:(id)arg3 ;
-(id)init;
-(double)startTime;
-(TSPData *)movieData;
@end
