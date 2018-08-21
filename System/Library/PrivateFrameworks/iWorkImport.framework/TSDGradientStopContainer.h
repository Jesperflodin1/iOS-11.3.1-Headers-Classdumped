/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, TSUColor;


@protocol TSDGradientStopContainer <NSObject,NSMutableCopying>
@property (nonatomic,retain) NSArray * gradientStops; 
@property (nonatomic,retain) TSUColor * firstColor; 
@property (nonatomic,retain) TSUColor * lastColor; 
@required
-(NSArray *)gradientStops;
-(TSUColor *)firstColor;
-(TSUColor *)lastColor;
-(void)setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(id)arg2;
-(void)insertGradientStop:(id)arg1;
-(id)insertStopAtFraction:(double)arg1;
-(void)swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2;
-(id)insertStopAtFraction:(double)arg1 withColor:(id)arg2;
-(void)removeStop:(id)arg1;
-(id)removeStopAtIndex:(unsigned long long)arg1;
-(void)reverseStopOrder;
-(void)evenlyDistributeStops;
-(void)moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2;
-(void)setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2;
-(void)setGradientStops:(id)arg1;
-(void)setFirstColor:(id)arg1;
-(void)setLastColor:(id)arg1;

@end

