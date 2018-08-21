/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHStrokeGroup.h>

@interface CHTimeWindowStrokeGroup : CHStrokeGroup {

	double _startTimestamp;
	double _endTimestamp;

}

@property (nonatomic,readonly) double startTimestamp;              //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (nonatomic,readonly) double endTimestamp;                //@synthesize endTimestamp=_endTimestamp - In the implementation block
-(double)endTimestamp;
-(id)initWithStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(CGRect)arg4 startTimestamp:(double)arg5 endTimestamp:(double)arg6 ;
-(id)groupByAddingStrokeIdentifiers:(id)arg1 removingStrokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(CGRect)arg5 startTimestamp:(double)arg6 endTimestamp:(double)arg7 ;
-(double)startTimestamp;
@end

