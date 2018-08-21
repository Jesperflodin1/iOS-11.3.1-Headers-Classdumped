/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UITextMagnifierTimeWeightedPoint : NSObject {

	int m_index;
	SCD_Struct_UI67 m_points[16];

}

@property (nonatomic,readonly) CGPoint weightedPoint; 
-(void)clearHistory;
-(void)addPoint:(CGPoint)arg1 ;
-(CGPoint)weightedPoint;
-(BOOL)historyCovers:(double)arg1 ;
-(float)distanceCoveredInInterval:(double)arg1 ;
-(float)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2 ;
-(CGSize)displacementInInterval:(double)arg1 priorTo:(double)arg2 ;
-(CGSize)displacementInInterval:(double)arg1 ;
@end

